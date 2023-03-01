#include<stdio.h>
#include<iostream>
/*=======================
=======================*/

float km,cm,mi,m=0;

main(){
	printf("insira a distancia em km\n\n",km);
	scanf("%f", &km);
	printf(" distancia selecionada e igual a %f\n\n",km);
	mi=km/1.6;
	printf(" isso em milhas e igual a %f milhas\n\n",mi);
	cm=km*100000;
	printf(" isso em cm e igual a %f centimetros\n\n",cm);
	m=km*1000;
	printf(" isso em m e igual a %f metros\n\n",m);
	
}
