#include <iostream>
#include "matrix.cpp"

using namespace std;


int main(){
    Matrix macierz1(4, 6);
    Matrix macierz2(4);

    macierz1.print();
    macierz2.print();

    macierz1.set(2, 2, 2);
    macierz1.set(3, 2, 6.1);

    macierz1.print();

    cout<<"Liczba wierszy i kolumn"<<endl;

    cout<<"Macierz 1"<<endl;
    int cols_1 = macierz1.cols();
    int rows_1 = macierz1.rows();
    cout<<"wiersze = "<<rows_1<<" kolumny = "<<cols_1<<endl;

    cout<<"Macierz 2"<<endl;
    int cols_2 = macierz2.cols();
    int rows_2 = macierz2.rows();
    cout<<"wiersze = "<<rows_2<<" kolumny = "<<cols_2<<endl;

    cout<<"Element o n = 3, m = 2 dla macierz1"<<endl;
    double elem = macierz1.get(3, 2);
    cout<<elem<<endl;

    Matrix m2_sum_sub(4, 6);
    m2_sum_sub.set(1, 1, 3.2);
    m2_sum_sub.set(3, 5, 2);
    m2_sum_sub.set(2, 2, 7);
    
    Matrix m_sum_wynik = macierz1.add(m2_sum_sub);
    m_sum_wynik.print();

    Matrix m_sub_wynik = macierz1.subtract(m2_sum_sub);
    m_sub_wynik.print();

    Matrix m1_mult(2, 2);
    m1_mult.set(0, 0, 2);
    m1_mult.set(0, 1, 1);
    m1_mult.set(1, 0, 3);
    m1_mult.set(1, 1, 4);

    Matrix m2_mult(2, 3);
    for(int i = 0; i < m2_mult.rows(); i++){
        for(int j = 0; j < m2_mult.cols(); j++){
            m2_mult.set(i, j, 1);
        }
    }

    Matrix m_mult_wynik(m1_mult.rows(), m2_mult.cols());
    m_mult_wynik = m1_mult.multiply(m2_mult);
    m_mult_wynik.print();

    

    return 0;
}
