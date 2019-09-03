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
	char cm[10]="color ";
	strcat(cm, F, " ", L)
	system(cm)
}


void pausa(){
	system ("pause")
}
