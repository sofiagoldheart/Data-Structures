#include <iostream>
using namespace std;


void fillarr(int *arr, int s, int f);
void imprimir(int *arr, int s);
int *createarr(int s);

int main() {
  int *api = NULL;
  int sizearr=0;
  
  cout <<"Size of array: " << endl;
  cin >> sizearr; 
  api = createarr(sizearr);
  fillarr(api, sizearr, 10);
  imprimir(api, sizearr);
  
}

void fillarr(int *arr, int s, int f){


  for (int i = 0; i<s;i++){
    arr[i] = f;
  }


  
}

void imprimir(int *arr, int s){
  for (int i = 0; i<s;i++){
     cout << arr[i]<<" ";
   }
  }

int *createarr(int s) {

  int *api = NULL;

if((api = new int[s]) == NULL)
  {
    cout << "Not enough memory" << endl;
    return NULL;
  }
  
  return api;
  
}


