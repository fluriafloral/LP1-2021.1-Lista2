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
template<class InputIt, class T, class Equal>
bool eq( const InputIt &a, const InputIt &b){
    if (a == b){
        return 1;
    }
    else {
        return 0;
    }
}
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    int d = distance(first, last);
    for (int a = 0; a < d ; a++){
        if (eq((first + a), value) == 1){
            return first + a;
        }
    }
    return last;
}

}
#endif
