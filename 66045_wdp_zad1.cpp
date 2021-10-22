#include <iostream>

using namespace std;

int main()
{
    cout << "\tZadanie 1" << endl;
    cout << "Wypisanie numeru albumu" << endl;
    int album = 66045;
    cout << "Numer albumu: " << album << endl;

    cout << "\tZadanie 2" << endl;
    cout << "Sprawdza czy liczba jest parzysta / nieparzysta" << endl;
    int number;
    cout << "Podaj liczbe: ";
    cin >> number;
    cout << (number%2 ? "nieparzysta" : "parzysta") << endl;

    cout << "\tZadanie 3" << endl;
    cout << "Podanie dwoch liczb i wyswietlenie maksymalnej" << endl;
    float two[2];
    for(short i =0; i<2; i++){
        cout << "Podaj liczbę: ";
        cin >> two[i];
    }
    if(two[0] > two[1]){
        cout << two[0] << " jest większa" << endl;
    }
    else if(two[1] > two[0]){
        cout << two[1] << " jest większa" << endl;
    }
    else{
        cout << "są równe" << endl;
    }
    
    cout << "\tZadanie 4" << endl;
    cout << "Podanie 4 liczb i obliczenie sredniej" << endl;
    float four[4];
    for(short i=0; i<4; i++){
        cout << "Podaj " << i+1 << " liczbe: ";
        cin >> four[i];
    }
    float avg = 0;
    for(short i=0; i<4; i++){
        avg+=four[i];
    }
    cout << "Srednia tych liczb to " << avg/4 << endl;
    
    cout << "\tZadanie 5" << endl;
    int type=0;
    cout << "Kalkulator.exe" << endl;
    cout << "1.Dodawanie" << endl;
    cout << "2.Odejmowanie" << endl;
    cout << "3.Mnozenie" << endl;
    cout << "4.Dzielenie" << endl;
    cout << "5.Srednia" << endl;
    cout << "Wybierz dzialanie: ";
    cin >> type;
    cout << "Wprowadz pierwsza liczbe: ";
    cin >> two[0];
    cout << "Wprowadz druga liczbe: ";
    cin >> two[1];
    switch(type){
        case 1:
            cout << two[0] << " + " << two[1] << " = " << two[0]+two[1] << endl;
            break;
        case 2:
            cout << two[0] << " - " << two[1] << " = " << two[0]-two[1] << endl;
            break;
        case 3:
            cout << two[0] << " * " << two[1] << " = " << two[0]*two[1] << endl;
            break;
        case 4:
            if(two[1]){
                cout << two[0] << " / " << two[1] << " = " << two[0]/two[1] << endl;
            }
            else{
                cout << "Nie dziel przez zero :)" << endl;
            }
            break;
        case 5:
            cout << "avg(" << two[0] << ", " << two[1] << ") = " << (two[0]+two[1])/2 << endl;
            break;
    }
}
