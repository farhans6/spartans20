#include <stdio.h>

int main()
{
    int arr[10], rev[10];
    int n, i, arrInd, revInd;


    printf("Enter size of the array: ");
    scanf("%d", &n);


    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    revInd = 0;
    arrInd = n - 1;
    while(arrInd >= 0)
    {

        rev[revInd] = arr[arrInd];

        revInd++;
        arrInd--;
    }


    printf("\nReversed array : ");
    for(i=0; i<n; i++)
    {
      printf("%d", rev[i]);
    }

    return 0;
}
