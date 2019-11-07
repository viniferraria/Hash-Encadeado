//Vinícius Amendoeira Ferraria TIA 31829643
//Matheus Amendoeira Ferraria TIA 31889824

#include <iostream>

#include "linked.h"
#include "hash.h"

using namespace std;

int main() {
  cout << "Hello World!\n";
  Hash X;
  int vetor[] = {11, 33, 23, 69, 100};
  for(auto& x: vetor){
    X.insert(x);
  }
  
  X.toString();

  X.search(22);
  X.search(33);
  
}
