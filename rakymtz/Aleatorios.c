#include<stdio.h>
#include<conio2.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int num,i;
	srand(time(NULL));
	
	for(i=0; i<40; i++){
	num=1+rand()%(40);
	printf("%d\n",rand());

	}
	return 0;
}

