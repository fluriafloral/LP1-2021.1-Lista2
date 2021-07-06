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
    if(!UnaryPredicate(a)){
        return false;
    }
    else {
        return true;
    }
}

bool cmp [](const InputIt &a, const InputIt &b){return a < b};

bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    while (first < last){
        if (p(first++) == false){
            return false;

        }
    }
    return true;
}

/*!
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    while (first < last){
        if(p(first++) == true){
            return true;
        }
    }
    return false;
}

/*!
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    while (first < last){
        if (p(first++) == true){
            return false;
        }
    }
    return true;
}

}
#endif
