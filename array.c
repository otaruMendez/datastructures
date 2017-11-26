int arrayLength = 5;


// O(1)
int getValue(int index, int *arrayAddress) {
    if (index > arrayLength-1) {
      perror("Array out of bounds");
      exit(0);
    }
    return *(arrayAddress + index);
}

//0(1)
void setValue(int value, int index, int *arrayAddress) {
  if (index > arrayLength-1) {
      perror("Array out of bounds");
      exit(0);
  }
  *(arrayAddress + index) = value;
}

// O(n)
int searchValue(int value, int *arrayAddress) {
    for (int i = 0; i < arrayLength; i++) {
      if (*(arrayAddress + i) == value) {
        return i;
      }
    }
    return -1;
}


void printArray(int *arrayAddress) {
    for (int i = 0; i < arrayLength; i++) {
      printf("%d\n", *(arrayAddress + i));
    }
}

int main() {
  
   int numbers[5] = {90, 4, 8, 3, 1};
  
   int *arrayAddress;
  
   arrayAddress = &numbers;
   setValue(87, 2, arrayAddress);
   printf("%d\n", searchValue(1, arrayAddress));
   //printArray(arrayAddress);

   return 0;
}
