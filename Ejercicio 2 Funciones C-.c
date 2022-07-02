//Ejercicio 2 FUnciones en C
#include<stdio.h>
float promedio (float sumaconjuntoDenumeros, int cantidadTotal);
int main( ){

	   float conjuntoDenumeros= 0, suma= 0;
	   promedio;
	   char opcion [10];
	   int n, i;
	   
	   do {
			printf("Ingrese cantidad del conjunto de numeros: ");
			scanf("%d", &n);

			for (i=0;i < n; i++){
				printf("cantidad del conjunto de numeros %d: ", i+1);
				scanf("%f",&conjuntoDenumeros);
				fflush(stdin);
				suma= suma + conjuntoDenumeros;
			}
			printf("El promedio de los numeros es %1.f\n", promedio(suma,n));
			
			printf("Necesita calcular otro promdeio (si/no)?: ");
			scanf("%s", opcion);
		} while (opcion[0] == 's', opcion[0] == 's' );

			return 0;
		}
float promedio (float sumaconjuntoDenumeros, int cantidadTotal){
	  float promedio= 0.0;
	  
	  promedio = sumaconjuntoDenumeros/cantidadTotal;
	  
	  return promedio;
	}

		
