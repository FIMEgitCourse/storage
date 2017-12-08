JEMPLO 4: PROGRAMA QUE LEE NÚMEROS HASTA LLEGAR A UN CERO Y LUEGO MUESTRA LA SUMA DE TODOS LOS NÚMEROS LEÍDOS

#include <stdio.h>

main()

{

int x;

int suma=0;

do {

scanf(“%d”,&x);

suma+=x;

} while ( x != 0);

printf(“La suma es: %d”, suma);

}