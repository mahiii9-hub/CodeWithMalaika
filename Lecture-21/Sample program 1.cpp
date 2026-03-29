#include <iostream>
#include <string.h> // for using string length
using namespace std;
int main() // Corrected main function signature
{
    char password[10];
    char *passptr; // Declare a pointer, but need to assign it memory
    char encrypted_password[10]; // for better structure, optional
    
    cout << "------------------------------------------" << endl;
    cout << "   Password Encryption/Decryption Program " << endl;
    cout << "------------------------------------------" << endl;
    
    cout << "Please enter a password (less than 10 characters): ";
    cin >> password;

    // --- ENCRYPTION PROCESS ---
    // Point passptr to the beginning of the password array
    passptr = password;

    cout << "\n> Encrypting the password using XOR with 3..." << endl;
    // Loop through each character until null terminator is reached
    while (*passptr != '\0')
    {
        // Encrypt character by XORing with 3
        *passptr = (*passptr ^ 3);
        passptr++; // Move pointer to next character
    }
    cout << "The encrypted password is: " << password << endl;


    // --- DECRYPTION PROCESS ---
    // Repoint passptr to the beginning to decrypt
    passptr = password;

    cout << "\n> Decrypting the password using XOR with 3..." << endl;
    // Loop through each character again
    while (*passptr != '\0')
    {
        // Decrypt character by XORing with 3 (XOR is reversible)
        *passptr = (*passptr ^ 3);
        passptr++; // Move pointer to next character
    }
    cout << "The decrypted password is: " << password << endl;
    
    cout << "------------------------------------------" << endl;

    return 0; // Return success code
}
