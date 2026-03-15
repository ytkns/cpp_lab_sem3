#include "FootballPlayer.h"

FootballPlayer::FootballPlayer(const FootballPlayer& other){
    size = other.size;
    name = other.name;
    if(tab && size>0){
        tab = new int[size];
        for(int i=0; i<size; i++)
            tab[i]=other.tab[i];
    }     
}

FootballPlayer::FootballPlayer(const int* goals, int n, const string &nazwa){
    size = n;
    name = nazwa;
    if(goals && n >0){
        tab = new int[size];
        for(int i=0; i<n; i++)
            tab[i]=goals[i];
    } 
}

FootballPlayer::FootballPlayer(FootballPlayer&& other) noexcept
{
    tab = other.tab;
    size = other.size;
    name=std::move(other.name);
    other.tab = nullptr;
    other.size = 0;
    other.name.clear();
}

FootballPlayer::~FootballPlayer(){
    delete[] tab;
}


string FootballPlayer::GetName() const{
    return (name + "_copy");
}


void FootballPlayer::Set(int idx, int c){
    if(idx >= 0 && idx < size)
        tab[idx]=c;
}

int* FootballPlayer::GetGoals() const{
    if(tab)
        return tab;
    return 0;
}

void FootballPlayer::Copy(const FootballPlayer& other){
    tab=GetGoals();
    name = other.GetName();      
}
