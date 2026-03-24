#include<iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "----- Quiz Game -----\n";

    // Question 1
    cout << "\n1. What is 2 + 2?\n";
    cout << "1. 3\n2. 4\n3. 5\n4. 6\n";
    cin >> answer;
    if(answer == 2) {
        score++;
    }

    // Question 2
    cout << "\n2. Capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Pune\n4. Jaipur\n";
    cin >> answer;
    if(answer == 2) {
        score++;
    }

    // Question 3
    cout << "\n3. Which is a programming language?\n";
    cout << "1. Apple\n2. Mango\n3. C++\n4. Banana\n";
    cin >> answer;
    if(answer == 3) {
        score++;
    }

    cout << "\nYour Score = " << score << "/3\n";

    return 0;
}