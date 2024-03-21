#pragma one
#include <iostream>
#include <string>

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    Matrix(int rows, int cols);
    Matrix(const Matrix& other);
    ~Matrix();

    
    int getRows() const;
    int getCols() const;
    int getElement(int row, int col) const;
    void setElement(int row, int col, int value);

    int norm() const;

    
    Matrix& operator=(const Matrix& other);

    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
    friend std::istream& operator>>(std::istream& is, Matrix& matrix);

    operator std::string() const;

    int* operator[](int index);
    const int* operator[](int index) const;

    // SCALIAR
    Matrix operator*(int scalar) const;

    bool operator==(const Matrix& other) const;
    bool operator!=(const Matrix& other) const;

    // ++ --
    Matrix& operator++();       
    Matrix& operator--();       
    Matrix operator++(int);     
    Matrix operator--(int);
};

