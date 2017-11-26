struct node {
  int value;
  struct node *next;
};

void printList(struct node *listAddress){
  while (listAddress != 0) {
      printf("%d\n", listAddress->value);
      listAddress = listAddress->next;
  }
}


int main() {
  
  struct node *listAddress;
  
  struct node node1;
  struct node node2;
  
  node1.value = 5;
  node1.next = &node2;
  
  node2.value = 8;
  
  listAddress = &node1;
  printList(listAddress);
  

  return 0;
}
