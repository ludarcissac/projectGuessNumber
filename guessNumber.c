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
<<<<<<< HEAD
	int nbMin = 1, nbMax = 1000, tries, theNb = nbMin + rand() % nbMax, guess ;
	int cpt=0;
	int cptStart;
	printf("Enter the number of tries : \n");
	scanf("%d", &tries);
	int results[tries];
=======
	int nbMin = 1, nbMax = 100, tries = 10, theNb = nbMin + rand() % nbMax, guess ;
	int results[tries];
	int cpt=0;
	int cptStart;
    int level ;

    do
    {
        printf("Choisir le niveau (1: facile, 2: moyen, 3: difficile.\n") ;
        __fpurge(stdin) ;
        scanf("%d", &level) ;
        switch(level)
        {
            case 1 :
                break;
            case 2 :
                nbMax = 1e4 ;
                tries = 15 ;
                break ;
            case 3 :
                nbMax = 1e6 ;
                tries = 20 ;
                break ;
            default :
                printf("Invalide\n") ;
                break ;

        }
    }
    while(level < 1 || level > 3) ;

>>>>>>> e35127df5f12d94e2cb4d698575260eb466470ed
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


