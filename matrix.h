#ifndef _LIBCCP_MATRIX
#define _LIBCCP_MATRIX

#include "_iterator/iterator.h"
#include "_iterator/reverse_iterator.h"

#include <array>
#include <cstddef>

template <class _Tp, std::size_t _M, std::size_t _N>
struct matrix
{       typedef _Tp type_parameter;
        typedef type_parameter& type_reference;
        typedef const type_parameter& const_type_reference;
        typedef type_parameter* type_pointer;
        typedef const type_parameter* const_type_pointer;

        using _container_type = std::array<type_parameter, _N>;

        std::array<_container_type, _M> _elements;
};

#endif // _LIBCCP_MATRIX