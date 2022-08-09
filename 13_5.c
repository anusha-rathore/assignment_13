#include<stdio.h>
int print(int);
int main()
{
    int number;
    printf("enter digit \n");
    scanf("%d",&number);
    int sum=print(number);
    printf("sum of digits of a given number is : %d",sum);
   return 0;
}
int print(int N){
if (N==0)
{
  return 0;

}

     return N%10 + print(N/10);
}
