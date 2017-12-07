/*Arreglos Bidimensionales*/
/*Suma de todos los elementos, suma de la diagonal principal*/
/*Suma de la diagonal secundaria*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
void lectura();
void todos();
void principal();
void secundaria();
void impresion();
int a[10][10];
int i,j,f,c, sumat,sumap,sumas;

main()
{
 do
 {
  printf("Cantidad de filas:");
  scanf("%d", &f);
  printf("Cantidad de columnas:");
  scanf("%d", &c);
 }while(f!=c);
 lectura();
 todos();
 principal();
 secundaria();
 impresion();
 printf("\n");
 system("pause");
}

void lectura()
{
     for(i=1;i<=f;i++)
     {
      for(j=1;j<=c;j++)
      {
        a[i][j]=rand();   
      }
      }
 }    
 
 void impresion()
 {
      printf("La matriz es:\n");
      for(i=1;i<=f;i++)
      {
        for(j=1;j<=c;j++)
        {
           printf("%d\t", a[i][j]);
           }
           printf("\n");
           }
      printf("La suma de todos los valores es %d\n", sumat);
      printf("La suma de la diagonal principal es %d\n", sumap);
      printf("La suma de la diagonal secundaria es %d\n", sumas);
           }
              
void todos()
{
 sumat=0;
 for(i=1;i<=f;i++)
 {
  for(j=1;j<=c;j++)
  {
   sumat=sumat+a[i][j];
  }
 }
}

void principal()
{
 sumap=0;
 for(i=1;i<=f;i++)
 {
  for(j=1;j<=c;j++)
  {
   if(i==j)
   {
    sumap=sumap+a[i][j];
  }/*fin de if*/
  }/*fin de for de columnas*/
  }/*fin de for de filas*/  
}     

void secundaria()
{
 sumas=0;
 for(i=1;i<=f;i++)
 {
  for(j=1;j<=c;j++)
  {
   if(i+j==f+1)
   {
    sumas=sumas+a[i][j];
  }/*fin de if*/
  }/*fin de for de columnas*/
  }/*fin de for de filas*/  
}     

