#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void initialize(stack *s) {
  // implement initialize here
  s -> head = NULL;
  // vores head pointer sættes til at være tom
}

void push(int x, stack *s) {
  // implement push here
  node *new = malloc(sizeof(node));
  new->data = x;
  new->next = s->head;
  new->next= s->head;
  s->head = new;
}

int pop(stack *s) {
  // implement pop here
  if (s->head == NULL) // tjekker om stacken er tom
  {
    printf("stack er tom \n"); // udskriver hvis den er tom
    return -1; // returnerer ingenting
  }
  
  node* temp = s->head;
  int val = temp->data;
  s->head = s->head->next;
  free(temp); // frigør hukommelsen fra temp

  return val; // returnerer værdien der blev poppet fra stacken
}

bool empty(stack *s) {
  // implement empty here
  return s->head == NULL; 
  // hvis stacken er tom returneres der false hvis stacken ikke er tom returneres true
}

bool full(stack *s) {
  // implement full here
  return false;
  // stacken kan potentielt vokse indtil der ikke er mere plads i hukommelsen
}