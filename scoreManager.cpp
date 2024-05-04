#include "scoreManager.h"
#include <iostream>
#include <GL/glut.h>

ScoreManager::ScoreManager() : score(0) {}

void ScoreManager::addScore(int points) {
    score += points;
}

void ScoreManager::resetScore() {
    score = 0;
}

int ScoreManager::getScore() const {
    return score;
}

void ScoreManager::displayScore() const {
    char buffer[50];
    snprintf(buffer, sizeof(buffer), "Score: %d", score); // Replace sprintf with snprintf
    glColor3f(1.0f, 1.0f, 1.0f); // Set the font color to white
    GLfloat position[] = { 50.0f, 50.0f }; // Position where the score will be displayed
    glRasterPos2fv(position);
    for (const char* c = buffer; *c != '\0'; c++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }
}
