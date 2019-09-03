#include "portugolc.h"
#include <iostream>
#include <string>
#include<time.h>
#include <locale.h>



void espera(unsigned long mseconds){
	clock_t goal = mseconds + clock();
    while (goal > clock());;
}
void brazil (){
	setlocale(LC_ALL,"");
}
void limpatela(){
	system("cls");
}

void cor (char F, L)
{
	string cm;
	//str(cm)
	//system("color ","F","L")
}


void pausa(){
	system ("pause")
}
