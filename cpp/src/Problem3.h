#ifndef _Problem3_
#define _Problem3_
#include <vector>
#include <string>

/**
@class Problem 
*/
class Problem3 {
public:

    /**
    Play a game of Tricky as described in the problem statement.
    
    @param player1  Vector of strings representing the moves of player 1
    @param player2  Vector of strings representing the moves of player 2
    
    @return the winner of the game, and "TIE" if there's no winner
    **/
    static std::string tricky(std::string& player1, std::string& player2);
};

#endif
