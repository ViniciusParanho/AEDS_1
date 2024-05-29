#include <stdio.h>
int SaoPares(int array[],int tamanho, int index){
  if(index==tamanho)
    return 1;
  if (array[index]%2!=0)
    return 0;
  return SaoPares(array,tamanho,index+1);
}
