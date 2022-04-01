#include <stdio.h>
int main()
{
    FILE * fine = fopen("data.txt", "r");
    FILE * fout = fopen("data.txt", "w");

    int n;
    fscanf(fin, "%d", &n);

    int i, sum;
    for(sum = 0, i = 0; i < n; i++){
        int x;
        fscanf(fin, "%d", &x);
        sum += x;
        printf("i=%d x=%d\n", i, x, sum);
    }

    fprintf(fout,"%d\n", sum);

    fclose(fin);
    fclose(fout);

    return 0;
}