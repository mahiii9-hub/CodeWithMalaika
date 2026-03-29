#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

// Function prototypes
void mixCards(int deck[][13]); 
void displayDeck(const int deck[][13], const char *faces[], const char *suits[]);

int main() {
    // Card faces aur suits ki initialization
    const char *suitNames[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *faceNames[13] = {
        "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", 
        "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };

    int cardTable[4][13] = {0}; // 4 rows (suits) aur 13 columns (faces)

    srand(time(0)); // Random number generator ko seed dena

    mixCards(cardTable); // Cards shuffle karna
    displayDeck(cardTable, faceNames, suitNames); // Cards print karna

    return 0;
}

// Cards ko random position pe set karne ka function
void mixCards(int deck[][13]) {
    int r, c;

    for (int currentCard = 1; currentCard <= 52; currentCard++) {
        do {
            r = rand() % 4;  // Random row select karna
            c = rand() % 13; // Random column select karna
        } while (deck[r][c] != 0); // Agar slot khali nahi hai to dubara try karein

        deck[r][c] = currentCard; // Card number assign karna
    }
}

// Shuffled cards ko display karne ka function
void displayDeck(const int deck[][13], const char *faces[], const char *suits[]) {
    for (int k = 1; k <= 52; k++) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 13; j++) {
                // Agar current card number mil jaye to usay print karein
                if (deck[i][j] == k) {
                    cout << k << ": " << faces[j] << " of " << suits[i] << endl;
                }
            }
        }
    }
}
