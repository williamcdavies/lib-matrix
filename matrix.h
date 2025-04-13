#ifndef MATRIX
#define MATRIX

#include "row_iterator.h"
#include <array>

template <class _Tp, unsigned long _M, unsigned long _N>
struct matrix
{       public:
                typedef _Tp type_parameter;
                typedef type_parameter& type_reference;
                typedef const type_parameter& const_type_reference;
                typedef type_parameter* type_pointer;
                typedef const type_parameter* const_type_pointer;

                std::array<_Tp, (_M * _N)> elems; // no explicit construct/copy/destroy for aggregate type
                
                void fill(const_type_reference ctr)
                {       elems.fill(ctr);
                }
                void swap(matrix& m)
                {       elems.swap(m.elems);
                }
                unsigned long size() const
                {       return elems.size();
                }
                unsigned long max_size() const
                {       return elems.max_size();
                }
                bool empty() const
                {       return elems.empty();
                }
                type_reference operator [](const unsigned long n)
                {       return elems[n];
                }
                const_type_reference operator [](const unsigned long n) const
                {       return elems[n];
                }
                type_reference at(const unsigned long row, const unsigned long col)
                {       return elems.at(((row - 1) * _N) + (col - 1));
                }
                const_type_reference at(const unsigned long row, const unsigned long col) const 
                {       return elems.at(((row - 1) * _N) + (col - 1));
                }  
                type_reference front()
                {       return elems.front();
                }
                const_type_reference front() const
                {       return elems.front();
                }
                type_reference back()
                {       return elems.back();
                }
                const_type_reference back() const
                {       return elems.back();
                }
                type_pointer data() 
                {       return elems.data();
                }
                const_type_pointer data() const 
                {       return elems.data();
                } 
};

#endif // MATRIX