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

/*	#include <iostream>
	#include<stdio.h>
	using namespace std;
	
	int tamcad(char cad[]);
	
	int main(){
	char cad1[12] = {"DIPLODOCUS"};
	cout << tamcad(cad1)<<endl;
	}
	
	int tamcad(char cad[]){
	char *pc1;
	int i = 0;
	
	pc1 = cad;
	while(*(pc1)!= '\0'){
	pc1++;
	
	}
}
