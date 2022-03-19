#include<iostream>
#include<stdio.h>

using namespace std;
const int MAX = 3;

struct StackI{
int *arri;
int top;
int sizemax;
};

bool IniStackI(StackI *si, int s);
bool isStackEmpty(StackI si);
bool isStackFull(StackI si);
void ShowStackI(StackI si);
bool PushI(StackI *si, int elem);
int  PopI(StackI *si, bool *vflag);

int main(){
  StackI sti01;
  bool valid;
  int item;
  bool isOK;
  char cfirm;
  int opt;
  int ele;
  do{
    cout << " Stack Creater \n 1.- Stack Initialization (Y/N) \n 2.- Add an element \n 3.- Delete an element \n 4.- Exit" << endl; cin >> opt;
    switch (opt) {
      case 1:
        int size;
        cout << "Stack Initialization" << endl;
        cout << "Size of the stack " << endl; cin >>size;
        isOK = IniStackI(&sti01, size);
        if( isOK == false){
          cout << "Error"<<endl;
          }
        else{
          cout << "Go on" <<endl;
          }
        break;
      case 2:
        cout << "Input the element to add: " << endl; cin >> ele;
        isOK = PushI(&sti01,ele);
        if(isOK == false){
          cout << "ERROR" << endl;
          }
        else{
          cout << "Go on" << endl;
          }
        break;
      case 3:
        item = PopI(&sti01,&valid);
        if (valid){
          cout << "Element extracted: "<<item<<endl;
          }
        break;
      }
    }while(opt!=4);
  return 0;
  }

bool IniStackI(StackI *si, int s){
  si->arri = new int[s];
  if (si->arri == NULL){
    cout << "Not enough memory"<<endl;
    return false;
    }
  si->top = -1;
  si->sizemax = s;
  return true;
  }

bool isStackEmpty(StackI si){
  if (si.top < 0){ return true;}
  return false;
  }

bool isStackFull(StackI si){
  if (si.top >= (si.sizemax -1) ){ return true;}
  return false;
  }

void ShowStackI(StackI si){
  printf("Address of first element on Stack: %p\n",si.arri);
  cout << "Size of Stack: "<<si.sizemax<<endl;
  cout << "Position of top: "<<si.top<<endl;
  }

bool PushI(StackI *si, int elem){
  if (isStackFull(*si)){
    cout <<"Stack Full" << endl;
    return false;
    }
  si->arri[++si->top] = elem;
  cout <<"Intro: "<< si->arri[si->top]<<endl;
  return true;
  }

int  PopI(StackI *si, bool *vflag){
  int vret = 0;
  if (isStackEmpty(*si)){
    *vflag = false;
    }
  else{
    vret = si->arri[si->top--];
    *vflag = true;
    }
  return vret;
  }