#include<stdio.h>
int square(int);
int main()
{
    int number;
    printf("enter N \n");
    scanf("%d",&number);
    int s=square(number);
    printf("sum of squares of  first  %d   natural number is : %d",number,s);
   return 0;

}
int square(int N){
    int s;
    if (N==1)
    {
        return 1;
    }

    s=((N*N)+square(N-1));
     return s;
}
