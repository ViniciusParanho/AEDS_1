#include <stdio.h>
int elementopresente (int array[], int elemento, int tamanho){
  if (tamanho<0)
    return 0;
  if (array[tamanho]==elemento)
    return 1;
  return elementopresente(array,elemento,tamanho-1);
}
