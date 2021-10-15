#include <stdio.h>
#define max 20

int main(){
	
	float matriz[max][2];
	int arrayClave[max];
	char arrayNombre[max][20];
	int N;
		
	printf("Cuantos empleados quiere registrar? \n");
	scanf("%i", &N);
	
	capturaEmpleado(N, matriz, arrayClave, Nombre);
	ordenaArreglo(N, matriz, arrayClave, Nombre);
		
    return 0;
}

void capturaEmpleado(int N, float matriz[max][2], int arrayClave[max], char Nombre[max][20]){
	
	int  i;	
	
	for(i=0; i < N; i++){
		printf("Ingrese los datos del empleado numero %d: \n", i+1);
		printf("Clave: ");
		scanf("%i", &arrayClave[i]);
		printf("\n");
		printf("Nombre: ");
		gets(&arrayNombre[i]);
		printf("\n");
		printf("Estatura: ");
		scanf("%f", &matriz[i][1]);
		printf("\n");
		printf("Sueldo: ");
		scanf("%f", &matriz[i][2]);
		printf("\n");		
	}	
}

void ordenaArreglo(int N, float matriz[max][2], int arrayClave[max], char Nombre[max][20]){
	
	int i, j, auxClave;
	float aux = matriz[0][2];
	int array[2] = matriz[0];
	char auxNombre[20] = Nombre[0];
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(matriz[j][2] > matriz[j+1][2]){
				array = matriz[j+1];
				matriz[j+1] = matriz[j];
				matriz[j] = array;
				auxNombre = Nombre[j+1];
				Nombre[j+1] = Nombre[j];
				Nombre[j] = auxNombre;
				auxClave = arrayClave[j+1];
				arrayClave[j+1] = arrayClave[j];
				arrayClave[j] = auxClave;
			}
		}
	}		
}
