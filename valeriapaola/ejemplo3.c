JEMPLO No. 3: PROGRAMA QUE LEE CUALQUIER NÚMERO ENTERO INDEFINIDAMENTE HASTA QUE EL USUARIO INTRODUZCA UN CERO.

#include <stdio.h>

main()

{

int x;

do {

scanf(“%d”,&x);

} while (x != 0);

}