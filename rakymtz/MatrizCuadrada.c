/*programa que crea e imprime una matriz cuadrada*/
/*librerias*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//funciones
void crea_arreglo();
void imprimir_arreglo ();
//declaracion de variables
int i, j , n, matriz [50][50];
main ()
{//inicio main
crea_arreglo ();
imprimir_arreglo ();
}//fin del main
void crear_arreglo ()
{//inicio de crear 
printf ("ingresa la dimension del arreglo...");
scanf ("%d", &n);
for(i=1;i<=n; i++)
{//filas
for(j=1; j <=n; j++)
{//coluumnas
printf ("ingresael numero [%d %d]", i, j);
scanf ("%d", matriz [i][j]);
}//columnas
}//filas
return; //regresa el control al main
}//fin de crear arreglo
void imprimir_arreglo()
{//imprimir
	for (i=1;i<=n;i++)
	{//filas
	for (j=1; j<=n; j++)
	{//columnas
	printf("%d ", matriz[i][j]);
	printf ("\t \t ");
	}//columnas
	printf ("\n \n");
	}//filas
	return;
	getche ;
}



