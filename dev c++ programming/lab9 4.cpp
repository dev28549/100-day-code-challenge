
#include <stdio.h>
int main() {
printf("Name - Aditya Bisht\nSAP ID - 590028757\nCourse - BCA\nBatch - B6\n");
printf("------------------------------------------------------\n");
int m, n, p, q;
int A[10][10], B[10][10], C[10][10];
int i, j, k;
printf("Enter rows and columns of Matrix A: ");
scanf("%d%d", &m, &n);
printf("Enter rows and columns of Matrix B: ");
scanf("%d%d", &p, &q);
if (n != p) {
printf("\nMatrix multiplication not possible!\n");
printf("Columns of A (%d) must be equal to Rows of B (%d).\n", n, p);
return 0;
}
printf("\nEnter elements of Matrix A (%dx%d):\n", m, n);
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
scanf("%d", &A[i][j]);
}
}
printf("\nEnter elements of Matrix B (%dx%d):\n", p, q);
for (i = 0; i < p; i++) {
for (j = 0; j < q; j++) {
scanf("%d", &B[i][j]);
}
}
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++) {
C[i][j] = 0;
for (k = 0; k < n; k++) {
C[i][j] += A[i][k] * B[k][j];
}
}
}
printf("\nMatrix A:\n");
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
printf("%4d", A[i][j]);
}
printf("\n");
}
printf("\nMatrix B:\n");
for (i = 0; i < p; i++) {
for (j = 0; j < q; j++) {
printf("%4d", B[i][j]);
}
printf("\n");
}
printf("\nResultant Matrix (A × B):\n");
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++) {
printf("%4d", C[i][j]);
}
printf("\n");
}
return 0;
}