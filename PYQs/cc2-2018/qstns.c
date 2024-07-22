#include<stdio.h>

int main (){


// increment / decrement operator 

  // int a = 2, b = 3, c;

  // c = (a++) + (++b) + (++b);

  // printf("%d", c);


  // 4. (a) 

  int i = 20, k = 0, j;
  for(j = 1; j < i; j = 1 + 4*(i/j))
  {
    k+= j < 10 ? 4 : 3;
  }
  printf("%d", k);





}

  
