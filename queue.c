// Implement a 

int queueLength = 0;
int dequeLength = 0;

int deque(int *queueAddress) {
  if (queueLength - dequeLength <= 0) {
    printf("%s\n", "Queue is empty");
    exit(0);
  }
  int value = *(queueAddress + dequeLength);
  dequeLength++;
  return value;
}

void enque (int *queueAddress, int value) {
  *(queueAddress + queueLength) = value;
  queueLength++;
}

int main() {
  
   int numbers[queueLength];
  
   int *arrayAddress;
  
   arrayAddress = &numbers;
   enque(arrayAddress, 5);
   enque(arrayAddress, 40);
   printf("%d\n", deque(arrayAddress));
   printf("%d\n", deque(arrayAddress));
   printf("%d\n", deque(arrayAddress));

   return 0;
}
