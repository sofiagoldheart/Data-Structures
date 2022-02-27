#include<iostream>

using namespace std;

struct House{
   char addres[50]; 
   float cost;
   int rooms;
};

// Zona de prototipos
void ScanHouse(House *h);
void PrintHouse(House h);

int main(){
     House h1; // Declaración de estructura no inicializada
    // Declaración de estructura inicializada
    //House h1 = {"Norte",1150000.00,3}; 
    for (int i = 0; i < 3; i++){
        ScanHouse(&h1);
        cout <<"********"<<endl;
        PrintHouse(h1);
    }
    return 0;
}

void ScanHouse(House *h){
    cout << "Give the address: ";
    cin >> h->addres;
    cout << "Give the cost: ";
    cin >> h->cost;
    cout << "Give the number of rooms: ";
    cin >> h->rooms;
}

void PrintHouse(House h){
    cout << "Addres: " << h.addres << endl;
    cout << "Cost: " << h.cost << endl;
    cout << "rooms:" << h.rooms << endl;
}