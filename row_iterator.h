#ifndef _LIB_MATRIX_R_ITERATOR
#define _LIB_MATRIX_R_ITERATOR

template <class _Tp>
class row_iterator
{       public:
                typedef _Tp type_parameter;
                typedef type_parameter& type_reference;
                typedef const type_parameter& const_type_reference;
                typedef type_parameter* type_pointer;
                typedef const type_parameter* const_type_pointer;
        private:
                _Tp* __ptr_;
        public:
                row_iterator() : __ptr_(nullptr) {}
                row_iterator(type_pointer __t) : __ptr_(__t) {}
                row_iterator(const row_iterator<type_parameter>& __itr) : __ptr_(__itr.base()) {}
                row_iterator& operator =(const row_iterator<type_parameter>& __itr) {__ptr_ = __itr.base(); return *this;}
                row_iterator& operator =(const row_iterator<const type_parameter>& __itr) { __ptr_ = __itr.base(); return *this; }
                
                row_iterator& operator ++() {++__ptr_; return *this;}
                row_iterator operator ++(int) {row_iterator temp(*this); ++__ptr_; return temp;}
                row_iterator& operator --() {--__ptr_; return *this;}
                row_iterator operator --(int) {row_iterator temp(*this); --__ptr_; return temp;}

                bool operator ==(const row_iterator<type_parameter>& __itr) const {return __ptr_ == __itr.base();}
                bool operator !=(const row_iterator<type_parameter>& __itr) const {return __ptr_ != __itr.base();}

                type_reference operator *() {return *__ptr_;}
                const_type_reference operator *() const {return *__ptr_;}
                type_pointer operator ->() {return __ptr_;}
                const_type_pointer operator ->() const {return __ptr_;}
                
                type_pointer base() {return __ptr_;}
                const_type_pointer base() const {return __ptr_;}
};

#endif // _LIB_MATRIX_R_ITERATOR