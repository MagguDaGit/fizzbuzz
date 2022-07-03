#include <iostream>
#include <string>
using namespace std; 

int main()
{

    

    while (true) {
        string loop = ""; 
        cout << "1 for start \n" << "Alt annet for å avslutte \n";
        getline(cin, loop);
        
        if (loop != "1") return 0; 

        //Brukerdialog for input av variabler
        string str_n, str_fizz, str_buzz;
        int n, fizz, buzz; 
        cout << "Velkommen til fizzbuzz, skriv inn lengden til fizzbuzz antallet:  \n";
        getline(cin, str_n); 
        cout << "Skriv inn hva fizz skal være: \n "; 
        getline(cin, str_fizz); 
        cout << "Skriv inn hva buzz skal være: \n"; 
        getline(cin, str_buzz); 

        //Konverterer tekst input fra bruker til int
        try {
            n = stoi(str_n); 
            fizz = stoi(str_fizz); 
            buzz = stoi(str_buzz);
            
        }
        catch (...) {
            string bekreft; 
            cout << "Tall gitt for antall, fizz eller buzz stemmet ikke. Dette kan være hvis tekst ble gitt i stedet for tall \n"; 
            getline(cin, bekreft); 
            continue;
        }

        cout << "Antall = " << n << ", Fizz = " << fizz << ", Buzz = " << buzz << "\n";    
    }
  

}


void fizzbuzz(int n, int fizz, int buzz) {

}

