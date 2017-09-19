#include <stdio.h>
#include <stdlib.h>

int main()
{

    int myArray[3];
    int * ptr = myArray;

    int i = 0;
    int flag = 0;

    printf("Enter a number into array.\n");

    flag = scanf("%i",&myArray[i]);

    while (EOF != flag)  {

        printf("Put %d into Array[%d]\n",myArray[i],i);

        i++;

        if (i > 2) {
            break;
        }

        else {

            printf("Enter another number.\n");
            flag = scanf("%i",&myArray[i]);

        }

    }

    printf("\nThese numbers were stored in the array:\n");

        for (i = 0; i<3;++i) {
            printf("%d ", *(ptr+i));
        }

    return 0;
}