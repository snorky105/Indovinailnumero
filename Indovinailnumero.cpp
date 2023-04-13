#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // inizializza il generatore di numeri casuali
    int numeroCasuale = rand() % 100 + 1; // genera un numero casuale compreso tra 1 e 100
    int tentativi = 0; // numero di tentativi effettuati dal giocatore
    int scelta = 0; // numero scelto dal giocatore

    cout << "Benvenuto nel gioco dell'indovinello!" << endl;
    cout << "Ho scelto un numero casuale tra 1 e 100. Prova ad indovinarlo in meno di 10 tentativi." << endl;

    while (tentativi < 10) {
        cout << "Inserisci il tuo tentativo: ";
        cin >> scelta;

        if (scelta == numeroCasuale) {
            cout << "Complimenti, hai indovinato il numero in " << tentativi + 1 << " tentativi!" << endl;
            break;
        }
        else if (scelta < numeroCasuale) {
            cout << "Il numero che hai scelto è troppo basso. Riprova." << endl;
        }
        else {
            cout << "Il numero che hai scelto è troppo alto. Riprova." << endl;
        }

        tentativi++;
    }

    if (tentativi == 10) {
        cout << "Mi dispiace, hai esaurito i tentativi. Il numero da indovinare era " << numeroCasuale << "." << endl;
    }

    return 0;
}
