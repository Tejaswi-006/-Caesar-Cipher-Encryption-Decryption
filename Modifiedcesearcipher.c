#include <stdio.h>

// Function to perform the Caesar Cipher encryption
void encryptCaesarCipher(char message[], int key) {
    for (int i = 0; message[i] != '\0'; ++i) {
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            // Encrypt uppercase letters
            message[i] = (char)(((ch - 'A' + key) % 26) + 'A');
        } else if (ch >= 'a' && ch <= 'z') {
            // Encrypt lowercase letters
            message[i] = (char)(((ch - 'a' + key) % 26) + 'a');
        }
    }
}

int main() {
    char message[100];
    int key;

    // Input message from the user
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Input the key for encryption
    printf("Enter the key (an integer): ");
    scanf("%d", &key);

    // Call the encryption function
    encryptCaesarCipher(message, key);

    // Display the encrypted message
    printf("Encrypted message: %s\n", message);

    return 0;
}

