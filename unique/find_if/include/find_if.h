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
template<class InputIt, class UnaryPredicate>
bool p (const InputIt &a){
    if (a > 5){
        return 1;
    }
    else {
        return 0;
    }
};
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    Itr retorno = last - 1;
    while (first < last){
        if (p(first++) == true){
            retorno = first;
        }
    }
    return retorno;
}

}
#endif
