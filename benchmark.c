#include <stdio.h>
#include <time.h>

int main(void) {
  int mat1[4][4] = {
                      {1, 1, 1, 1},
                      {2, 2, 2, 2},
                      {3, 3, 3, 3},
                      {4, 4, 4, 4}
                    };

  int mat2[4][4] = {
                  {1, 1, 1, 1},
                  {2, 2, 2, 2},
                  {3, 3, 3, 3},
                  {4, 4, 4, 4}
                };

  int res[4][4];

  printf("Hello world! ");
  int cnt, i, j, k;
  for (cnt = 0; cnt < 1000; cnt++) {
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        res[i][j] = 0;
        for (k = 0; k < 4; k++) {
          res[i][j] += mat1[i][k]*mat2[k][j];
        }
      }
    }
  }

  printf("The resulting matrix is: \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d", res[i][j]);
    }
    printf("\n");
  }
  return 0;
}
