#include <iostream>
#include <string>

#include "spielfeld.hh"
#include "utils/validation.h"

using namespace std;

bool zerlegeFeld(string eingabe, int &y, int &x) {
    if (eingabe.length() > 2) {
        return false;
    }
    char letter = eingabe[0];
    int number = eingabe[1] - '0';
    x = convertCharacterToNumber(letter) -1;
    y = number -1;
    return isValidCharacter(letter) && isValidNumber(number);
}

bool continuePlaying(const string& input){
    return input == "y";
}


/* Anderen Spieler bestimmen für Spielerwechsel */
Spielfeld::Spieler andererSpieler(Spielfeld::Spieler spieler) {
    if (spieler == Spielfeld::Spieler_X){
        return Spielfeld::Spieler_O;
    } else {
        return Spielfeld::Spieler_X;
    }
}

int main() {
    Spielfeld spielfeld;
    Spielfeld::Spieler aktuellerSpieler = Spielfeld::Spieler_X;
    /* Führe so lange fort, wie der Spielstand offen ist */
    while (true) {
        /* Zeige Spielfeld */
        spielfeld.zeige(cout);
        /* Zeige Spieler */
        cout << aktuellerSpieler << " ist am Zug!" << endl;
        /* Frage Feld ab */
        cout << "Waehle ein Feld! (z.B. A3)" << endl;
        string eingabe;
        getline(cin, eingabe);
        /* Prüfe Feld */
        int x, y;
        if (zerlegeFeld(eingabe, y, x)) {
            /* Zulässiges Feld => Prüfe, ob es leer ist*/
            if (spielfeld.feldIstLeer(y, x)) {
                /* Feld ist leer => Setze es und wechsle Spieler */
                spielfeld.setze(y, x, aktuellerSpieler);
                //Check if its won
                bool isDone = spielfeld.isDone();
                if (isDone){
                    Spielfeld::Spielstand standings = spielfeld.spielstand();
                    if (standings == Spielfeld::Gewinn_O){
                        printf("Player 0 has won this game! Congratulations! \n");;
                    }
                    if (standings == Spielfeld::Gewinn_X){
                        printf("Player X has won this game! Congratulations! \n");
                    }
                    if (standings == Spielfeld::Unentschieden){
                        printf("It looks like it's a tie! Damn it!");
                    }
                    printf("Do you want to continue? (y / n) \n");
                    string command;
                    getline(cin, command);
                    if (!continuePlaying(command)){
                        break;
                    }
                    //Clear the board and begin again
                    spielfeld.clear();
                }
                aktuellerSpieler = andererSpieler(aktuellerSpieler);
            } else {
                cout << "Dieses Feld ist schon belegt!" << endl;
                cout << "Versuche es noch einmal!" << endl;
            }
        } else {
            cout << "Ein Feld besteht aus einem Buchstaben (A-C) gefolgt von einer Ziffer (1-3)!" << endl;
            cout << "Versuche es noch einmal!" << endl;
        }
    }
    return 0;
}