#include <stdio.h>
int somaArray (int array[], int tamanho){
  if (tamanho==0){
    return 0;
  } else 
    return array[tamanho-1]+somaArray(array, tamanho-1);
  
}
