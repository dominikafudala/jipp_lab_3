#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>

using namespace std;


class Matrix{
    public:
        Matrix(int n, int m); // konstruktor dla macierzy niekwadratowej
        Matrix(int n); // kostruktor dla macierzy kwadratowej
        void print(); // metoda do wyśweitlania macierzy
        double get(int n, int m); // metoda pobierająca element (n, m)
        void set(int n, int m, double val); // metoda do ustawiania wart. elementu (n, m) na val
        int cols(); // metoda zwracająca liczbę kolumn
        int rows(); // metoda zwracająca liczbę wierszy
        Matrix add(Matrix m2); // metoda dodająca dwie macierze do siebie
        Matrix subtract(Matrix m2); // odejmowanie dwóch macierzy
        Matrix multiply(Matrix m2); // mnożenie dwóch macierzy

    private:
        double **matrix;
        int row; // liczba wierszy
        int columns; // liczba kolumn
};

#endif