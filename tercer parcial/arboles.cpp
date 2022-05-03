#include <iostream>
using namespace std;

struct Nodo{
  int num;
  Nodo *izquierda;
  Nodo *derecha;
};

Nodo *CrearNodo(int elem);
bool insertT (Nodo *arbol, int elem);
void PreOrden(Nodo *root);
  
int main() {
  Nodo *root = NULL;
  root = CrearNodo(12);
  insertT(root, 7);  
  insertT(root, 15);
  insertT(root, 3);
  insertT(root, 10);
  insertT(root, 13);
  insertT(root, 20);
  insertT(root, 1); 
  insertT(root, 6);  
  insertT(root, 19);  
}

Nodo *CrearNodo(int elem)
{
    Nodo *nuevo_nodo;
    nuevo_nodo = new Nodo[1];

    if (nuevo_nodo == NULL)
    {
        return NULL;
    }

    nuevo_nodo->num = elem;
    nuevo_nodo->izquierda = NULL;
    nuevo_nodo->derecha = NULL;

    return nuevo_nodo;
}

bool insertT (Nodo *arbol, int elem){
  Nodo *newnodo = NULL;
  if( elem < arbol->num){
    if(arbol->izquierda == NULL){
      newnodo = CrearNodo(elem);
      if(newnodo == NULL){return false;}
      arbol ->izquierda = newnodo;
      return true;
    }    
    return insertT(arbol->izquierda,elem);
  }else{
    if(arbol->derecha == NULL){
      newnodo = CrearNodo(elem);
      if(newnodo == NULL){return false;}
      arbol ->derecha = newnodo;
      return true;
    }    
    return insertT(arbol->derecha,elem);
  }
}

void PreOrden(Nodo *root){
    if(root==NULL)
    {
      return;  
    }
    cout<<root->num;
    PreOrden(root -> izquierda);
    PreOrden(root -> derecha);
  }

void EntreOrden(Nodo *root)
{
  if (root==NULL)
  {
    return;
  }
  else 
  {
    EntreOrden(root->izquierda);
    cout<<root->num<<",";
    EntreOrden(root->derecha);
  }
}

void PosOrden(Nodo *root)
{
  if (root==NULL){
    return;
  }
  else{
    PosOrden(root->izquierda);
    PosOrden(root->derecha);
    cout << root -> num <<",";
  }
}
