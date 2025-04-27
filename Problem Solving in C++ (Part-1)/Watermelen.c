#include<stdio.h>
int main() {

    int w;
    scanf("%d", &w);

    if(w % 2 == 0) {
        if(w == 2) {
            printf("No");
        }
        else {
            printf("Yes");
        }
    }
    else {
        printf("N0");
    }


    return 0;
}
