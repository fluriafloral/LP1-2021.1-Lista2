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
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    BidirIt it1 = first, it2 = last - 1;
    int d = distance(it1, it2);

    while (it1 < (it1 + (d / 2))){
        std::iter_swap(it1++, it2--);
    }
}

}
#endif
