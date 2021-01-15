#pragma once

#include "zad1.hpp"

#include <cctype>

class PopGwiazda : public Artysta{
    public:
    PopGwiazda(const std::string& p, unsigned l):Artysta(p,l){

    };
    void graj(std::ostream& os) const override{
        os<<"PopGwiazda"<<": "<<getPseudonim();
    };
};

class RapGwiazda : public Artysta{
    public:
    RapGwiazda(const std::string& p, unsigned l):Artysta(p,l){

    };
    void graj(std::ostream& os) const override{
        os<<"RapGwiazda"<<": "<<getPseudonim();
    };
};

Artysta* stworzArtyste(const std::string& s){
    if(s.front() ==std::toupper(s.front())){
        return new PopGwiazda("BTS",1234);
    }else{
        return new RapGwiazda("Ye", 4321);
    };
};