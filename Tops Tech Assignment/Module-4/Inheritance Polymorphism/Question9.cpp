// 9. Write a Program of Two 1D Matrix Addition using Operator Overloading


#include <iostream>
using namespace std;

class Matrix {
private:
    int* data;
    int size;

public:
    
    Matrix(int s) : size(s) {
        data = new int[size];
    }
    ~Matrix() {
        delete[] data; 
    }
    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }
    }

    
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            cout << "Matrix sizes do not match!" << endl;
            exit(1);
        }

        Matrix result(size); 
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i]; 
        }
        return result;
    }


    void display() const {
        cout << "[ ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    int size;

    cout << "Enter the size of the matrix : ";
    cin >> size;
    Matrix matrix_1(size);
    Matrix matrix_2(size);
    matrix_1.input();
    cout << "Matrix 2:" << endl;
    matrix_2.input();
    Matrix result = matrix_1 + matrix_2;
    cout << "Result of Matrix Addition: ";
    result.display();

    return 0;
}


