#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

class ScoreManager {
public:
    ScoreManager();            // Constructor
    void addScore(int points); // Method to add points to the score
    void resetScore();         // Method to reset the score to zero
    int getScore() const;      // Getter for the current score
    void displayScore() const; // Method to display the score

private:
    int score; // Private variable to hold the current score
};

#endif // SCOREMANAGER_H
