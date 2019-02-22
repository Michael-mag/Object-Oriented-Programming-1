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

            //CONSTRUCTORS
string TournamentMember::location;
TournamentMember::TournamentMember(){
    cout<< "Calling Constructor without parameters"<<endl;
}
TournamentMember::TournamentMember(char* fn,char* ln,char* db,int gs,
                                   double rk,const string& lo){
     cout << "Calling Constructor with parameters"<<endl;
     strcpy(f_name,fn);
     strcpy(l_name,ln);
     strcpy(dob,db);
     games = gs;
     ranking = rk;
     location = lo;
}
TournamentMember::TournamentMember(const TournamentMember& src){
    cout << "\nCalling Copy Constructor"<<endl;
    strcpy(f_name,src.f_name);
    strcpy(l_name,src.l_name);
    strcpy(dob,src.dob);
    games = src.games;
    ranking = src.ranking;
    
    //Location is a static var, no need to assign it to the copy
}
TournamentMember::~TournamentMember(){
   cout<<endl;
    cout<<"Calling Destructor"<<endl;
}
           //SETTER METHODES
inline void TournamentMember::setFname(char* fn){
    strcpy(f_name,fn);
}
inline void TournamentMember::setLname(char* ln){
    strcpy(l_name,ln);
}
inline void TournamentMember::setDob(char* db){
    strcpy(dob,db);
}
inline void TournamentMember::setGames(int gs){
    games = gs;
}
inline void TournamentMember::setRank(double rk){
    ranking = rk;
}
void TournamentMember::setLocation(const string& lo){
    location = lo;
}
            //GETTER METHODES
inline char TournamentMember::getFname(){
    return *f_name;
}
inline char TournamentMember::getLname(){
    return *l_name;
}
inline char TournamentMember::getDob(){
    return *dob;
}
inline int TournamentMember::getGames(){
    return games;
}
inline int TournamentMember::getRank(){
    return ranking;
}

string TournamentMember::getLocation(){
    return location;
}
            //SERVICE METHODES
void TournamentMember::print(){
    cout << "\nName : " << f_name<<" "<<l_name<<endl;
    cout << "Date of Birth : " <<dob<<endl;
    cout << "Games participated : "<< games<<endl;
    cout << "Overal Rank : " << ranking <<endl;
    cout << "Current location : "<<location<<endl;
}
