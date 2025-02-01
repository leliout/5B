#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <conio.h>
#include "windows.h"
#include <ctime>
 using namespace std;
 char nome[50]=" ";
 char cognome[50]=" ";
 int eta=0;
 int inserimento=0;
 int main()
 {
 	FILE*Mulina;
 	Mulina = fopen("Anguilla.txt","r");
 	if(Mulina==NULL)
 	{
 		Mulina = fopen("Anguilla.txt","w");
	 }
	else
	{
		
 		Mulina = fopen("Anguilla.txt","a");
	 
	 } 
 do
 {
 	 printf("INSERISCI IL NOME:   ");
 scanf("%s",&nome);
printf("INSERISCI IL COGNOME:   ");
 scanf("%s",&cognome);
 printf("INSERISCI L'ETA:   ");
 scanf("%d",&eta);
 fprintf(Mulina, "%s %s %d\n",nome,cognome,eta);
 printf("Vuoi inserire altri nominativi o no? 1 per continuare 2 uscire");
 scanf("%d",&inserimento);
 }while(inserimento==1);
 
 
return 0;
 fclose(Mulina);
 
 }
