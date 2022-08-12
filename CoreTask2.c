#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, x=0;
    char backup;

    printf("**This is a temperature checking program**\n\n");

	while(x == 0)
	{
    	printf("Insert temperature: ");
    	scanf("%d", &temp);
		
		printf("Backup on?(Y/N): ");
        scanf(" %c", &backup);

	    if (temp < 50)
    	    printf("Normal mode of operation.");
			
    	else if (50 <= temp && temp <= 80)
        	printf("Turn on circulating fan.");
			
    	else if (temp > 80 && (backup == 'N' || backup == 'n'))
		{
        	printf("Turn equipment off immediately.");
			break;
		}
		else
	 		continue;
	}
    return 0;
}

