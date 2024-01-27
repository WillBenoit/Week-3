#include<iostream>

// Put the enum and struct type defitions here


void PrintCard(CardType card) {
    std::cout << "This function is not done" << std::endl;
    // Implement the print routine here
}


int main() {

    CardType myCard1, myCard2, myCard3, myCard4;

    myCard1.rank = 2;
    myCard1.suit = HEARTS;
    PrintCard(myCard1);

    myCard2.rank = 11;
    myCard2.suit = CLUBS;
    PrintCard(myCard2);

    myCard3.rank = 1;
    myCard3.suit = DIAMONDS;
    PrintCard(myCard3);    

    myCard4.rank = 17;
    myCard4.suit = DIAMONDS;
    PrintCard(myCard4); 

    // Everything is okay
    return 0;
}
