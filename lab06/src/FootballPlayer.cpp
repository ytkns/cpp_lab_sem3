#include "FootballPlayer.h"

FootballPlayer::FootballPlayer(const FootballPlayer& other){
    size = other.size;
    tab = new int[size];
    for(int i=0; i<size; i++)
        tab[i]=other.tab[i];
}

FootballPlayer::FootballPlayer(const int* goals, int n){
    size = n;
    tab = new int[size];
    for(int i=0; i<size; i++)
        tab[i]=goals[i];
}

FootballPlayer::~FootballPlayer(){
    delete[] tab;
}

void FootballPlayer::Set(int idx, int c){
    if(idx >= 0 && idx < size)
        tab[idx]=c;
}

int FootballPlayer::Get(int idx) const{
    if(idx >= 0 && idx < size)
        return tab[idx];
    return 0;
}
