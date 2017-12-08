EJEMPLO No. 2: PROGRAMA QUE INDICA SI UN NÚMERO ES PAR O NO

#include <stdio.h>

main()

{

int x;

printf(“Escribe el número sin decimales: “);

scanf(“%d”,&x);

if (x%2==0)

printf(“El número es par”);

else

printf(“El número es impar”);

}