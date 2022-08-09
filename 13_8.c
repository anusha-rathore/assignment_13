#include<stdio.h>
int a=0, b=1;
void fibo(int );
int main()
{
     int n;
    printf("Enter term: ");
    scanf("%d", &n);
    printf("%d \n %d\n", a,b);
   fibo(n);
   return 0;

}
void fibo(int n)
{
    int c;
 if (n)
 {
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
    fibo(n-1);

 }
 

}