#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

class Artysta{
    std::string pseudonim;
    unsigned l_sluchaczy;

    public:

    Artysta(){
        pseudonim = "Anonim";
        l_sluchaczy = 0;
    };

    Artysta(const std::string& a, unsigned b):pseudonim(a), l_sluchaczy(b){};

    virtual void graj(std::ostream& os) const{
        os<<pseudonim<<": "<<l_sluchaczy;
    };

    const std::string& getPseudonim() const{
        return pseudonim;
    };
    unsigned getSluchacze() const{
        return l_sluchaczy;
    };
};