#ifndef _LIB_MATRIX
#define _LIB_MATRIX

#include "iterator/row_iterator.h"

#include <array>

template <class _Tp, unsigned long _M, unsigned long _N>
struct matrix
{       typedef _Tp type_parameter;
        typedef type_parameter& type_reference;
        typedef const type_parameter& const_type_reference;
        typedef type_parameter* type_pointer;
        typedef const type_parameter* const_type_pointer;

        std::array<_Tp, (_M * _N)> __elems_;

        // no explicit construct/copy/destroy for aggregate type
        void fill(const_type_reference __ctr)
        {       __elems_.fill(__ctr);
        }
        void swap(matrix& __m)
        {       __elems_.swap(__m.__elems_);
        }

        type_reference at(const unsigned long __row, const unsigned long __col)
        {       return __elems_.at(((__row - 1) * _N) + (__col - 1));
        }
        const_type_reference at(const unsigned long __row, const unsigned long __col) const 
        {       return __elems_.at(((__row - 1) * _N) + (__col - 1));
        }
        type_pointer data() noexcept 
        {       return __elems_.data();
        }
        const_type_pointer data() const noexcept 
        {       return __elems_.data();
        } 
};

#endif // _LIB_MATRIX