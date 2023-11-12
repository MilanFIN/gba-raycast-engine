
const TEXTURESIZE = 16;

const int TEXTURES[10*16*16] = {

		//stone wall
        3,3,1,3,3,3,3,3,3,3,1,3,3,3,3,3,
        3,3,1,3,3,3,3,3,3,3,1,3,3,3,3,3,
        3,3,1,2,3,3,3,3,3,3,1,2,3,3,3,3,
        3,3,1,2,2,2,3,3,3,3,1,2,2,2,3,3,
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
		3,3,3,3,3,1,3,3,3,3,3,3,3,1,3,3,
		3,3,3,3,3,1,3,3,3,3,3,3,3,1,3,3,
		3,3,3,3,3,1,3,3,3,3,3,3,3,1,3,3,
		3,3,3,3,3,1,2,3,3,3,3,3,3,1,2,3,
		2,3,3,3,3,1,2,2,2,3,3,3,3,1,2,2,
		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
		1,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,
		1,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,
		1,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,
		1,2,3,3,3,3,3,3,1,2,3,3,3,3,3,3,
		1,2,2,2,3,3,3,3,1,2,2,2,3,3,3,3,

		//key
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		00,00,39,39,00,00,00,00,00,00,00,00,00,00,00,00,
		00,39,39,39,39,39,00,00,00,00,00,00,00,00,00,00,
		39,39,39,39,39,39,39,00,00,00,00,00,00,00,00,00,
		39,39,00,00,39,39,39,39,39,39,39,39,39,39,39,39,
		39,39,00,00,39,39,39,39,39,39,39,39,39,39,39,39,
		39,39,39,39,39,39,39,00,00,00,39,36,39,36,39,00,
		00,39,39,39,39,39,00,00,00,00,39,36,39,36,39,00,
		00,00,39,39,00,00,00,00,00,00,00,00,00,00,00,00,



		//color reference tile
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        8,9,10,11,12,13,14,15, 8,9,10,11,12,13,14,15,
        16,17,18,19,20,21,22,23,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,24,25,26,27,28,29,30,31,
        32,33,34,35,36,37,38,39,32,33,34,35,36,37,38,39,
        40,41,42,43,44,45,46,47,40,41,42,43,44,45,46,47,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,



		
		//wooden door
        3,3,1,3,132,132,132,132,132,132,132,132,3,3,3,3,
        3,3,1,132,132,132,132,132,132,132,132,132,132,3,3,3,
        3,3,132,132,132,132,132,132,132,132,132,132,132,132,3,3,
        3,132,132,132,132,132,132,132,132,132,132,132,132,132,132,3,
        1,132,132,132,132,132,132,132,132,132,132,132,132,132,132,1,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,
        132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,132,

        //ball
        0,0,0,0,0,0,46,46,46,46,0,0,0,0,0,0,
        0,0,0,0,46,46,46,46,46,46,46,46,0,0,0,0,
        0,0,0,46,46,46,46,46,46,46,46,46,46,0,0,0,
        0,0,46,46,46,46,46,46,46,46,46,46,46,46,0,0,
        0,46,46,46,46,46,46,46,46,46,46,46,46,46,46,0,
        0,46,46,46,46,46,46,46,46,46,46,46,46,46,46,0,
        46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,
        46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,
        46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,
        46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,46,
        0,46,46,46,46,46,46,46,46,46,46,46,46,46,46,0,
        0,46,46,46,46,46,46,46,46,46,46,46,46,46,46,0,
        0,0,46,46,46,46,46,46,46,46,46,46,46,46,0,0,
        0,0,0,46,46,46,46,46,46,46,46,46,46,0,0,0,
        0,0,0,0,46,46,46,46,46,46,46,46,0,0,0,0,
        0,0,0,0,0,0,46,46,46,46,0,0,0,0,0,0,
        
        //cylinder
        0,0,0,0,0,0,15,15,15,15,0,0,0,0,0,0,
        0,0,0,0,15,15,15,15,15,15,15,15,0,0,0,0,
        0,0,0,15,15,15,15,15,15,15,15,15,15,0,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,15,15,15,15,15,15,15,15,15,15,15,15,0,0,
        0,0,0,15,15,15,15,15,15,15,15,15,15,0,0,0,
        0,0,0,0,15,15,15,15,15,15,15,15,0,0,0,0,
        0,0,0,0,0,0,15,15,15,15,0,0,0,0,0,0,

        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
        22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
    };