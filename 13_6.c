#include<stdio.h>
int fact(int);
int main(

){
   int number;
   printf("enetr any number\n");
   scanf("%d",&number);
   int factorial=fact(number);
   printf("factorial is : %d",factorial);
   return 0;

}
int fact(int N){
    if (N>=1)   {
    return N*fact(N-1);

    }
    else
    return 1;
  
     
}