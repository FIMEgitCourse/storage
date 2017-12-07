#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <math.h>

void main(void)
{
time_t t;
double m, a, x, u, y;
int i, n;
t = time(NULL); // Mas parametros
a = 16807; // Parametros del generador...
m = 2147483647; //Otro parametro, no se cansan?
clrscr();
printf("La semilla del proceso es %ld\n", t);
printf ("Cuantos n£meros quieres generar?: ");
scanf ("%d", &n);
x = 1.0 * t;
i = 1;
while(i <= n)
{
x = a * x + m;
x = fmod(x, m);
u = x / m;
printf("%d El entero aleatorio es %.0f y el fracionario %.4f\n", i, x, u);
i++;
}
}
