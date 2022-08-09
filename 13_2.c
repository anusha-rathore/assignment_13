#include<stdio.h>
int print(int);
int main()
{
    int number;
    printf("enter N \n");
    scanf("%d",&number);
    int sum=print(number);
      printf("sum of  first odd %d natural number is : %d",number,sum);
   return 0;
      
}
int print(int N){
    int s;
    if (N==1)
    {
        return 1;
    }

    s=((2*N-1)+print(N-1));
     return s;
}
