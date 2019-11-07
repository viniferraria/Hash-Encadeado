#include <iostream>
#include <stdio.h>
#include "hash.h"

using namespace std;

Hash::Hash(int s):size(s)
{
  vetor = (Linked**) malloc (size * sizeof(Linked*));
  for(int i = 0; i < size; i++){
    vetor[i] = new Linked();
  }
}


Hash::~Hash() {
  delete vetor;
}


int Hash::fhash(int n) {
   return n%11;
}


void Hash::insert(int n) {
  int position = fhash(n);
  vetor[position] -> insert(n);
}

void Hash::search(int n){
  int position = fhash(n);
  vetor[position] -> search(n);
}


void Hash::toString() const {
  cout << endl << "#### Hash ####" << endl;
  for(int i = 0; i < size; i++){
    Linked * cursorV = vetor[i];
    cursorV -> toString();
  }
}

