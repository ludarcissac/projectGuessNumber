/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : guessNumber.c

* Purpose :

* Creation Date : 10-09-2018

* Last Modified : lun. 10 sept. 2018 15:08:53 CEST

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
			return 0 ;
		}
		else if ( guess > theNb )
			printf("Lower !\n") ;
		else
			printf("Higher !\n") ;

		--tries ;
	}
	while( tries ) ;

	printf("You lost :'(\nThe number was %d\n", theNb) ;
	
   return 0;
}


