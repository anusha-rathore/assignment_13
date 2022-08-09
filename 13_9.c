#include<stdio.h>
int print(int);
int count=0;
int main()
{
    int digit;
    printf("enter digit\n");
    scanf("%d",&digit);
    int r= print(digit);
    printf("%d",r);
    return 0;
}
int print(int n){
    int r;
    if (n)
    {
        r=n%10;
        count++;
        print(n/10);
    }
    return count;
}