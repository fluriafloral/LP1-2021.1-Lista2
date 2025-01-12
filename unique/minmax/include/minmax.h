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
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
template <typename Itr, typename Compare >
bool cmp (const Itr &a, const Itr &b){
        if (a < b){
            return 1;
        }
        else {
            return 0;
        }
    }
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    if (distance(first, last) == 0){
        return std::make_pair( first, first );
    }
    else {
        std::sort(first, last - 1, cmp);
        return std::pair(first, last);
    }
}

}
#endif
