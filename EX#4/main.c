#include <stdio.h>

int main() {
    FILE *fp;

    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};

    int ra[3];
    char rb[4]; 
    float rc[3];

    fp = fopen("a.bin", "wb"); 
    if (fp == NULL) {
        printf("開啟檔案失敗！\n");
        return 1;
    }

    fwrite(a, sizeof(int), 3, fp);
    fwrite(b, sizeof(char), 3, fp);
    fwrite(c, sizeof(float), 3, fp);

    fclose(fp);
    fp = fopen("a.bin", "rb"); 
    if (fp == NULL) {
        printf("讀取檔案失敗！\n");
        return 1;
    }
    fread(ra, sizeof(int), 3, fp);
    fread(rb, sizeof(char), 3, fp);
    rb[3] = '\0';
    fread(rc, sizeof(float), 3, fp);
    fclose(fp);
    printf("int 陣列：");
    for (int i = 0; i < 3; i++)
        printf("%d ", ra[i]);
    printf("\n");

    printf("char 陣列：%s\n", rb);

    printf("float 陣列：");
    for (int i = 0; i < 3; i++)
        printf("%.6f ", rc[i]);
    printf("\n");

    return 0;
}
