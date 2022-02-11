#include<iostream>

using namespace std;
const int MAX = 3;

struct House{
   char addres[50]; 
   float cost;
   int rooms;
};

// Zona de prototipos
void ScanHouse(House *h);
void PrintHouse(House h);
int ReadHouses(House ah[]);
void PrintHouses(House ah[]);

int main(){
     House h1; // Declaración de estructura no inicializada
     House ArrH[MAX];
     int nroom;
    // Declaración de estructura inicializada
    //House h1 = {"Norte",1150000.00,3}; 
    cout << "Programa para gestionar casas"<<endl;
    nroom = ReadHouses(ArrH);
    cout << "Casas Registradas: " << nroom << endl;
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

int ReadHouses(House ah[]){
    int i = 0;
    char conti;

    do{
        cout <<"Quieres introducir valores para una casa (s/n): "; cin >> conti;
        if (conti == 'n'){
            return i;
        }
        ScanHouse(&ah[i++]);
    }while(i < MAX);
    cout << "Capacidad Maxima"<<endl;
    return i;
}

void PrintHouses(House ah[], int numHouses){
    int i = 0;
    char conti;
        do{
            PrintHouse(ah[i++]);
        }while(i < MAX);
}