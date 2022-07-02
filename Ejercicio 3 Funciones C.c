//Ejercicio 3 FUnciones en C
#include <stdio.h>
#include<string.h>
int main (){

	 char Cadena1[20], Cadena2[20], Final[80];
	 
	 printf("\nIngrese caracteres de la cadena1: ");
	 scanf("%s", Cadena1);
	 printf("\nIngrese caracteres de la cadena2: ");
	 scanf("%s", Cadena2);
	 
	 strcat(Final,  Cadena1);
	 strcat(Final,"-");
     strcat(Final,  Cadena2);
     printf("\nLa cadena concatenada es : %s", Final);
	 strrev(Final);
	 printf("\nLa cadena resultante es : %s", Final);
	 return 0;
	}
	void strings (char str1[20],char str2[20]){
		char strinv[20], straux[20];
		strcpy(straux,str1);
	    strcat(straux,str2);
	    strrev(straux);
		str1[20]=straux[20];
		printf("Esta es la String resultante: %s", straux);
		}
	 
