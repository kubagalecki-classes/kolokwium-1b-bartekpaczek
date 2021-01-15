#pragma once

#include "zad1.hpp"

template<class T>
class ArtystaPlusInstrument{
    Artysta a;
    T i;

    public:
    ArtystaPlusInstrument(const Artysta& A, const T& I): a(A), i(I){};
    unsigned koncert(){
        return i.liczbaUczestnikow(a.getSluchacze());
    };
};
