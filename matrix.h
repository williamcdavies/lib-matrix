#ifndef _LIBCCP_MATRIX
#define _LIBCCP_MATRIX

#include <array>
#include <cstddef>

template <class _Tp, std::size_t _M, std::size_t _N>
struct matrix
{       typedef _Tp type_parameter;
        typedef type_parameter& type_reference;
        typedef const type_parameter& const_type_reference;
        typedef type_parameter* type_pointer;
        typedef const type_parameter* const_type_pointer;

        std::array<type_parameter, (_M * _N)> elems;

        // element access
        type_reference at(const std::size_t _row, const std::size_t _col)
        {       return elems.at(((_row - 1) * _M) + (_col - 1));
        }
        
        const_type_reference at(const std::size_t _row, const std::size_t _col) const
        {       return elems.at(((_row - 1) * _M) + (_col - 1));
        }
        
        type_pointer data() noexcept
        {       return elems;
        }
        
        const_type_pointer data() const noexcept
        {       return elems;
        }

        // iterators
        
        
        // operations
        void fill(const_type_reference _ctr)
        {       elems.fill(_ctr);
        }
        
        void swap(matrix& _m)
        {       elems.swap(_m.elems);
        }
};

#endif // _LIBCCP_MATRIX