#include <iostream>
#include "linked.h"

using namespace std;


Linked::Linked(){
  head = new Node(-1);
  colisoes = 0;
}


Linked::~Linked(){
  delete head;
}


bool Linked::empty() const{
  return ((this->head->value) == -1);
}


void Linked::insert(int n){
  if ( (this->head) -> value == -1){
    (this->head) -> value = n;
  } else {
    colisoes++;
    Node * cursor = this->head;
    for( ; cursor->next != NULL; cursor = cursor->next) {}
      cursor->next = new Node(n);
  }
  cout << endl;
  cout << endl << "Valor inserido: " << n << endl;
  cout << "Colisões de chave: " << this -> colisoes << endl;
}


void Linked::toString() const {
  for(Node * cursor = this->head; cursor != NULL; cursor = cursor->next){
    if (cursor->next == NULL) {        
      cout << (cursor->value) << endl;
    } else {
      cout << (cursor->value) << " -> ";
    }    
  }
}


void Linked::search(int x) const {
  for(Node * cursor = this -> head; cursor != NULL; cursor = cursor -> next){
    if(cursor -> value == x) {
      cout << endl << x <<" encontrado." << endl;
      return;
    }
  }
  cout << endl << x << " não encontrado." << endl;
}