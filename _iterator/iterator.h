#ifndef _LIBCPP_ITERATOR
#define _LIBCPP_ITERATOR

template <class _Tp>
class iterator
{       public:
                typedef _Tp type_parameter;
                typedef type_parameter& type_reference;
                typedef const type_parameter& const_type_reference;
                typedef type_parameter* type_pointer;
                typedef const type_parameter* const_type_pointer;
        private:
                type_pointer _ptr;
};

#endif // _LIBCPP_ITERATOR