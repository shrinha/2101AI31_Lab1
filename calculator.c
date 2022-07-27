#include <stdio.h>

int main()
{
    char op;
    float a,b,res;
    printf("Please Enter The Operation you want to perform(+,-,*,/):\n");
    scanf("%c", &op);
    printf("Enter the values of Operands :  \n ");
   scanf("%f%f", &a, &b);

    switch(op){
      case '+': res = a + b;
         break;
      case '-': res = a - b;
         break;
     case '*': res = a * b;
         break;   

      default: printf("\n Error  ");

    }
    printf("The value = %f", res);

    return 0;
}
