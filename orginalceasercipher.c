#include <stdio.h>

// Function to perform Caesar Cipher encryption
void encrypt(char message[], int key) {
    for (int i = 0; message[i] != '\0'; ++i) {
        char ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            message[i] = (ch + key - 'a') % 26 + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            message[i] = (ch + key - 'A') % 26 + 'A';
        }
    }
}

int main() {
    char message[100];
    int key;

    // Input the message
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Input the key
    printf("Enter the key (integer): ");
    scanf("%d", &key);

    // Encrypt the message
    encrypt(message, key);

    // Display the encrypted message
    printf("Encrypted message: %s\n", message);

    return 0;
}
