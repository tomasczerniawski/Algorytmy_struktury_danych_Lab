// Tomas Czerniawski. Student
// Poszukiwanie elementa w tablicy
// 2022-10-25
 # Zadanie 1
 ```

include <stdio.h>

 #define n 100
 
 int find(int *arr);
 
 void insert(int item, int pos, int *arr);
 
 void remove1(ItemType **head,int position);
 
 int size(float *arr);

float findMax(float *arr);

float findMin(float *arr);

void printTable(float *arr);


 void main(void) {
     
         int arr[100];
      
      return;
    }
    
  
int find(int *arr){
   
   int size, i, toSearch, find;

   
   printf("Wproadz wielkosc tabeli: ");
   scanf("%d", &size);

   
   printf("Wprowadz elementy do tabeli: ");
   for(i=0; i<size; i++)
   {
       scanf("%d", &arr[i]);
   }

   printf("\nWprowadz element ktury chcesz znalesc: ");
   scanf("%d", &toSearch);

   
   find = 0; 
   
   for(i=0; i<size; i++)
   {
       
       if(arr[i] == toSearch)
       {
           find = 1;
           break;
       }
   }

   
   if(find == 1)
   {
       printf("\n%d jest znaleziony na pozycji %d", toSearch, i + 1);
   }
   else
   {
       printf("\n%d niema takiej liczby w tabeli", toSearch);
   }}
    
    void insert(int item, int pos, int *arr)
     {
    item=112233;
    pos=66;
    arr[pos]=item;
    }
    
    int size(float *arr){
    int i = (sizeof(arr)/sizeof(arr[0]));
  printf("\n%d",i);
  return i;}
  
  void remove1(ItemType **head, int position) {
  if (position == 0) {
    ItemType *tmp = NULL;

    if (*head != NULL) {
      tmp = (*head)->next;
      free(*head);
      *head = tmp;
    } else {
      ItemType *current = *head;
      ItemType *tmp;
      int i = 0;

      while (current->next != NULL && i < position - 1) {
        current = current->next;
        i++;
      }
      tmp = current->next;
      current->next = tmp->next;
      free(tmp);
    }
  }
}

int size(ItemType *head) {
  int counter = 0;
  if (head == NULL)
    return counter;
  else {
    ItemType *current = head;
    do {
      counter++;
      current = current->next;
    } while (current != NULL);
  }
  return counter; 
}

float findMax(float *arr){
float max = arr[0];
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(max < arr[i]){
      max = arr[i];
      }
      }
  return max;
}

float findMin(float *arr){
float min = arr[0];
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(min > arr[i]){
      min = arr[i];
    }
  }
  return min;
  }
  
  void printTable(float *arr){
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    printf(" %.2f ", arr[i]);
    }

    ```
