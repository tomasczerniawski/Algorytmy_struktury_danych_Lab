Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 1 przyklad
 Oblicza funkcja y = ax^2 znaczenia, gdy a i x zmeniaja sie jednoczesnie: a=1
krokiem 0.5, x=2 do 6 krokiem 2
* -----------------
2022-10-11


# Zadanie1.C

```
#include <stdio.h>

int main() {
  
int a,x,y;
  
  x=0,5;
  a=2;
  
while(x<7){
  
  x=x+2;
  y=a*x*x;
    
  printf(" %d \n", y);
  }
return 0;
  }
```



Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 2 przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale. x - zmieniase z x0 do xn, krokiem hx
* -----------------
2022-10-11

# Zadanie2.C
```
#include <stdio.h>

int main() {
  int a,y,n,h;
  int x=0, n=0;
 
  printf("wprowadz a: ");
  scanf("%d", &a);
  
  printf("wprowadz do jakiej wartosci x liczymy y: ");
  scanf("%d", &n);
  
  printf("wprowadz krok: ");
  scanf("%d", &h);
  
while(x<n){
  
    x=x+h;
    y=a*x*x;
    
    printf(" %d \n", y);
  }
  return 0;
  }
```



Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 3 przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n)
* -----------------
2022-10-11

# Zadanie3.c
```

#include <stdio.h>

int main() {
  int a,x,y,n,h,xn;
  int arr[]= {2, 4, 8, 9, 10};
  printf("wprowadz a: ");
  scanf("%d", &a);
  
  printf("wprowadz jaka liczbe chcecie wybrac z ciagu \n");
  scanf("%d", &xn);
  
  for(int i=0; i<sizeof(arr)/sizeof(int);i++)
    {
      
      if(xn==i)
      {
        x=arr[i];
      }
      
    }
  
  printf("wprowadz do jakiej wartosci x liczymy y: ");
  scanf("%d", &n);
  
  printf("wprowadz krok: ");
  scanf("%d", &h); 
  printf("%i\n",x);
  
while(x<n){
  
    x=x+h;
    y=a*x*x;
    
    printf("wybrales z ciagi liczby %d \n", y);
  };
  return 0;
  }

```

Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 1 przyklad
 Generowanie liczb pseudolosowych
* -----------------
2022-10-11

# Zadanie_1_ciagi
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i = 0;
    srand(1);
  
    for(i=1; i<=10; i++)
    {
        printf("Wywolanie %d wygenerowalo liczbe o wartosci: %d\n", i, rand());
    }
    return 0;
    }
```
  
  
  Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 2 przyklad
 Nale??y wygenerowa?? n kolejnych wyraz??w ci??gu arytmetycznego.
* -----------------
2022-10-11

  # Zadanie_2_ciagi
  ```
  #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  
    int i = 0,n;
   printf("wprowadz ile liczb generowac: ");
  
    scanf("%d", &n);
    srand(1);
  
    for(i=1; i<=n; i++)
    {
        printf("Wywolanie %d wygenerowalo liczbe o wartosci: %d\n", i, rand());
    }
    return 0;
}
  ```
