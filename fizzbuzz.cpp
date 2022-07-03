#include <iostream>
#include <string>
#include <cstdlib>
using namespace std; 


void startFizzBuzz(int n, int fizz, int buzz) {
    for (int i = 1; i <= n; i++) {
        if ((i % fizz == 0) && (i % buzz == 0)) {
            cout << "FizzBuzz \n";
        }
        else if (i % fizz == 0) {
            cout << "Fizz \n";
        }
        else if (i % buzz == 0) {
            cout << "Buzz \n";
        }
        else cout << i << "\n";
    }
}
void clear() {
    // Tømmer konsoll, fungerer kunn på windows
    try {
    system("cls");
    }
    /*
    Hvis programmet brukes på annet operativsystem vil det bare printes en linje
    for å skille mellom spill sesjoner
    */
    catch (...) {
        cout << "-----------------------------"; 
    }
}
    


int main()
{

    

    while (true) {
        clear(); 
        string loop = ""; 
        cout << "1 for start \n" << "Alt annet for avsluttning av programmet \n";
        getline(cin, loop);
        
        if (loop != "1") return 0; 

        //Brukerdialog for input av variabler
        string str_n, str_fizz, str_buzz;
        int n, fizz, buzz; 
        cout << "Velkommen til fizzbuzz, skriv inn lengden til fizzbuzz antallet:  \n";
        getline(cin, str_n); 
        cout << "Skriv inn hva fizz skal bli: \n"; 
        getline(cin, str_fizz); 
        cout << "Skriv inn hva buzz skal bli: \n"; 
        getline(cin, str_buzz); 

        //Konverterer tekst input fra bruker til int
        try {
            n = stoi(str_n); 
            fizz = stoi(str_fizz); 
            buzz = stoi(str_buzz);
            
        }
        //Finner unntak hvis noe gikk galt med henting av input
        catch (...) {
            string bekreft; 
            clear(); 
            cout << "Tall gitt for antall, fizz eller buzz stemmet ikke. Dette kan skje hvis tekst ble gitt i stedet for tall \n"; 
            getline(cin, bekreft); 
            continue;
        }
        cout << "Antall = " << n << ", Fizz = " << fizz << ", Buzz = " << buzz << "\n";    
        startFizzBuzz(n, fizz, buzz); 
        string ferdig;
        getline(cin, ferdig); 
    }
}