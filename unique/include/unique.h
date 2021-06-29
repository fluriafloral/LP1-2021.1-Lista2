#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*!
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class Equal>
bool eq (const InputIt &a, const InputIt &b){
    if (*a == *b){
        return true;
    }
    else{
        return false;
    }
}
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    int d = distance(first, last);
    bool rep_test = false;
    for (int a = 1;a < d;a++){
        rep_test = false;
        for (int b = 0; b < a;b++){
            if ((first + a) == (first + b)){
                rep_test = true;
            }
        }
        if (rep test == true){
            first + a = first + (a + 1);
            d--;
        }
    }
    return (first + d);
}

}
#endif
