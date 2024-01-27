#include <iostream>
#include <string>
//card function
class Card {
public:
//function for rank and suits of cards
    Card(char r, char s) : rank(r), suit(s) {}
    //print card info
    void print() const {
        if (isValidRank()) {
            std::cout << rank << suit << std::endl;
        } else {
            std::cout << "[Illegal Rank]" << suit << std::endl;
        }
    }
private:
    char rank; // '2'-'9', 'T', 'J', 'Q', 'K', 'A'
    char suit; // 'H', 'D', 'C', 'S'
    //check if rank is illegale
    bool isValidRank() const {
        return rank == 'T' || rank == 'J' || rank == 'Q' || rank == 'K' || rank == 'A' || (rank >= '2' && rank <= '9');
    }
};
//rank update 
int main() {
    Card cards[] = {Card('2', 'H'), Card('J', 'C'), Card('A', 'D'), Card('?', 'D')};
    for (const auto& card : cards) {
        card.print();
    }
    return 0;
}
