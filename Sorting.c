#include <stdio.h>

//Function Definiton for Bubble Sorts
void Bubble(int n,int list[])
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)

            if (list[j] > list[j + 1])
            {
                //Algorithm for swapping two numbers
                list[j]=list[j] - list[j+1];
                list[j + 1]=list[j] + list[j + 1];
                list[j]=list[j+1] - list[j];

            }
}

int main()
{
    int n,option;
    printf("Enter The size of your list of numbers : ");
    scanf("%d",&n);

    int list[n];
    printf("Enter the numbers in your array :\n");//Initialising Array of Numbers

    for(int i=0;i<n;i++)
        {
       scanf("%d",&list[i]);
        }

    printf("Enter the Number corresponding to the sorting you want to perform:\n 1 for Bubble \n 2 for Insertion \n 3 for Selection \n 4 for Merge\n 5 for Quick\n===================\n ");
    scanf("%d",&option);

    printf("\nInitial List is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);

    }
    printf("\n");


    switch(option){
        case 1: Bubble(n,list);
            break;/*
        case 2: Inserstion(n,list);
            break;
        case 3: Selection(n,list);
            break;
        case 4: Merge(n,list);
            break;
        case 5: Quick(n,list);
             break;*/

        default: printf("\n Error  ");
    }

    printf("\nThe Sorted List is:\n:");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);

    }
    return 0;


}
