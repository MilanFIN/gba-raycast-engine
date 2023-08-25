#include <tonc.h>

const float PI = 3.1415;
const int MAPSIZE = 8;

int MAP[8][8] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {2, 0, 0, 0, 0, 0, 0, 1},
        {2, 0, 0, 0, 0, 0, 0, 1},
        {2, 0, 0, 0, 0, 0, 0, 1},
        {2, 0, 0, 0, 0, 0, 0, 1},
        {2, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 1, 1, 1, 1, 1, 1}
    };


const int SCREENHEIGHT = 160;
const int SCREENWIDTH = 240;
const int CASTEDRAYS = 240;
const int FOV = 90;
const int TILESIZE = 64; //8
const int MAXDEPTH = TILESIZE * 10;
const int DISTANCETOVIEWPORT = 255; //half of width / tan(half of fov)

void initMap() {

	/*
	MAP[4][3] = 2;
	MAP[3][3] = 1;
	MAP[5][3] = 3;
	*/

	//MAP[2][2] = 1;

	for(int i = 0; i < MAPSIZE; i++) {
		MAP[0][i] = 1;
		MAP[MAPSIZE-1][i] = 2;
		MAP[i][0] = 3;
		MAP[i][MAPSIZE-1] = 4;
		for (int j = 0; j < 8; j++) {
			//MAP[i][j] = 1;
		}
	}
	
}


void castRays(FIXED x, FIXED y, int direction) {
	const FIXED PI2 = int2fx(0x10000 >> 1);//float2fx(2*PI);

	const FIXED STEPANGLE = fxdiv(int2fx(FOV), int2fx(CASTEDRAYS));
	int positiveAngle = direction - FOV/2;
	if (positiveAngle < 0) {
		positiveAngle = 360 + positiveAngle;
	}
	FIXED angle = int2fx(positiveAngle % 360);
	const FIXED FIXEDTILESIZE = int2fx(TILESIZE);

	for (int i = 0; i < CASTEDRAYS; i++) {
		for (int depth = 0; depth < MAXDEPTH; depth++) {

			int luAngle = 0;
			if (angle != 0) {
				luAngle = fxmul(PI2, fxdiv(angle, int2fx(360))) >> 7;

			}

			FIXED moveX = fxdiv(fxmul(lu_sin(luAngle), int2fx(depth)), int2fx(16));
            FIXED targetX = fxsub(fxmul(x, int2fx(TILESIZE)), moveX);
            FIXED tileX = fxdiv(targetX, FIXEDTILESIZE); 
			
			FIXED luCos = lu_cos(luAngle);
			FIXED moveY = fxdiv(fxmul(luCos, int2fx(depth)), int2fx(16));
            FIXED targetY = fxsub(fxmul(y, int2fx(TILESIZE)), moveY);
            FIXED tileY = fxdiv(targetY, FIXEDTILESIZE); 

			int tileXi = fx2int(tileX);
			int tileYi = fx2int(tileY);
			CLAMP(tileXi, 0, 7);
			CLAMP(tileYi, 0, 7);

			if (MAP[tileYi][tileXi] != 0)
			{
				int wallHeight = 160;
				if (depth != 0) {
					wallHeight = 160-6*depth;
					wallHeight = CLAMP(TILESIZE * DISTANCETOVIEWPORT / (depth), 0, 160);

				}
				int halfHeight = wallHeight >> 1;

				int brightness = 15;
				/*
				if ( targetX - fxmul(tileX, FIXEDTILESIZE) == 0) {
					brightness *= 0.5;
				}
				*/

				if (MAP[tileYi][tileXi] == 1) {
					m3_line(i, 0, i, 80-halfHeight, RGB15(16,16,16));
					m3_line(i, 80-halfHeight, i, 80+halfHeight, RGB15(brightness,0,0));
					m3_line(i, 80+halfHeight, i, 160, RGB15(5,5,5));
					break;
				}					
				if (MAP[tileYi][tileXi] == 2) {
					m3_line(i, 0, i, 80-halfHeight, RGB15(16,16,16));
					m3_line(i, 80-halfHeight, i, 80+halfHeight, RGB15(0,brightness,0));
					m3_line(i, 80+halfHeight, i, 160, RGB15(5,5,5));
					break;
				}
				if (MAP[tileYi][tileXi] == 3) {
					m3_line(i, 0, i, 80-halfHeight, RGB15(16,16,16));
					m3_line(i, 80-halfHeight, i, 80+halfHeight, RGB15(0,0,brightness));
					m3_line(i, 80+halfHeight, i, 160, RGB15(5,5,5));
					break;
				}

			}

			
			if (depth +1 == MAXDEPTH) {
				m3_line(i, 0, i, 160, RGB15(0,0,0));

			}
			
			
		}
		angle = fxadd(angle, STEPANGLE);

	}
}

float floatAbs(float a) {
	if (a < 0.0) {
		return -a;
	}
	else {
		return a;
	}
}

FIXED fixedAbs(FIXED a) {
	if (a < 0) {
		return fxsub(int2fx(0), a);
	}
	else {
		return a;
	}
}


void drawWall(int i, FIXED distance, int type, int vertical) {

	int wallHeight = fx2int(fxmul(fxdiv(int2fx(32), distance), int2fx(10)));//160;// / distance;
	wallHeight = CLAMP(wallHeight, 1, 160);
	int halfHeight = wallHeight / 2;

	int brightness = 16;
	if (vertical) {
		brightness = brightness >> 1;
	}


	m3_line(i, 0, i, 80-halfHeight, RGB15(8,8,8));
	if (type == 1) {
		m3_line(i, 80-halfHeight, i, 80 + halfHeight, RGB15(0,0,brightness));
	}
	if (type == 2) {
		m3_line(i, 80-halfHeight, i, 80 + halfHeight, RGB15(0,brightness,0));
	}
	if (type == 3) {
		m3_line(i, 80-halfHeight, i, 80 + halfHeight, RGB15(brightness,brightness,0));
	}
	if (type == 4) {
		m3_line(i, 80-halfHeight, i, 80 + halfHeight, RGB15(brightness,0,0));
	}
	m3_line(i, 80+ halfHeight, i, 160, RGB15(3,3,3));


}

int castGrid(FIXED fixedX, FIXED fixedY, int direction) {
	const FIXED PI2 = int2fx(0x10000 >> 1);

	const FIXED STEPANGLE = fxdiv64(int2fx(FOV), int2fx(CASTEDRAYS));

	int positiveAngle = direction - FOV/2;
	if (positiveAngle < 0) {
		positiveAngle = 360 + positiveAngle;
	}
	FIXED angle = int2fx(positiveAngle % 360);
	const FIXED FIXEDTILESIZE = int2fx(TILESIZE);
	
	const x = fx2int(fixedX);
	const y = fx2int(fixedY);

	for (int i = 0; i < CASTEDRAYS; i++) {

		int luAngle = fxmul64(PI2, fxdiv(angle, int2fx(360))) >> 7;
		if (fx2int(luAngle) < 0) {
			continue;
		}
		int rayAngle = fx2int(angle);

		int xDir, yDir;
		if (rayAngle >= 0 && rayAngle < 90) {
			xDir = 1;
			yDir = 1;
		}
		else if (rayAngle >= 90 && rayAngle < 180) {
			xDir = 1;
			yDir = 1;
		}
		else if (rayAngle >= 180 && rayAngle < 270) {
			xDir = -1;
			yDir = 1;
		}
		else if (rayAngle >= 270) {
			xDir = -1;
			yDir = -1;
		}



		FIXED sine = lu_sin(luAngle);
		FIXED cosine = lu_cos(luAngle);

		
		if ((rayAngle < 100 && rayAngle > 85) || (rayAngle > 260 && rayAngle < 275)) {
			cosine = int2fx(1);
		}
		if ((rayAngle >= 180 && rayAngle < 184) || (rayAngle >= 0 && rayAngle < 5) || rayAngle == 360) {
			sine = int2fx(1);
		}

		FIXED tan = fxdiv(sine, cosine);
		//avoid division by zero later on
		if (rayAngle == 0) {
			tan = float2fx(0.01);
		}



		//ugly floating point math, placeholder until fixed later on
		//float cosineFloat = fx2float(lu_cos(luAngle));

		FIXED cosineAbs = fixedAbs(cosine);

		FIXED horizontalDistance = int2fx(-1);

		FIXED verticalDistance = int2fx(-1);


		/*
		this part checks for horizontal walls on the 2d map
		*/
		
		//initial coordinate to check for horizontal walls
		FIXED tx;
		FIXED ty;
		//lengths of further steps that will be taken for checking collisions
		FIXED dx;
		FIXED dy;
		if (rayAngle >= 0 && rayAngle < 180) {
			ty = int2fx(y / TILESIZE * TILESIZE -1);
			dy = fxsub(int2fx(0), FIXEDTILESIZE);
		}
		else {
			ty = int2fx(y / TILESIZE * TILESIZE + TILESIZE);
			dy = FIXEDTILESIZE;
		}
		//tx = x + fx2float(fxmul(fxdiv(float2fx(floatAbs(y- fx2float(ty))), tan), int2fx(xDir)));
		//tx = x + fx2float(fxmul(fxdiv(fixedAbs(fxsub(fixedY,  ty)), tan), int2fx(xDir)));
		tx = (fxadd(fixedX, (fxmul(fxdiv(fixedAbs(fxsub(fixedY,  ty)), tan), int2fx(xDir)))));
   		dx = fxmul((fxdiv(FIXEDTILESIZE, tan)), int2fx(xDir));

		
		int initX = fx2int(tx) / TILESIZE;
		int initY = fx2int(ty) / TILESIZE;




		if (MAP[initX][initY] != 0) {
			//horizontalDistance = float2fx(floatAbs((x - fx2float(tx)) / cosineFloat));
			//horizontalDistance = float2fx(floatAbs(fx2float(fxsub(fixedX, tx)) / cosineFloat));
			horizontalDistance = fxdiv64(fixedAbs(fxsub(fixedX, tx)), cosineAbs);
		}
		
		else {
			//step tx & ty up in steps of dx & dy 
			for (int j = 0; j < 20; j++) {
				//tx += dx;
				//ty += dy;
				tx = fxadd((tx), dx);
				ty = fxadd(ty, dy);
				
				initX = (fx2int(tx)) / TILESIZE;
				initY = (fx2int(ty)) / TILESIZE;
				if (MAP[initX][initY] != 0) {
					//horizontalDistance = float2fx(floatAbs((x - fx2float(tx)) / cosineFloat));
			horizontalDistance = fxdiv64(fixedAbs(fxsub(fixedX, tx)), cosineAbs);
					break;
				}
			}

		}
		
		

		/*
		this part checks for vertical walls on the 2d map
		*/
		
		//initial coordinate to check for horizontal walls
		FIXED txh;
		FIXED tyh;
		//lengths of further steps that will be taken for checking collisions
		FIXED dxh;
		FIXED dyh;
		if (rayAngle >= 90 && rayAngle < 270) {
			txh = int2fx(x / TILESIZE * TILESIZE -1);
			dxh = fxsub(int2fx(0), FIXEDTILESIZE);
		}
		else {
			txh = int2fx(x / TILESIZE * TILESIZE + TILESIZE);
			dxh = FIXEDTILESIZE;
		}
		//tx = x + fx2float(fxmul(fxdiv(float2fx(floatAbs(y- fx2float(ty))), tan), int2fx(xDir)));
		//tx = x + fx2float(fxmul(fxdiv(fixedAbs(fxsub(fixedY,  ty)), tan), int2fx(xDir)));
		tyh = (fxadd(fixedY, (fxmul(fxmul(fixedAbs(fxsub(fixedX,  txh)), tan), int2fx(yDir)))));
   		dyh = fxmul((fxmul(FIXEDTILESIZE, tan)), int2fx(yDir));

		


		int initXH = fx2int(txh) / TILESIZE;
		int initYH = fx2int(tyh) / TILESIZE;




		if (MAP[initXH][initYH] != 0) {
			//horizontalDistance = float2fx(floatAbs((x - fx2float(tx)) / cosineFloat));
			//verticalDistance = float2fx(floatAbs(fx2float(fxsub(fixedX, txh)) / cosineFloat));
			verticalDistance = fxdiv64(fixedAbs(fxsub(fixedX, txh)), cosineAbs);

		}
		
		else {
			//step tx & ty up in steps of dx & dy 
			for (int j = 0; j < 20; j++) {
				//tx += dx;
				//ty += dy;
				txh = fxadd(txh, dxh);
				tyh = fxadd(tyh, dyh);
				
				initXH = (fx2int(txh)) / TILESIZE;
				initYH = (fx2int(tyh)) / TILESIZE;
				if (MAP[initXH][initYH] != 0) {
					//horizontalDistance = float2fx(floatAbs((x - fx2float(tx)) / cosineFloat));
					//verticalDistance = float2fx(floatAbs(fx2float(fxsub(fixedX, txh)) / cosineFloat));
					verticalDistance = fxdiv64(fixedAbs(fxsub(fixedX, txh)), cosineAbs);

					break;
				}
			}

		}
		
		

		
		
		

		
		

		//return verticalDistance;
		//return initX;
		//return MAP[0][0];


		if (verticalDistance >= 0 && (verticalDistance <= horizontalDistance || horizontalDistance < 0)) {
			drawWall(i, verticalDistance, MAP[initXH][initYH], 1);
		}
		
		else if (horizontalDistance >= 0 && (horizontalDistance < verticalDistance || verticalDistance < 0)) {
			drawWall(i, horizontalDistance, MAP[initX][initY], 0);
		}
		else {
			m3_line(i, 0, i, 160, RGB15(0,0,0));
		}






		angle = fxadd(angle, STEPANGLE);
		if (fx2int(angle) > 360) {
			angle = fxsub(angle, int2fx(360));
		}



	}

}


void move(int direction, FIXED *x, FIXED *y, int type) {
	
	FIXED SPEED = int2fx(1);
	const FIXED PI2 = int2fx(0x10000 >> 1);
	const FIXED ZERO = int2fx(0);

	FIXED angle = int2fx(direction % 360);

	int luAngle = fxmul64(PI2, fxdiv(angle, int2fx(360))) >> 7;
	FIXED sine = lu_sin(luAngle);
	FIXED cosine = lu_cos(luAngle);


	if (type == 0) { //left
	//fxadd(x, fxmul(x, sine));
		*x = fxadd(*x, fxmul(SPEED, sine));
		*y = fxadd(*y, fxmul(SPEED, cosine));
	}
	else if (type == 1) {
		*x = fxsub(*x, fxmul(SPEED, sine));
		*y = fxsub(*y, fxmul(SPEED, cosine));
	}
	/*
	else if (type == 2) {
		*x = fxsub(*x, fxmul(SPEED, cosine));
		*y = fxsub(*y, fxmul(SPEED, sine));
	}
	else if (type == 3) {
		*x = fxadd(*x, fxmul(SPEED, cosine));
		*y = fxadd(*y, fxmul(SPEED, sine));
	}
	*/

}

int main(void)
{

	//FIXED x = float2fx(3);
	//FIXED y = float2fx(3);

	int x = int2fx(4*64);//96;//2*64;//
	int y = int2fx(4*64);//224;//2*64;//

	int direction = 0; //315, 0,0

	//initMap();
	
	
	REG_DISPCNT= DCNT_MODE3 | DCNT_BG2;
		
		
	/*
	REG_DISPCNT = DCNT_MODE0 | DCNT_BG0 | DCNT_OBJ | DCNT_OBJ_1D;
	irq_init(NULL);
	irq_enable(II_VBLANK);

	tte_init_chr4c_default(0, BG_CBB(0) | BG_SBB(31));
	tte_set_pos(92, 68);

	int test = castGrid(x, y, direction);

	char str[8];
	sprintf(str, "%d", test); //65536
	tte_write(str);
	*/
	
	
	
	while (1) {

		key_poll();
		if (key_held(KEY_LEFT)) {
			move(direction, &x, &y, 0);
		}
		else if (key_held(KEY_RIGHT)) {
			move(direction, &x, &y, 1);
		}
		if (key_held(KEY_UP)) {
			move(direction, &x, &y, 2);
		}
		else if (key_held(KEY_DOWN)) {
			move(direction, &x, &y, 3);
		}
		if (key_held(KEY_R)) {
			direction += 4;
		}
		else if (key_held(KEY_L)) {
			direction -= 4;
		}
		if (direction >= 360) {
			direction = 0;
		}
		if (direction < 0) {
			direction += 360;
		}

		castGrid(x, y, direction);
		//direction += 3;
		//x = fxadd(x, float2fx(0.1));
		//y = fxadd(y, float2fx(0.1));
		
		
		
		
		//VBlankIntrWait();
	}
}
