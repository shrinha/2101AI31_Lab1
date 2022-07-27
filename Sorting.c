#include <stdio.h>

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

    printf("Enter the Number corresponding to the sorting you want to perform:\n 1 for Bubble \n 2 for Insertion \n 3 for Selection \n 4 for Merge\n 5 for Quick\n ");
    scanf("%d",&option);


    switch(option){
        case 1: Bubble(n,list);
            break;
        case 2: Inserstion(n,list);
            break;
        case 3: Selection(n,list);
            break;
        case 4: Merge(n,list);
            break;
        case 5: Quick(n,list);
             break;

        default: printf("\n Error  ");
    } 
    return 0;


}
