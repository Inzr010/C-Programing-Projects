#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);

    for (int start = 0, end = length - 1; start < end; start++, end--) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
    } 
    

    return 1;//palindrome
}

int main() {

    char input[100];

    printf("Enter a Word or a Phrase: ");
    fgets(input, sizeof(input), stdin);

    int length = strlen(input);
    if(input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }
    if (isPalindrome(input)){
        printf("Yes it's a Palindrome");
    }else {
        printf("No it's not a Palindrome");
    }

    return 0;
}