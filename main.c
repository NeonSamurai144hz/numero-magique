  #include <stdlib.h>
  #include <stdio.h>
  #include <time.h>


int main()
{

        srand(time(NULL));
        int random_number = rand() % 100 + 1;

        int number;

        printf("Choissisez un nombre entre 1 et 100\n");

 while (1)
    {

        scanf("%d", &number);

        if (number > random_number)
        {
            printf("C'est moins!\n");
        }
        else if (number < random_number)
        {
            printf("C'est plus!\n");
        }
                else
                {
                        printf("Gagné!\n");
                        break;
                 }
     }

        return 0;

}

