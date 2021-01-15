#include "zad1.hpp"

#include <exception>
#include <vector>

std::vector<Artysta> stworzZespol(int n, const std::string& s){
    if(n!=s.size()){
        throw std::logic_error("Wyjatek w piatek");
    };

    std::vector<Artysta> zespol(n);
    for(int i = 0; i<n; i++){
        Artysta a(s, i+1);
        zespol[n] = a;
    };
    return zespol;
}
