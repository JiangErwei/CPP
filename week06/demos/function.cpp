#include <cfloat>
#include <iomanip>
#include <iostream>

using namespace std;

struct Matrix {
    int rows;
    int cols;
    float *pData;
};

// 创建矩阵并进行初始化，创建函数寻找矩阵中的最大值

float find_max_val(const Matrix &mat) {
    cout << "The argument address of matA is " << &mat << endl;
    float max_val = FLT_MIN;
    for (int i = 0; i < mat.rows; ++i)
        for (int j = 0; j < mat.rows; ++j) {
            float val = mat.pData[i * mat.rows + j];
            max_val = (max_val > val ? max_val : val);
        }
    return max_val;
}

int main() {
    Matrix matA{3, 4};
    matA.pData = new float[]{1.f, 2.f, 3.f};

    cout << "The origional address of matA is " << &matA << endl;
    cout << setprecision(5) << fixed << find_max_val(matA) << endl;
    delete []matA.pData;
    return 0;
}
