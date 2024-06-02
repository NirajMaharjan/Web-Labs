#include <iostream>
#include <string>
using namespace std;

string vigenereEncrypt(string plaintext, string key) {
    string ciphertext = "";
    int keyIndex = 0;
    for (char &c : plaintext) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            int shift = key[keyIndex] - 'A';
            c = ((c - base + shift) % 26) + base;
            keyIndex = (keyIndex + 1) % key.length();
        }
        ciphertext += c;
    }
    return ciphertext;
}

string vigenereDecrypt(string ciphertext, string key) {
    string plaintext = "";
    int keyIndex = 0;
    for (char &c : ciphertext) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            int shift = key[keyIndex] - 'A';
            c = (((c - base - shift) + 26) % 26) + base;
            keyIndex = (keyIndex + 1) % key.length();
        }
        plaintext += c;
    }
    return plaintext;
}

int main() {
    string plaintext = "kathmandu";
    string key = "Nepal";
    
    cout << "Original message: " << plaintext << endl;

    string encrypted = vigenereEncrypt(plaintext, key);
    cout << "Encrypted message: " << encrypted << endl;

    string decrypted = vigenereDecrypt(encrypted, key);
    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}