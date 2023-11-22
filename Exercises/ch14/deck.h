struct Deck {
    vector<Card> cards;

    Deck(int n);
};

Deck::Deck(int size)
{
    vector<Card> temp(size);
    cards = temp;
}

Deck::Deck()
{
    vector<Card> temp(52);
    cards = temp;
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
}

void Deck::print() const
{
    for (int i = 0; i < cards.size(); i++) {
        cout << cards[i].to_string() << endl;
    }
}

int Deck::find(Card card) const
{
    for (int i = 0; i < deck.cards.size(); i++) {
        if (deck.cards[i].equals(card)) return i;
    }
    return -1;
}