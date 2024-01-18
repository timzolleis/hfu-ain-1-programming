//
// Created by Tim Zolleis on 18.01.24.
//

#include "player.h"

Spielfeld::Markierung getPlayerMarking(Spielfeld::Spieler player){
    if (player == Spielfeld::Spieler_X){
        return Spielfeld::Markierung_X;
    } else return Spielfeld::Markierung_O;
}