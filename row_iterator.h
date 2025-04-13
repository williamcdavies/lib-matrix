#ifndef ROW_ITERATOR
#define ROW_ITERATOR

template <class _Tp>
struct row_iterator
{       public:
                typedef _Tp type_parameter;
                typedef type_parameter& type_reference;
                typedef const type_parameter& const_type_reference;
                typedef type_parameter* type_pointer;
                typedef const type_parameter* const_type_pointer;
                        
                _Tp* ptr;
                
                row_iterator() : ptr() {}
};

#endif // ROW_ITERATOR