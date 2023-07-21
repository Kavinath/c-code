#include <stdio.h>
#include<stdlib.h>

void reverseString(char str[], int t, int end) {
    if (t >= end) {
        return;
    }
    char temp = str[t];
    str[t] = str[end];
    str[end] = temp;
    reverseString(str, t + 1, end - 1);
}

int main() {
    char str[10];
    scanf("%s", str);
    reverseString(str, 0, strlen(str) - 1);
    printf("%s", str);
    return 0;
}
