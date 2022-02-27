#include <iostream>
#include <memory.h>
using namespace std;

int main(void)
{
  int *api = NULL;
  
  
   
  /*
  if((api = new int[1]) == NULL)
  {
    cout << "Not enough memory" << endl;
    exit (1);
  }
  */
  if ( (api = (int *)malloc(sizeof(int))) == NULL){
    cout << "Not enough memory" << endl;
    exit (1);
  }

  *(api) = 13;
 
  cout << *(api) << endl;
 
 return 0;
}
