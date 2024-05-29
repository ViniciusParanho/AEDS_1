#include <stdio.h>
int estaordenado (int array [], int tamanho){
  if (tamanho<=1)
    return 1;
  if (array[tamanho-1]<array [tamanho-2]
    return 0;
  return estaordenado (array,tamanho-1);
  
}
