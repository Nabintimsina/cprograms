#include<stdio.h>
#include<string.h>

// Function to check if the string is a palindrome
int isPalindrome(char txt1[]) {
    int i, len;
    
    // Calculate the length of the string
    for(len = 0; txt1[len] != '\0'; len++);
    
    // Check for palindrome by comparing characters from both ends
    for(i = 0; i < len / 2; i++) {
        if(txt1[i] != txt1[len - 1 - i]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Palindrome
}

// Function to reverse the string
void reverseString(char txt1[]) {
    int i, len;
    char temp;
    
    // Calculate the length of the string
    for(len = 0; txt1[len] != '\0'; len++);
    
    // Reverse the string by swapping characters
    for(i = 0; i < len / 2; i++) {
        temp = txt1[i];
        txt1[i] = txt1[len - 1 - i];
        txt1[len - 1 - i] = temp;
    }
}

void main() {
    char txt1[100];
    
    // Input string safely using fgets instead of gets
    printf("Enter the string to check: ");
    fgets(txt1, sizeof(txt1), stdin);
    
    // Remove the newline character if it's added by fgets
    if(txt1[strlen(txt1) - 1] == '\n') {
        txt1[strlen(txt1) - 1] = '\0';
    }
    
    // Check if the string is a palindrome
    if(isPalindrome(txt1)) {
        printf("Palindrome.\n");
    } else {
        printf("Not palindrome.\n");
    }
    
    // Reverse the string and print it
    reverseString(txt1);
    printf("Reversed string is: %s\n", txt1);
}
