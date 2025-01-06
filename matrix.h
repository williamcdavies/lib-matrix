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

        // iterators:

        // capacity:
        unsigned long size() const
        {       return __elems_.size();
        }
        unsigned long max_size() const
        {       return __elems_.max_size();
        }
        bool empty() const
        {       return __elems_.empty();
        }

        // element access:
        type_reference operator [](const unsigned long __n)
        {       return __elems_[__n];
        }
        const_type_reference operator [](const unsigned long __n) const
        {       return __elems_[__n];
        }
        type_reference at(const unsigned long __row, const unsigned long __col)
        {       return __elems_.at(((__row - 1) * _N) + (__col - 1));
        }
        const_type_reference at(const unsigned long __row, const unsigned long __col) const 
        {       return __elems_.at(((__row - 1) * _N) + (__col - 1));
        }  
        type_reference front()
        {       return __elems_.front();
        }
        const_type_reference front() const
        {       return __elems_.front();
        }
        type_reference back()
        {       return __elems_.back();
        }
        const_type_reference back() const
        {       return __elems_.back();
        }
        type_pointer data() 
        {       return __elems_.data();
        }
        const_type_pointer data() const 
        {       return __elems_.data();
        } 
};

#endif // _LIB_MATRIX