//Ejercicio 4 Funciones en C
#include<stdio.h>
#include<math.h>

float resul_ecuacionSegundogrado(float a, float b, float c);

int main(){
	float a,b,c, funcion;
	printf("\nIntroduzca el valor de a: ");
	scanf("%f",&a);
	printf("\nIntroduzca el valor de b: ");
	scanf("%f",&b);
	printf("\nIntroduzca el valor de c: ");
	scanf("%f",&c);
	
	funcion = resul_ecuacionSegundogrado(a,b,c);

	if (funcion ==0){
		printf("\nla solucion de la ecuacion es: ");
		printf("\nSolucion: %.2f",-b/(2*a));
	}else if (funcion  > 0){
		printf("\nla solucion de la ecuacion es: ");
		printf("\nx1: %.2f", (- b + sqrt(funcion))/(2*a));
		printf("\nx1: %.2f", (- b - sqrt(funcion))/(2*a));
	}else{
        printf("\nx1: %.2f + %.2f", - b / (2*a),(sqrt(-funcion))/(2*a));
		printf("\nx2: %.2f - %.2f", - b / (2*a),(sqrt(-funcion))/(2*a));
	}
	return 0;
}
float resul_ecuacionSegundogrado(float a, float b, float c){
	float J;
	J= b*b - (4*a*c);
	return 0;
	}

