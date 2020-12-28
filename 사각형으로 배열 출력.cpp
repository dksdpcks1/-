#include <stdio.h>
int main() {
int row, col, i, j, k = 0;
int arr1[5][5] = { 0 };
//사각형 도형 채우기
printf("-----------------------\n");
for (row = 0; row < 5; row++) {
for (col = 0; col < 5; col++) {
k = k + 1;
arr1[row][col] = k;
}
}
for (i = 0; i < 5; i++) {
for (j = 0; j < 5; j++) {
printf("%3d", arr1[i][j]);
}
printf("\n");
}
printf("-----------------------\n");
return 0;
}
