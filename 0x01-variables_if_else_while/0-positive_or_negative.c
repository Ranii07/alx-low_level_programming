#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/* betty style doc for function main goes there */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0){
		printf("is postive \n");
		
	} else if ((n = 0)){
		printf("is zero \n");
	}else {
		printf("is negative \n");
	}


	return (0);
}
