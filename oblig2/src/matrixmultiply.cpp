#include "matrixmultiply.h"
#include "binaryformat.h"


void multiply(double** A, double** B, double** C, int m, int l, int n) {
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            for (size_t k = 0; k < l; k++) {
                C[i][j] = A[i][k]*B[k][j];
            }
        }
    }
}
