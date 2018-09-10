/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : guessNumber.c

* Purpose :

* Creation Date : 10-09-2018

* Last Modified : lun. 10 sept. 2018 14:55:28 CEST

* Created By :  

 _._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL)) ;
	int nbMin = 1, nbMax = 10, tries = 3, theNb = nbMin + rand() % nbMax, guess ;
	
	do
	{   	
		printf("Tries left : %d\n", tries) ;
		printf("Guess the number between %d and %d\n", nbMin, nbMax) ;
		scanf("%d", &guess) ;
		if (guess == theNb )
		{
			printf("Congrats !\n") ;
			break ;
		}
		else
			printf("Try again !\n") ;

		--tries ;
	}
	while( tries ) ;

	printf("The number was %d\n", theNb) ;
	
   return 0;
}


