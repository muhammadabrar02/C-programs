#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int len, i;

    // String input
    printf("Enter a string: ");
    scanf("%s", str1);

    // String length
    len = strlen(str1);
    printf("Length of the string: %d\n", len);

    // String copy
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // String concatenation
    printf("Enter another string to concatenate: ");
    scanf("%s", temp);
    strcat(str1, temp);
    printf("Concatenated string: %s\n", str1);

    // String comparison
    printf("Enter a string to compare: ");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // String reverse
    len = strlen(str1);
    for (i = 0; i < len / 2; i++) {
        temp[i] = str1[len - i - 1];
        temp[len - i - 1] = str1[i];
    }
    temp[len] = '\0';
    printf("Reversed string: %s\n", temp);

    return 0;
}
