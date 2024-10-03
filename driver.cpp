#include <iostream>
#include "matrix.h"

template <class _Tp, std::size_t _Row, std::size_t _Col>
void cout_matrix(matrix<_Tp, _Row, _Col>& mtr)
{       for(std::size_t _i = 0; _i < _Row; ++_i)
        {       for(std::size_t _j = 0; _j < _Col; ++_j)
                {       std::cout << mtr._elements.at(_i).at(_j) << " ";
                }
                std::cout << std::endl;         
        }
        return;
}

int main(int argc, char* argv[])
{       matrix<int, 2, 3> mtr;
        cout_matrix(mtr);
        return 0;        
}