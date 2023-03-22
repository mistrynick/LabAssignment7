// Nicholas Mistry
// Compute the amount of swaps for each pass

#include <stdio.h>


int swaps;
int pass=0;

void bubbleSort(int *array,int n) {
  int temp;
  if (n == 1) {
    return;
  }
  for (int i=0;i<n-1;++i) {
    if (array[i] > array[i+1]) {
      temp = array[i];
      array[i] = array[i+1];
      array[i+1] = temp;
      swaps++; // Swap performed so increment!
    }
  }
  pass++; 
  printf("pass #%d: %d\n",pass, swaps);
  swaps = 0;
  bubbleSort(array,n-1);
}



int main(void) {
  int array[9] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
  bubbleSort(array,9);
  
  
  return 0;
}

