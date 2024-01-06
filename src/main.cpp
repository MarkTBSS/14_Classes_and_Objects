#include <iostream>
using namespace std;

class Student {
    public:
    int scoresArray[5];
    int totalScores = 0;
    int calculateTotalScore() {
        for (int score : scoresArray) {
            totalScores += score;
        }
        return totalScores;
    }
};

int main() {
    Student kristenInstance;
    kristenInstance.scoresArray[0] = 30;
    kristenInstance.scoresArray[1] = 40;
    kristenInstance.scoresArray[2] = 45;
    kristenInstance.scoresArray[3] = 10;
    kristenInstance.scoresArray[4] = 10;
    cout << kristenInstance.calculateTotalScore() << endl;
    return 0;
}