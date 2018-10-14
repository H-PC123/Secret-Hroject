/*
 * main.cpp
 *
 *  Created on: Oct. 13, 2018
 *      Author: hpc123
 */
#include <string>
#include <cstdlib>

#include "../lib/Player.h"

int main(){
	Player* myPlayer = new Player();
	myPlayer->~Player();
	return 0;
}


