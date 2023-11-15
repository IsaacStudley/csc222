#include <iostream>
#include "playing_card.h"
using namespace std;

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}

bool equals(Card one, Card two)
{
    return (one.rank == two.rank && one.suit == two.suit);
}
void build_deck(){
vector<Card> deck(52); // I would like to follow up about this
    int i = 0;
for (int suit = 0; suit <= 3; suit++) {
    for (int rank = 1; rank <= 13; rank++) {
        deck[i].suit = suit;
        deck[i].rank = rank;
        i++;
    }
}
}