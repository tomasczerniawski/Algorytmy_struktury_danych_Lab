// Tomas Czerniawski student
// Ciąg Fibonacciego
// 2022-11-28

#include <stdio.h>

int fib(int n){
    
    if (n==0) return 0;
    if(n==1) return 1;

  
}

int main(void)
  
{
int x;
  
    printf("Podaj element ciągu Fibonacciego do obliczenia:");
  
scanf("%d", &x);
    
    printf("Liczba = %d",x );
    printf("ciągu Fibonacciego wynosi %d",fib(x));

    return 0;
}
