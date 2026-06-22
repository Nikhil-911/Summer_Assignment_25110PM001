//C++ program to implement a simple quiz application
#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "===== QUIZ APPLICATION =====\n\n";

    
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> ans;

    if (ans == 2) {
        score++;
        cout << "Correct!\n\n";
    } else {
        cout << "Wrong! Correct answer is Delhi.\n\n";
    }
    
    cout << "2. Which language is used for Object-Oriented Programming?\n";
    cout << "1. C\n2. HTML\n3. C++\n4. SQL\n";
    cin >> ans;

    if (ans == 3) {
        score++;
        cout << "Correct!\n\n";
    } else {
        cout << "Wrong! Correct answer is C++.\n\n";
    }

    
    cout << "3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cin >> ans;

    if (ans == 3) {
        score++;
        cout << "Correct!\n\n";
    } else {
        cout << "Wrong! Correct answer is 7.\n\n";
    }

    
    cout << "===== RESULT =====\n";
    cout << "Your Score: " << score << " out of 3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}