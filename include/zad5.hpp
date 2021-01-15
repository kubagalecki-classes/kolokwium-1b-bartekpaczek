#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>


template<class T>
int liczPopularnych(T begin, T end){
    return std::count_if(begin, end, [](Artysta A){return A.getSluchacze()>1000;});
};
