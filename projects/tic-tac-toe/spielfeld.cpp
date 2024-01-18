#include "spielfeld.hh"
#include <iomanip> /* für setw() */
#include "utils//player.h"

/* Macht das Tippen leichter */
using namespace std;

Spielfeld::Spielfeld() {
    /* Initialisiere Spielfeld */
    clear();
}

void Spielfeld::clear(){
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            belegung[y][x] = Leer;
        }
    }
}

void Spielfeld::zeige(ostream& os) {
    /* Spaltenkopf */
    os << "  ABC" << endl;
    for (int y = 0; y < 3; y++) {
        /* Zeilenkopf */
        os << setw(1) << (y+1) << ' ';
        /* Zeileninhalt */
        for (int x = 0; x < 3; x++) {
            os << belegung[y][x];
        }
        os << endl;
    }
}


void Spielfeld::setze(int y, int x, Spieler spieler) {
    if (spieler == Spieler_X){
        belegung[y][x] = Markierung_X;
    } else {
        belegung[y][x] = Markierung_O;
    }
}

Spielfeld::Spielstand Spielfeld::spielstand() {
    if (hatGewonnen(Spieler_O)) {
        return Gewinn_O;
    } else if (hatGewonnen(Spieler_X)) {
        return Gewinn_X;
    } else if (alleFelderBelegt()) {
        return Unentschieden;
    } else {
        return Offen;
    }
}

bool Spielfeld::hatGewonnen(Spieler spieler) {
    //Check if the player has either a full row, a full col or a diagonal
    bool hasWon = false;
    for (int i = 0; i < 3; ++i) {
        if (ganzeReihe(i, spieler) || ganzeSpalte(i, spieler)){
            hasWon = true;
        }
    }
    if (!hasWon){
        hasWon = diagonal(spieler);
    }
    return hasWon;
}

bool Spielfeld::isDone() {
    Spielstand standings = spielstand();
    return standings == Spielstand::Gewinn_O || standings == Spielstand::Gewinn_X || standings == Spielstand::Unentschieden;
}

bool Spielfeld::ganzeReihe(int y, Spieler spieler) {
    bool isFilled = true;
    for (int i = 0; i < 3; i++) {
        if (belegung[y][i] != getPlayerMarking(spieler)){
            isFilled = false;
        }
    }
    return isFilled;
}

bool Spielfeld::ganzeSpalte(int x, Spieler spieler) {
    bool isFilled = true;
    for (auto & i : belegung) {
        if (i[x] != getPlayerMarking(spieler)){
            isFilled = false;
        }
    }
    return isFilled;
}

 bool Spielfeld::diagonal( Spieler spieler){
    //There are only two possibilities for a diagonal match, so we can quickly check them
    bool leftToRight = true;
     for (int row = 0; row < 3; row++) {
         if (belegung[row][row] != getPlayerMarking(spieler)){
             leftToRight = false;
         }
     }
     if (leftToRight){
         return leftToRight;
     }
     //If we dont have a match, we check the next
     int col = 2;
     bool rightToLeft = true;
     for (int row = 0; row < 3; row++, col--) {
         if(belegung[row][col] != getPlayerMarking(spieler)){
             rightToLeft = false;
         }
     }
     return rightToLeft;
}

bool Spielfeld::alleFelderBelegt() {
    bool isFull = true;
    //Loop through each field and check if its not empty
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (belegung[i][j] == Leer){
                isFull = false;
            }
        }
    }
    return isFull;
}

/** Überladener <<-Operator für Spielfeld-Markierungen */
std::ostream& operator<<(std::ostream& os, Spielfeld::Markierung markierung) {
    os << (char)markierung;
    return os;
}

/** Überladener <<-Operator für Spieler */
std::ostream& operator<<(std::ostream& os, Spielfeld::Spieler spieler) {
    os << (char)spieler;
    return os;
}
