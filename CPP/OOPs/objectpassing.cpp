#include<iostream>
#include<string>
using namespace std;

class player {
private:
    int health;
    int score;
    string name;

public:
    void setter(int health, string name, int score) {
        this->health = health;
        this->name = name;
        this->score = score;
    }

    void getter() const {
        cout << "health is " << health << endl;
        cout << "name is " << name << endl;
        cout << "score is " << score << endl;
    }

    // Function to get the score of the player
    int getScore() const {
        return score;
    }
};

// Function that takes two player objects as parameters and adds their scores
int addScores(const player& p1, const player& p2) {
    return p1.getScore() + p2.getScore();
}

int main() {
  
    player player1, player2;

    
    player1.setter(100, "John", 500);
    player2.setter(90, "Alice", 600);

    cout << "Player 1 Information:" << endl;
    player1.getter();
    cout << endl;
    cout << "Player 2 Information:" << endl;
    player2.getter();
    cout << endl;

    int totalScore = addScores(player1, player2);
    cout << "Total Score: " << totalScore << endl;

    return 0;
}
