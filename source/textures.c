#include "textures.h"

const int PROJECTILETEXTURES[3] = {6, 9, 10};
const int ENEMYTEXTURES[6] = {7, 8, 13, 14, 15, 16};

const int TEXTURES[22*16*16] = {

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

    //wall with vines, dark 99, light 100
    3,3,1,3,3,99,3,3,3,3,99,3,3,3,3,3,
    3,3,1,3,3,100,3,3,100,3,1,3,3,3,3,3,
    99,99,1,99,99,3,3,3,100,3,1,2,3,3,3,3,
    3,3,100,100,99,99,3,3,99,3,1,2,2,2,3,3,
    1,1,1,1,1,1,99,100,1,1,1,1,1,100,99,99,
    3,3,3,100,3,1,3,99,3,3,3,3,100,1,3,3,
    3,100,99,3,3,1,3,3,99,99,3,3,99,1,3,3,
    3,99,3,3,3,1,3,3,99,3,99,100,3,1,3,3,
    3,99,100,3,3,99,2,100,99,3,99,100,3,1,2,3,
    2,99,3,3,3,99,99,2,2,3,3,99,99,1,99,2,
    1,1,99,1,99,100,1,1,1,1,99,1,1,100,100,1,
    1,100,99,99,100,3,3,3,100,99,3,3,3,3,3,3,
    99,3,3,3,3,3,3,100,99,99,3,99,3,3,3,3,
    1,3,3,3,3,3,3,99,1,3,99,3,100,3,3,3,
    1,2,3,3,3,3,3,99,1,2,3,3,99,100,3,3,
    1,2,2,2,3,3,3,99,1,2,2,2,3,99,3,3,

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
    3,3,1,3,3,3,3,3,3,3,1,3,3,3,3,3,
    3,3,1,3,131,131,131,131,131,131,131,131,3,3,3,3,
    3,3,1,131,131,132,132,132,131,132,132,132,131,3,3,3,
    3,3,131,132,131,132,132,132,131,132,132,132,131,131,3,3,
    1,131,132,132,131,132,132,132,131,132,132,132,131,132,131,1,
    3,131,132,132,131,132,132,132,131,132,132,132,131,132,131,3,
    3,131,131,131,131,131,131,131,131,131,131,131,131,131,131,3,
    3,131,132,132,131,132,132,132,131,132,132,132,131,132,131,3,
    3,131,37,132,131,132,132,132,131,132,132,132,131,132,131,3,
    2,131,37,132,131,132,132,132,131,132,132,132,131,132,131,2,
    1,131,131,131,131,131,131,131,131,131,131,131,131,131,131,1,
    1,131,132,132,131,132,132,132,131,132,132,132,131,132,131,3,
    1,131,132,132,131,132,132,132,131,132,132,132,131,132,131,3,
    1,131,132,132,131,132,132,132,131,132,132,132,131,132,131,3,
    1,131,132,132,131,132,132,132,131,132,132,132,131,132,131,3,
    1,131,131,131,131,131,131,131,131,131,131,131,131,131,131,3,

    //proj1, 31, 127, 143
    0,0,0,0,0,0,0,31,31,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,31,31,0,0,0,0,0,0,0,
    0,0,0,0,0,0,31,31,31,31,0,0,0,0,0,0,
    0,0,0,0,0,0,31,127,31,31,0,0,0,0,0,0,
    0,0,0,0,0,0,31,127,127,31,0,0,0,0,0,0,
    0,0,0,0,0,31,31,127,127,31,31,0,0,0,0,0,
    0,0,31,31,31,31,127,143,127,127,31,31,31,31,0,0,
    31,31,31,31,127,127,127,143,143,143,127,127,127,31,31,31,
    31,31,31,127,127,127,143,143,143,127,127,127,31,31,31,31,
    0,0,31,31,31,31,127,127,143,127,31,31,31,31,0,0,
    0,0,0,0,0,31,31,127,127,31,31,0,0,0,0,0,
    0,0,0,0,0,0,31,127,127,31,0,0,0,0,0,0,
    0,0,0,0,0,0,31,31,127,31,0,0,0,0,0,0,
    0,0,0,0,0,0,31,31,31,31,0,0,0,0,0,0,
    0,0,0,0,0,0,0,31,31,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,31,31,0,0,0,0,0,0,0,
    
    //eye, 4, 7, 15, 87, 143
    0,0,0,0,0,4,4,4,4,4,4,0,0,0,0,0,
    0,0,0,4,4,7,7,7,7,7,15,4,4,0,0,0,
    0,0,4,7,7,15,7,7,7,15,7,7,7,4,0,0,
    0,4,7,7,7,15,7,7,7,15,7,7,7,7,4,0,
    0,4,7,7,7,7,87,87,87,87,7,7,7,15,4,0,
    4,15,7,7,7,87,143,143,143,143,87,7,15,7,7,4,
    4,7,15,15,87,143,143,144,144,7,143,87,7,7,7,4,
    4,7,7,7,87,143,144,144,144,144,143,87,7,7,7,4,
    4,7,7,7,87,143,144,144,144,144,143,87,7,7,7,4,
    4,7,7,7,87,143,143,144,144,143,143,87,7,7,7,4,
    4,7,7,15,7,87,143,143,143,143,87,7,15,7,7,4,
    0,4,7,15,7,7,87,87,87,87,7,7,7,15,15,0,
    0,4,15,7,7,7,15,7,7,7,15,15,7,7,4,0,
    0,0,4,7,7,7,7,15,7,7,7,7,15,4,0,0,
    0,0,0,4,4,7,15,7,7,7,7,4,4,0,0,0,
    0,0,0,0,0,4,4,4,4,4,4,0,0,0,0,0,

    //skull, 16, 3, 5, 7
    0,0,0,16,16,16,16,16,16,16,16,16,16,0,0,0,
    0,0,16,3,5,5,7,7,7,5,3,3,16,0,0,0,
    0,16,3,5,7,7,7,3,5,7,5,5,3,16,0,0,
    16,3,5,7,7,7,7,5,3,5,7,7,5,3,16,0,
    16,7,7,7,7,7,7,7,5,3,5,7,7,7,16,0,
    16,7,3,7,7,7,7,7,7,7,7,7,3,7,16,0,
    16,7,3,7,5,3,7,7,7,3,5,7,3,7,16,0,
    16,3,7,7,7,7,3,7,3,7,7,7,7,3,16,0,
    0,16,7,7,16,16,7,7,7,16,16,7,7,16,0,0,
    16,7,7,16,16,16,7,3,7,16,16,16,7,7,16,0,
    16,5,7,16,16,7,7,16,7,7,16,16,7,5,16,0,
    16,3,5,7,7,7,7,16,7,7,7,7,5,3,16,0,
    0,16,3,3,5,7,7,7,7,7,5,3,3,16,0,0,
    0,0,16,16,3,7,16,7,16,7,3,16,16,0,0,0,
    0,0,0,0,16,5,16,5,16,5,16,0,0,0,0,0,
    0,0,0,0,0,16,16,16,16,16,0,0,0,0,0,0,


    //proj2, 15, 63, 38, 39
    0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,15,0,0,15,0,0,0,0,
    0,0,0,0,15,0,0,15,63,0,15,15,15,0,0,0,
    0,0,0,15,15,0,15,63,15,0,15,63,15,0,0,0,
    0,0,0,15,15,0,15,63,63,0,15,15,63,0,0,0,
    0,0,15,15,63,15,15,63,15,0,15,63,15,15,0,0,
    0,0,15,63,63,15,15,63,63,15,15,63,15,15,0,0,
    0,15,15,63,15,15,15,63,15,15,15,63,63,15,15,0,
    0,15,15,63,38,63,15,15,38,15,63,63,63,15,15,0,
    0,15,15,63,38,38,63,38,38,63,63,38,63,15,63,0,
    0,15,63,15,63,39,38,38,39,38,38,39,63,15,15,0,
    0,15,15,63,38,38,39,38,39,38,39,38,63,15,15,0,
    0,0,15,15,63,38,38,39,39,39,38,63,15,15,0,0,
    0,0,0,15,15,63,39,39,39,39,63,15,15,0,0,0,
    0,0,0,0,0,15,63,39,63,63,15,0,0,0,0,0,

    //proj3 119, 23, 21
    0,0,0,23,0,0,0,0,0,0,23,0,0,0,0,0,
    0,0,0,0,23,0,0,0,0,23,0,0,0,0,0,0,
    0,0,0,23,0,0,0,0,23,0,0,0,0,0,23,0,
    0,0,0,0,23,23,0,0,23,0,0,0,0,0,23,0,    
    0,23,0,0,0,23,0,0,0,23,0,0,0,23,0,0,
    0,0,23,0,0,0,23,23,23,23,0,23,23,0,0,0,
    0,0,0,23,0,23,23,21,21,23,23,0,0,0,0,0,
    23,0,0,0,23,23,21,21,21,21,23,0,0,0,0,23,    
    0,23,0,23,0,23,21,21,21,21,23,23,0,0,23,0,
    0,0,23,0,0,23,23,21,21,23,23,0,23,23,0,0,
    0,0,0,0,0,0,23,23,23,23,0,0,0,0,0,0,
    0,0,0,0,0,23,0,0,0,0,23,23,0,0,0,0,    
    0,0,0,0,0,0,23,0,0,0,0,0,23,0,0,0,
    0,0,0,0,0,23,0,23,0,0,0,23,0,0,0,0,
    0,0,0,0,23,0,0,0,0,0,0,0,23,0,0,0,
    0,0,0,0,0,23,0,0,0,0,0,0,0,0,0,0,

    //book, 144, 147, 159, 158, 149, 147
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,144,144,144,144,144,0,0,144,144,144,144,144,0,0,
    0,144,159,159,159,159,159,144,144,158,158,158,158,158,144,0,
    144,158,159,159,159,159,159,159,158,158,158,158,158,158,149,144,
    144,158,159,6,6,6,6,159,158,5,5,5,5,158,149,144,
    144,158,159,159,159,159,159,159,158,158,158,158,158,158,149,144,
    144,158,159,6,6,6,6,159,158,5,5,5,5,158,149,144,
    144,158,159,159,159,159,159,159,158,158,158,158,158,158,149,144,
    144,158,159,6,6,6,6,159,158,5,5,5,5,158,149,144,
    144,158,159,159,159,159,159,159,158,158,158,158,158,158,149,144,
    144,158,159,6,6,6,6,159,158,5,5,5,5,158,149,144,
    144,158,159,159,159,159,159,159,158,158,158,158,158,158,149,144,
    144,158,158,158,158,158,158,159,158,149,149,149,149,149,149,144,
    144,147,147,147,147,147,147,149,149,147,147,147,147,147,147,144,
    0,144,144,144,144,144,147,147,147,147,144,144,144,144,144,0,
    0,0,0,0,0,0,144,144,144,144,0,0,0,0,0,0,

    //hp, 134, 23 119
    0,0,0,0,0,16,16,16,16,16,16,0,0,0,0,0,
    0,0,0,0,16,134,134,134,134,134,134,16,0,0,0,0,
    0,0,0,0,0,16,134,134,134,134,16,0,0,0,0,0,
    0,0,0,0,0,16,134,134,134,134,16,0,0,0,0,0,
    0,0,0,0,0,16,23,23,23,23,16,0,0,0,0,0,
    0,0,0,0,0,16,23,23,23,23,16,0,0,0,0,0,
    0,0,0,0,0,16,23,23,23,23,16,0,0,0,0,0,
    0,0,0,0,0,16,23,23,23,23,16,0,0,0,0,0,
    0,0,0,0,16,23,23,23,23,23,23,16,0,0,0,0,
    0,0,0,16,23,23,23,23,23,23,23,23,16,0,0,0,
    0,0,0,16,23,23,23,23,23,23,23,23,16,0,0,0,
    0,0,16,23,23,23,23,23,23,23,119,119,23,16,0,0,
    0,16,23,23,23,23,23,23,23,23,23,119,119,23,16,0,
    0,16,23,23,23,23,23,23,23,23,23,23,119,23,16,0,
    0,16,23,23,23,23,23,23,23,23,23,23,23,23,16,0,
    0,0,16,16,16,16,16,16,16,16,16,16,16,16,0,0,

    //wiz, 16, 134, 131, 38, 31, 151, 5, 7
    0,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,
    0,38,38,38,0,0,0,16,134,16,0,0,0,0,0,0,
    0,38,0,38,0,0,16,134,130,130,16,0,0,0,0,0,
    0,38,38,38,0,0,16,130,130,130,16,0,0,0,0,0,
    0,0,133,0,0,16,134,130,130,130,313,16,0,0,0,0,
    0,0,133,0,16,130,130,130,130,130,130,16,0,0,0,0,
    0,0,133,16,130,16,16,16,16,16,16,134,16,0,0,0,
    0,0,133,16,130,16,31,16,16,31,16,16,130,16,0,0,
    0,0,133,16,16,16,16,16,16,16,16,130,130,16,0,0,
    0,0,16,151,16,5,7,7,7,7,5,130,130,130,16,0,
    0,0,133,16,130,130,5,7,7,5,130,130,134,134,16,0,
    0,0,133,16,134,130,130,5,5,130,130,16,151,16,130,0,
    0,0,133,16,134,130,130,5,130,130,130,134,16,16,130,0,
    0,0,0,0,16,130,130,130,130,130,130,130,130,0,0,0,
    0,0,0,16,130,130,130,130,130,130,130,130,130,16,0,0,
    0,0,0,16,130,16,16,130,130,130,16,16,130,16,0,0,

    //troll 20, 101, 102, 5, 147, 130
    0,0,0,0,16,16,16,16,16,16,16,16,0,0,0,0,
    0,0,0,16,20,101,101,102,102,101,101,101,16,0,0,0,
    5,5,16,20,101,101,101,101,102,102,101,101,101,16,5,5,
    0,5,16,101,101,101,101,101,101,101,101,101,101,16,5,0,
    0,0,16,101,101,16,101,101,101,101,16,101,101,16,0,0,
    0,0,16,101,101,16,16,101,101,16,16,101,101,16,0,0,
    0,0,16,101,101,101,101,101,101,101,101,101,101,16,0,0,
    0,0,16,20,101,101,7,16,16,7,101,101,20,16,0,0,
    0,0,0,16,20,101,101,101,101,101,101,20,16,0,0,0,
    0,0,0,16,16,16,16,16,16,16,16,16,16,0,0,0,
    0,16,16,101,101,20,101,101,101,101,20,101,101,16,16,0,
    16,20,101,101,20,101,101,101,101,101,101,20,101,101,20,16,
    16,101,101,16,20,101,101,101,101,101,102,20,16,101,101,16,
    16,101,20,16,147,130,130,130,130,130,130,147,16,20,101,16,
    0,16,16,0,16,130,130,130,130,130,130,16,0,16,16,0,
    0,0,0,0,16,5,5,0,0,5,5,16,0,0,0,0,

    //spider 2, 3, 156, 6, 16, 108, 15, 14
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,
    0,0,0,0,2,3,3,2,3,3,3,2,0,0,0,0,
    0,0,0,2,156,2,3,3,6,2,3,156,2,0,0,0,
    0,0,2,3,3,3,16,16,16,16,3,2,3,2,0,0,
    0,108,3,2,3,16,16,16,16,16,16,3,2,3,108,0,
    108,108,3,3,16,16,16,16,16,16,16,16,3,3,108,108,
    108,0,16,3,16,16,15,16,16,14,16,16,3,16,0,108,
    0,16,0,108,0,16,16,16,16,16,16,0,108,0,16,0,
    0,16,108,0,0,0,16,16,16,16,0,0,0,108,16,0,
    0,0,108,0,0,0,0,0,0,0,0,0,0,108,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

    //bat, 91, 92, 130, 4
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,91,91,0,0,0,0,0,0,91,91,0,0,0,
    0,0,91,91,0,0,0,0,0,0,0,0,91,91,0,0,
    0,91,92,92,91,0,0,91,91,0,0,91,92,92,91,0,
    91,92,91,91,92,0,91,92,92,91,0,92,91,91,92,91,
    91,92,91,92,91,92,91,91,91,91,92,91,92,91,92,91,
    91,92,91,92,91,91,91,91,91,92,91,91,92,91,92,91,
    91,0,0,91,92,91,91,92,91,91,91,92,91,0,0,91,
    0,0,0,0,0,92,91,91,91,91,92,0,0,0,0,0,
    0,0,0,0,0,91,92,91,91,92,91,0,0,0,0,0,
    0,0,0,0,130,130,130,91,91,130,130,130,0,0,0,0,
    0,0,0,0,4,0,4,91,91,4,0,4,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

    //arrow r, 16, 39
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,16,16,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,16,39,16,0,0,0,0,0,
    0,0,0,0,0,0,0,0,16,39,39,16,0,0,0,0,
    0,0,0,0,0,0,0,0,16,39,39,39,16,0,0,0,
    16,16,16,16,16,16,16,16,16,39,39,39,39,16,0,0,
    16,39,39,39,39,39,39,39,39,39,39,39,39,39,16,0,
    16,39,39,39,39,39,39,39,39,39,39,39,39,39,39,16,
    16,39,39,39,39,39,39,39,39,39,39,39,39,39,39,16,
    16,39,39,39,39,39,39,39,39,39,39,39,39,39,16,0,
    16,16,16,16,16,16,16,16,16,39,39,39,39,16,0,0,
    0,0,0,0,0,0,0,0,16,39,39,39,16,0,0,0,
    0,0,0,0,0,0,0,0,16,39,39,16,0,0,0,0,
    0,0,0,0,0,0,0,0,16,39,16,0,0,0,0,0,
    0,0,0,0,0,0,0,0,16,16,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

    //mana 16, 134, 31, 87
    0,0,0,0,0,16,16,16,16,16,16,0,0,0,0,0,
    0,0,0,0,16,134,134,134,134,134,134,16,0,0,0,0,
    0,0,0,0,0,16,134,134,134,134,16,0,0,0,0,0,
    0,0,0,0,0,16,134,134,134,134,16,0,0,0,0,0,
    0,0,0,0,0,16,31,31,31,31,16,0,0,0,0,0,
    0,0,0,0,0,16,31,31,31,31,16,0,0,0,0,0,
    0,0,0,0,16,31,31,31,31,31,31,16,0,0,0,0,
    0,0,0,16,31,31,31,31,31,87,87,31,16,0,0,0,
    0,0,16,31,31,31,31,31,31,87,87,87,31,16,0,0,
    0,16,31,31,31,31,31,31,31,31,87,87,87,31,16,0,
    0,16,31,31,31,31,31,31,31,31,31,87,87,31,16,0,
    0,16,31,31,31,31,31,31,31,31,31,31,31,31,16,0,
    0,16,31,31,31,31,31,31,31,31,31,31,31,31,16,0,
    0,16,31,31,31,31,31,31,31,31,31,31,31,31,16,0,
    0,0,16,31,31,31,31,31,31,31,31,31,31,16,0,0,
    0,0,0,16,16,16,16,16,16,16,16,16,16,0,0,0,

    //splatters
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,15,15,0,0,0,0,
    0,0,15,15,0,0,0,15,15,0,15,15,0,0,0,0,
    0,15,15,15,0,0,0,15,15,0,15,0,0,0,0,0,
    0,0,15,0,0,0,0,15,0,0,0,0,15,15,0,0,
    0,0,0,0,15,15,0,0,0,0,0,0,15,15,0,0,
    0,0,0,0,15,15,0,0,0,15,15,0,0,0,0,0,
    0,0,15,0,0,0,0,0,0,15,15,15,0,0,0,0,
    0,0,0,0,0,0,0,15,0,0,15,15,0,15,0,0,
    0,0,0,15,15,0,0,15,0,0,15,0,0,15,15,0,
    0,0,0,15,15,0,0,15,0,0,0,0,0,15,15,0,
    0,0,0,15,15,0,0,0,0,15,15,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,15,15,15,0,0,0,0,
    0,15,15,0,0,15,15,0,0,0,0,0,15,15,0,0,
    0,0,15,0,0,15,15,0,0,0,0,0,15,15,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,15,15,0,0,0,0,
    0,0,15,15,0,0,0,15,15,0,15,15,0,0,0,0,
    0,15,15,15,0,0,0,15,15,0,15,0,0,0,0,0,
    0,0,15,0,0,0,0,15,0,0,0,0,15,15,0,0,
    0,0,0,0,15,15,0,0,0,0,0,0,15,15,0,0,
    0,0,0,0,15,15,0,0,0,15,15,0,0,0,0,0,
    0,0,15,0,0,0,0,0,0,15,15,15,0,0,0,0,
    0,0,0,0,0,0,0,15,0,0,15,15,0,15,0,0,
    0,0,0,15,15,0,0,15,0,0,15,0,0,15,15,0,
    0,0,0,15,15,0,0,15,0,0,0,0,0,15,15,0,
    0,0,0,15,15,0,0,0,0,15,15,0,0,0,0,0,

    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,15,15,0,0,0,0,
    0,0,15,15,0,0,0,15,15,0,15,15,0,0,0,0,
    0,15,15,15,0,0,0,15,15,0,15,0,0,0,0,0,
    0,0,15,0,0,0,0,15,0,0,0,0,15,15,0,0,
    0,0,0,0,15,15,0,0,0,0,0,0,15,15,0,0,
    0,0,0,0,15,15,0,0,0,15,15,0,0,0,0,0,
    0,0,15,0,0,0,0,0,0,15,15,15,0,0,0,0,


};

const int LETTERS[43*8*8] = {

    0,1,1,1,1,1,1,0, //0
    1,0,0,0,0,0,1,1,
    1,0,0,0,0,1,0,1,
    1,0,0,0,1,0,0,1,
    1,0,0,1,0,0,0,1,
    1,0,1,0,0,0,0,1,
    1,1,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,

    0,0,0,1,1,0,0,0, //1
    0,0,0,1,1,0,0,0,
    0,0,1,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,1,1,1,1,0,0,

    0,1,1,1,1,1,1,0, //2
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,1,1,1,1,1,1,1,

    1,1,1,1,1,1,1,0, //3
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,0,

    1,0,0,0,0,0,0,1, //4
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,

    1,1,1,1,1,1,1,1, //5
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,1,1,1,1,1,1,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,0,

    0,1,1,1,1,1,1,0, //6
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,1,1,1,1,1,1,0,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,

    0,1,1,1,1,1,1,0, //7
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,1,0,0,
    0,0,1,1,1,1,1,0,
    0,0,0,0,1,0,0,0,
    0,0,0,0,1,0,0,0,
    0,0,0,0,1,0,0,0,

    0,1,1,1,1,1,1,0, //8
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,

    0,1,1,1,1,1,1,0, //9
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,

    0,0,0,0,0,0,0,0, //:
    0,0,0,1,1,0,0,0, 
    0,0,0,1,1,0,0,0, 
    0,0,0,0,0,0,0,0, 
    0,0,0,0,0,0,0,0, 
    0,0,0,1,1,0,0,0, 
    0,0,0,1,1,0,0,0, 
    0,0,0,0,0,0,0,0, 


    0,0,0,1,1,0,0,0, //+ (use ;)
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,



    1,1,1,1,1,1,1,1, //not in use #3
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,

    1,1,1,1,1,1,1,1, //not in use #4
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,

    1,0,0,0,0,0,0,0, //(>)
    1,1,1,0,0,0,0,0,
    1,1,1,1,1,0,0,0,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,0,0,0,
    1,1,1,0,0,0,0,0,
    1,0,0,0,0,0,0,0,

    1,1,1,1,1,1,1,1, //not in use #5
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,

    1,1,1,1,1,1,1,1, //not in use #6
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,

    0,1,1,1,1,1,1,0, //a
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    
    1,1,1,1,1,1,1,0, //b
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,0,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,0,

    0,1,1,1,1,1,1,1, //c
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,1,1,1,1,1,1,1,    
    
    1,1,1,1,1,1,1,0, //d
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,0,

    1,1,1,1,1,1,1,1, //e
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,1,1,1,1,1,1,1,
    
    1,1,1,1,1,1,1,1, //f
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,

    0,1,1,1,1,1,1,0, //g
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,1,1,1,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,    
    
    1,0,0,0,0,0,0,1, //h
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,

    0,0,0,1,1,0,0,0, //i
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,

    0,0,0,0,0,0,0,1, //j
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,

    1,0,0,0,1,1,0,0, //k
    1,0,0,1,0,0,0,0,
    1,0,1,0,0,0,0,0,
    1,1,0,0,0,0,0,0,
    1,1,0,0,0,0,0,0,
    1,0,1,0,0,0,0,0,
    1,0,0,1,0,0,0,0,
    1,0,0,0,1,1,0,0,

    1,0,0,0,0,0,0,0, //l
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,1,1,1,1,1,1,0,
        
    1,0,0,0,0,0,0,1, //m
    1,1,0,0,0,0,1,1,
    1,0,1,0,0,1,0,1,
    1,0,1,1,1,1,0,1,
    1,0,0,1,1,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,

    1,0,0,0,0,0,0,1, //n
    1,1,0,0,0,0,0,1,
    1,0,1,0,0,0,0,1,
    1,0,0,1,0,0,0,1,
    1,0,0,0,1,0,0,1,
    1,0,0,0,0,1,0,1,
    1,0,0,0,0,0,1,1,
    1,0,0,0,0,0,0,1,

    0,1,1,1,1,1,1,0, //o
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,

    0,1,1,1,1,1,1,0, //p
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,

    0,1,1,1,1,1,0,0, //Q
    1,0,0,0,0,0,1,0,
    1,0,0,0,0,0,1,0,
    1,0,0,0,0,0,1,0,
    1,0,0,0,0,0,1,0,
    1,0,0,0,1,0,1,0,
    1,0,0,0,0,1,1,0,
    0,1,1,1,1,1,0,1,

    0,1,1,1,1,1,1,0, //R
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,0,
    1,0,0,1,0,0,0,0,
    1,0,0,0,1,0,0,0,
    1,0,0,0,0,1,0,0,
    1,0,0,0,0,0,1,0,

    0,1,1,1,1,1,1,0, //s
    1,0,0,0,0,0,0,0,
    1,0,0,0,0,0,0,0,
    0,1,1,1,1,1,1,0,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,0,

    1,1,1,1,1,1,1,1, //t
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,

    1,0,0,0,0,0,0,1, //u
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,1,1,1,1,1,0,

    1,0,0,0,0,0,0,1, //v
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,0,0,0,0,1,0,
    0,1,0,0,0,0,1,0,
    0,0,1,0,0,1,0,0,
    0,0,1,0,0,1,0,0,
    0,0,0,1,1,0,0,0,

    1,0,0,0,0,0,0,1, //w
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,1,
    0,1,0,1,1,0,1,0,
    0,1,0,1,1,0,1,0,
    0,0,1,1,1,1,0,0,

    1,0,0,0,0,0,0,1, //z
    0,1,0,0,0,0,1,0,
    0,0,1,0,0,1,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,1,0,0,1,0,0,
    0,1,0,0,0,0,1,0,
    1,0,0,0,0,0,0,1,

    1,0,0,0,0,0,0,1, //z
    0,1,0,0,0,0,1,0,
    0,0,1,0,0,1,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,
    0,0,0,1,1,0,0,0,

    1,1,1,1,1,1,1,1, //z
    0,0,0,0,0,0,1,0,
    0,0,0,0,0,1,0,0,
    0,0,0,0,1,0,0,0,
    0,0,0,1,0,0,0,0,
    0,0,1,0,0,0,0,0,
    0,1,0,0,0,0,0,0,
    1,1,1,1,1,1,1,1,
};

const int FPSHAND[25*15] = {
    0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,1,151,151,151,1,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,1,151,151,151,151,1,0,1,1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,1,151,151,151,151,151,1,151,151,1,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,1,151,151,151,151,151,151,151,151,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,1,151,151,151,151,151,151,151,151,1,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,1,151,151,151,151,151,151,151,151,151,1,0,0,0,0,
    0,1,1,1,0,0,0,0,0,1,151,151,151,151,151,151,151,151,151,151,1,0,0,0,0,
    1,151,151,151,1,0,0,0,1,151,151,151,151,151,151,151,151,151,151,151,151,1,0,0,0,
    1,151,151,151,151,1,1,1,151,151,151,151,151,151,151,151,151,151,151,151,151,151,1,0,0,
    1,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,1,0,0,
    0,1,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,1,0,
    0,0,1,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,1,0,
    0,0,0,1,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,1,0,
    0,0,0,0,1,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,1,0,

};

const int FPSBOOK[35*15] = {
    0,0,0,16,16,16,16,16,16,16,16,16,16,16,16,0,0,0,0,0,16,16,16,16,16,16,16,16,16,16,16,16,0,0,0,
    0,0,16,159,159,159,159,159,159,159,159,159,159,159,159,16,16,0,16,16,158,158,158,158,158,158,158,158,158,158,158,158,16,0,0,
    0,16,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,16,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,16,0,
    16,158,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,149,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,16,0,
    16,158,159,159,6,6,6,6,6,6,6,6,6,6,159,159,159,149,158,158,158,5,5,5,5,5,5,5,5,5,5,158,158,149,16,
    16,158,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,149,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,149,16,
    16,158,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,149,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,149,16,
    16,158,159,159,6,6,6,6,6,6,6,6,6,6,159,159,159,149,158,158,158,5,5,5,5,5,5,5,5,5,5,158,158,149,16,
    16,158,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,149,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,149,16,
    16,158,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,149,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,149,16,
    16,158,159,159,6,6,6,6,6,6,6,6,6,6,159,159,159,149,158,158,158,5,5,5,5,5,5,5,5,5,5,158,158,149,16,
    16,158,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,149,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,149,16,
    16,158,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,149,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,149,16,
    16,158,159,159,6,6,6,6,6,6,6,6,6,6,159,159,159,149,158,158,158,5,5,5,5,5,5,5,5,5,5,158,158,149,16,
    16,158,159,159,159,159,159,159,159,159,159,159,159,159,159,159,159,149,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,149,16,
};

//36, 38, 5, 6, 15, 14
const int COMPASSDIRECTIONS[8*16*16] = {
    //N
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,38,38,5,5,6,6,15,14,6,6,5,5,38,38,16,
    36,38,5,5,6,6,6,15,14,6,6,6,5,5,38,36,
    38,38,5,6,6,6,6,15,14,6,6,6,6,5,38,38,
    38,5,5,6,6,6,6,15,14,6,6,6,6,5,5,38,
    38,16,5,6,6,6,15,38,38,14,6,6,6,5,16,38,
    38,16,5,6,6,6,16,38,38,2,6,6,6,5,16,38,
    38,5,5,6,6,6,6,16,2,6,6,6,6,5,5,38,
    38,38,5,6,6,6,6,16,2,6,6,6,6,5,38,38,
    36,38,5,5,6,6,6,16,2,6,6,6,5,5,38,36,
    16,38,38,5,5,6,6,16,2,6,6,5,5,38,38,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    //NE
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    36,38,5,5,6,6,6,6,6,6,15,15,5,5,38,36,
    38,38,5,6,6,6,6,6,6,15,15,14,6,5,38,38,
    38,5,5,6,6,6,6,15,15,15,14,6,6,5,5,38,
    38,16,5,6,6,6,16,38,38,14,6,6,6,5,16,38,
    38,16,5,6,6,6,16,38,38,14,6,6,6,5,16,38,
    38,5,5,6,6,16,2,2,2,6,6,6,6,5,5,38,
    38,38,5,6,16,2,2,6,6,6,6,6,6,5,38,38,
    36,38,5,5,2,2,6,6,6,6,6,6,5,5,38,36,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    //E
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    36,38,5,5,6,6,6,6,6,6,6,6,5,5,38,36,
    38,38,5,6,6,6,6,6,6,6,6,6,6,5,38,38,
    38,5,5,6,6,6,6,16,15,6,6,6,6,5,5,38,
    38,16,5,16,16,16,16,38,38,15,15,15,15,5,16,38,
    38,16,5,2,2,2,2,38,38,14,14,14,14,5,16,38,
    38,5,5,6,6,6,6,2,14,6,6,6,6,5,5,38,
    38,38,5,6,6,6,6,6,6,6,6,6,6,5,38,38,
    36,38,5,5,6,6,6,6,6,6,6,6,5,5,38,36,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    //SE
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    36,38,5,5,2,16,6,6,6,6,6,6,5,5,38,36,
    38,38,5,6,2,2,16,6,6,6,6,6,6,5,38,38,
    38,5,5,6,6,2,2,16,16,6,6,6,6,5,5,38,
    38,16,5,6,6,6,2,38,38,15,6,6,6,5,16,38,
    38,16,5,6,6,6,2,38,38,15,6,6,6,5,16,38,
    38,5,5,6,6,6,6,14,14,15,15,6,6,5,5,38,
    38,38,5,6,6,6,6,6,6,14,15,15,6,5,38,38,
    36,38,5,5,6,6,6,6,6,6,14,15,5,5,38,36,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    //S
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,38,38,5,5,6,6,2,16,6,6,5,5,38,38,16,
    36,38,5,5,6,6,6,2,16,6,6,6,5,5,38,36,
    38,38,5,6,6,6,6,2,16,6,6,6,6,5,38,38,
    38,5,5,6,6,6,6,2,16,6,6,6,6,5,5,38,
    38,16,5,6,6,6,2,38,38,16,6,6,6,5,16,38,
    38,16,5,6,6,6,14,38,38,15,6,6,6,5,16,38,
    38,5,5,6,6,6,6,14,15,6,6,6,6,5,5,38,
    38,38,5,6,6,6,6,14,15,6,6,6,6,5,38,38,
    36,38,5,5,6,6,6,14,15,6,6,6,5,5,38,36,
    16,38,38,5,5,6,6,14,15,6,6,5,5,38,38,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    //SW
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    36,38,5,5,6,6,6,6,6,6,2,2,5,5,38,36,
    38,38,5,6,6,6,6,6,6,2,2,16,6,5,38,38,
    38,5,5,6,6,6,6,2,2,2,16,6,6,5,5,38,
    38,16,5,6,6,6,14,38,38,16,6,6,6,5,16,38,
    38,16,5,6,6,6,14,38,38,16,6,6,6,5,16,38,
    38,5,5,6,6,14,15,15,15,6,6,6,6,5,5,38,
    38,38,5,6,14,15,15,6,6,6,6,6,6,5,38,38,
    36,38,5,5,15,15,6,6,6,6,6,6,5,5,38,36,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    //W
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    36,38,5,5,6,6,6,6,6,6,6,6,5,5,38,36,
    38,38,5,6,6,6,6,6,6,6,6,6,6,5,38,38,
    38,5,5,6,6,6,6,14,2,6,6,6,6,5,5,38,
    38,16,5,14,14,14,14,38,38,2,2,2,2,5,16,38,
    38,16,5,15,15,15,15,38,38,16,16,16,16,5,16,38,
    38,5,5,6,6,6,6,15,16,6,6,6,6,5,5,38,
    38,38,5,6,6,6,6,6,6,6,6,6,6,5,38,38,
    36,38,5,5,6,6,6,6,6,6,6,6,5,5,38,36,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    //NW
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    36,38,5,5,15,14,6,6,6,6,6,6,5,5,38,36,
    38,38,5,6,15,15,14,6,6,6,6,6,6,5,38,38,
    38,5,5,6,6,15,15,14,14,6,6,6,6,5,5,38,
    38,16,5,6,6,6,15,38,38,2,6,6,6,5,16,38,
    38,16,5,6,6,6,15,38,38,2,6,6,6,5,16,38,
    38,5,5,6,6,6,6,16,16,2,2,6,6,5,5,38,
    38,38,5,6,6,6,6,6,6,16,2,2,6,5,38,38,
    36,38,5,5,6,6,6,6,6,6,16,2,5,5,38,36,
    16,38,38,5,5,6,6,6,6,6,6,5,5,38,38,16,
    16,36,38,38,5,5,5,5,5,5,5,5,38,38,36,16,
    16,16,36,38,38,38,5,16,16,5,38,38,38,36,16,16,
    16,16,16,16,36,38,38,38,38,38,38,36,16,16,16,16,
};