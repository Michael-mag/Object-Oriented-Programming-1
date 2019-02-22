/*
    CH08-320142
    a5_p2.cpp
    MICHAEL MAGAISA
    m.magaisa@jacobs-university.de
*/

#include <iostream>
#include <string>

class TournamentMember{
private:
    char f_name[36];
    char l_name[36];
    char dob[11];//Date of birth
    int games;//total games participation in  tournament
    double ranking;//Overal rank in careeer
    static std::string location;
public:
    TournamentMember();
    TournamentMember(char* ,char* ,char* ,int ,double ,const std::string&);
    TournamentMember(const TournamentMember&);
    ~TournamentMember();
    void setFname(char*);
    void setLname(char*);
    void setDob(char*);
    void setGames(int);
    void setRank(double);
    static void setLocation(const std::string&);

    char getFname();
    char getLname();
    char getDob();
    int getGames();
    int getRank();
    static std::string getLocation();

    void print();
};
