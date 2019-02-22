/*
    CH08-320142
    a5_p2.cpp
    MICHAEL MAGAISA
    m.magaisa@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
#include <cstring>
using namespace std;
int main(){
    int games;
    double ranking;
    string location;
    //Info about a tournament member.
    char first_name[36] = {'M','I','C','H','A','E','L','\0'};
    char last_name[36] ={'M','A','G','A','I','S','A','\0'};
    char DOB[11] = {'1','9','7','0','-','0','1','-','0','1','\0'};
    games = 7;
    ranking = 1.618;
    location = "Bremen";


    TournamentMember T1(first_name,last_name,DOB,games,ranking,location);
    T1.print();
    TournamentMember::setLocation("Hamburg");
    TournamentMember T2(T1); //Using Copy Constructor
    T2.print();
    return 0;
}
