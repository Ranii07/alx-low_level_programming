#include <stdio.h>
#include "main.h"
int  main(void)
{  
       	int i;
        i = 0;
        if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else if (i < 0)
        {
                printf("%d is negative\n", i);
        }

	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	positive_or_negative(i);

	return 0;
       
}

