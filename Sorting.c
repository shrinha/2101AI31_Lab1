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

    return 0;


}
