#include <iostream> 
using namespace std; 
 
int main() { 
 
char * apc = NULL; //char * apc = NULL; 
char c1 [10] = {"SUPER_OK"}; 
  
  apc = c1;  
    while (*apc!='\0'){
      cout << *apc++ << endl;  
    }
}
