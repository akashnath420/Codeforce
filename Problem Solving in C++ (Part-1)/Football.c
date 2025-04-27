#include<stdio.h>
int main() {
    char s[100];
    gets(s);
    int ans = 0;

    for(int i = 0; i < strlen(s); i++) {
            int count = 0;

        if(s[i] == '0') {
            while(s[i] == '0' && i < strlen(s)) {
                count++;
                i++;
            }
        }
        else if(s[i] = '1') {
            while(s[i] == '0' && i < strlen(s)) {
                count++;
                i++;
            }
        }

        if(count >= 7) {
            ans = 1;
            i--;
        }
    }

    if(ans == 1) {
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
