#include <tonc.h>

const float PI = 3.1415;
const int MAPSIZE = 8;
int MAP[8][8] = {0};
const int SCREENHEIGHT = 160;
const int SCREENWIDTH = 240;
const int CASTEDRAYS = 240;
const int FOV = 60;
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


void drawWall(int i, float distance, int type) {

	int wallHeight = fx2int(fxmul(fxdiv(int2fx(32), float2fx(distance)), int2fx(10)));//160;// / distance;
	wallHeight = CLAMP(wallHeight, 1, 160);
	int halfHeight = wallHeight / 2;
	m3_line(i, 0, i, 80-halfHeight, RGB15(0,0,0));

	if (type == 1) {
		m3_line(i, 80-halfHeight, i, 80 + halfHeight, RGB15(0,0,16));
	}
	if (type == 2) {
		m3_line(i, 80-halfHeight, i, 80 + halfHeight, RGB15(0,16,0));
	}
	if (type == 3) {
		m3_line(i, 80-halfHeight, i, 80 + halfHeight, RGB15(16,16,0));
	}
	if (type == 4) {
		m3_line(i, 80-halfHeight, i, 80 + halfHeight, RGB15(16,0,0));
	}
	m3_line(i, 80+ halfHeight, i, 160, RGB15(0,0,0));


}

int castGrid(int x, int y, int direction) {
	const FIXED PI2 = int2fx(0x10000 >> 1);

	const FIXED STEPANGLE = fxdiv64(int2fx(FOV), int2fx(CASTEDRAYS));

	int positiveAngle = direction;// - FOV/2;
	if (positiveAngle < 0) {
		positiveAngle = 360 + positiveAngle;
	}
	FIXED angle = int2fx(positiveAngle % 360);

	for (int i = 0; i < CASTEDRAYS; i++) {

		int luAngle = fxmul64(PI2, fxdiv64(angle, int2fx(360))) >> 7;
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



		//ugly floating point math, placeholder until 
		FIXED sine = lu_sin(luAngle);
		FIXED cosine = lu_cos(luAngle);

		float tan = fx2float(fxdiv(sine, cosine)); // in 1/64th range, so 64 equals one
		//avoid division by zero later on
		if (rayAngle == 0) {
			tan = 0.01;
		}




		float cosineInteger = fx2float(lu_cos(luAngle)); //should be scaled by 64
		
		/*
		if (cosineInteger == 0) {
			cosineInteger = 1;
		}
		*/
		
		float horizontalDistance = -1;

		float verticalDistance = -1;


		/*
		this part checks for horizontal walls on the 2d map
		*/
		
		//initial coordinate to check for horizontal walls
		float tx, ty;
		//lengths of further steps that will be taken for checking collisions
		float dx, dy;
		if (rayAngle >= 0 && rayAngle < 180) {
			ty = y / TILESIZE * TILESIZE -1;
			dy = -TILESIZE;
		}
		else {
			ty = y / TILESIZE * TILESIZE + TILESIZE;
			dy = TILESIZE;
		}
		tx = x + floatAbs(y-ty)/tan*xDir; //64 to correct for tan scaling
   		dx = TILESIZE/tan*xDir; //64 to correct for tan scaling

		int initX = tx / TILESIZE;
		int initY = ty / TILESIZE;

		//return initY;



		if (MAP[initX][initY] != 0) {
			horizontalDistance = floatAbs((x - tx) / cosineInteger);
			//drawWall(i, horizontalDistance, MAP[initX][initY]);
		}
		
		else {
			//step tx & ty up in steps of dx & dy 
			for (int j = 0; j < 20; j++) {
				tx += dx;
				ty += dy;
				initX = tx / TILESIZE;
				initY = ty / TILESIZE;
				if (MAP[initX][initY] != 0) {
					//drawWall(i, horizontalDistance, MAP[initX][initY]);
					horizontalDistance = floatAbs((x - tx) / cosineInteger);
					break;
				}
			}

		}
		
		

		
		
		



		/*
		this part checks for vertical walls on the 2d map
		*/
		
		//initial coordinate to check for horizontal walls
		float txh, tyh;
		//lengths of further steps that will be taken for checking collisions
		float dxh, dyh;

		if (rayAngle >= 90 && rayAngle < 270) {
			txh = x / TILESIZE * TILESIZE -1;
			dxh = -TILESIZE;
		}
		else {
			txh = x / TILESIZE * TILESIZE + TILESIZE;
			dxh = TILESIZE;
		}
		tyh = y + floatAbs(x-txh)*tan*yDir; //64 to correct for tan scaling
   		dyh = TILESIZE*tan*yDir; //64 to correct for tan scaling


		int initXH = txh / TILESIZE;
		int initYH = tyh / TILESIZE;


		//return tan*100;
		//return MAP[initXH][initYH];


		
			if (MAP[initXH][initYH] != 0) {

				verticalDistance = floatAbs((x - txh) / cosineInteger);

				//drawWall(i, verticalDistance, MAP[initXH][initYH]);
			}
			else {
				//step tx & ty up in steps of dx & dy 
				for (int j = 0; j < 20; j++) {

					txh += dxh;
					tyh += dyh;

					initXH = txh / TILESIZE;
					initYH = tyh / TILESIZE;

					if (MAP[initXH][initYH] != 0) {
						verticalDistance = floatAbs((x - txh) / cosineInteger);
						//drawWall(i, verticalDistance, MAP[initXH][initYH]);
						break;
					}
				}

			}

		
		
		
		

		//return verticalDistance;
		//return initX;
		//return MAP[0][0];


		if (verticalDistance >= 0 && (verticalDistance <= horizontalDistance || horizontalDistance < 0)) {
			drawWall(i, verticalDistance, MAP[initXH][initYH]);
		}
		
		else if (horizontalDistance >= 0 && (horizontalDistance < verticalDistance || verticalDistance < 0)) {
			drawWall(i, horizontalDistance, MAP[initX][initY]);
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


int main(void)
{

	//FIXED x = float2fx(3);
	//FIXED y = float2fx(3);

	int x = 2*64;//96;//2*64;//
	int y = 2*64;//224;//2*64;//

	int direction = 230; //315, 0,0

	initMap();
	
	
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
		
		
		castGrid(x, y, direction);
		direction += 3;
		//x = fxadd(x, float2fx(0.1));
		//y = fxadd(y, float2fx(0.1));
		if (direction >= 360) {
			direction = 0;
		}
		
		
		
		
		//VBlankIntrWait();
	}
}
