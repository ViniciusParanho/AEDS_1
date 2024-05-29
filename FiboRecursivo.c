#include <stdio.h>

int fiborec(int n){
  if (n==1||n==0){
    return n;
  }
 else 
    return fiborec(n-1)+fiborec(n-2);
  
}
