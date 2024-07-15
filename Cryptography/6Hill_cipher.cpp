#include <stdio.h>
#include <string.h>

#define MAX 3 // Size of the matrix for 3x3 Hill cipher

// Function to encrypt the plaintext
void encrypt(char *plaintext, int key[MAX][MAX], char *ciphertext) {
    int len = strlen(plaintext);
    
    for (int i = 0; i < len; i += MAX) {
        int vector[MAX] = {0};
        for (int j = 0; j < MAX; j++) {
            vector[j] = plaintext[i + j] - 'A';
        }
        
        for (int j = 0; j < MAX; j++) {
            ciphertext[i + j] = 'A' + (key[j][0] * vector[0] + key[j][1] * vector[1] + key[j][2] * vector[2]) % 26;
        }
    }
    ciphertext[len] = '\0';
}

int main() {
    int key[MAX][MAX] = {
        {6, 24, 1},
        {13, 16, 10},
        {20, 17, 15}
    };

    char plaintext[100];
    char ciphertext[100];

    printf("Enter plaintext (uppercase letters only, max 99 chars): ");
    scanf("%s", plaintext);

    // Ensure plaintext length is a multiple of 3
    int len = strlen(plaintext);
    if (len % MAX != 0) {
        int padding = MAX - (len % MAX);
        for (int i = 0; i < padding; i++) {
            plaintext[len + i] = 'X'; // Padding with 'X'
        }
        plaintext[len + padding] = '\0';
        len += padding;
    }

    // Encrypt the plaintext
    encrypt(plaintext, key, ciphertext);
    
    printf("Ciphertext: %s\n", ciphertext);

    return 0;
}
