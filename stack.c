// Implement a stack

int stackLength = 0;

void push(int *address, int value) {
  *(address + stackLength) = value;
  stackLength++;
}

int pop(int *address) {
  
  if (stackLength == 0) {
    printf("%s\n", "stack is empty");
    exit(0);
  }
  
  if (address != 0) {
    stackLength--;
    return *(address + stackLength);
  }
}

int main() {
  
   int numbers[stackLength];
  
   int *arrayAddress;
  
   arrayAddress = &numbers;
   push(arrayAddress, 5);
   push(arrayAddress, 40);
   printf("%d\n", pop(arrayAddress));
   printf("%d\n", pop(arrayAddress));


   return 0;
}
