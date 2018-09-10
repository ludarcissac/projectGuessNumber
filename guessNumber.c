/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : guessNumber.c

* Purpose :

* Creation Date : 10-09-2018

* Last Modified : lun. 10 sept. 2018 16:46:32 CEST

* Created By :

 _._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL)) ;
	int nbMin = 1, nbMax = 1000, tries = 10, theNb = nbMin + rand() % nbMax, guess ;
	int results[tries];
	int cpt=0;
	int cptStart;
	do
	{
		printf("\nTries left : %d\n", tries) ;
		printf("Guess the number between %d and %d\n", nbMin, nbMax) ;
		scanf("%d", &guess) ;
		if (guess == theNb )
		{
			printf("Congrats !\n") ;
			return 0 ;
		}
		else if ( guess > theNb )
		{
			printf("\nLower !\n") ;
			nbMax = nbMax > guess ? guess : nbMax ;
		}
		else
		{
			printf("\nHigher !\n") ;
			nbMin = nbMin < guess ? guess : nbMin ;
		}

		--tries ;

		printf("History : \n");
		results[cpt]=guess;
		for(cptStart=0;cptStart<=cpt;cptStart++)
		{
            printf("%d ",results[cptStart]);
		}
		++cpt;
	}

	while( tries ) ;

	printf("\nYou lost :'(\nThe number was %d\n", theNb) ;

   return 0;
}


