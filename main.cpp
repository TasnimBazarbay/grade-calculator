// Grade Calculator
// Reads 5 scores for each student, prints the average and the grade,
// and at the end prints the number of students and the class average.
// Author: Tasnim Bazarbay, SP-1/25

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

const int SCORE_COUNT = 5;
const int MIN_SCORE = 0;
const int MAX_SCORE = 100;

// Returns the letter grade for an average score.
string getGrade(double average)
{
    if (average >= 90.0)
    {
        return "A";
    }
    else if (average >= 75.0)
    {
        return "B";
    }
    else if (average >= 60.0)
    {
        return "C";
    }
    else
    {
        return "F";
    }
}

// Reads one score and asks again until it is a whole number from 0 to 100.
int readScore(int scoreNumber)
{
    int score = 0;
    while (true)
    {
        cout << "Score " << scoreNumber << ": ";
        cin >> score;

        // Skip spaces and tabs after the number, so "95 " is accepted.
        while (cin.peek() == ' ' || cin.peek() == '\t')
        {
            cin.get();
        }

        // Letters, or extra text after the number (for example 95.5 or 9a).
        bool isBadInput = cin.fail() || (cin.peek() != '\n' && cin.peek() != EOF);

        if (isBadInput)
        {
            // Clear the error and skip the rest of the wrong line.
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid score. Enter a value from 0 to 100." << endl;
        }
        else if (score < MIN_SCORE || score > MAX_SCORE)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid score. Enter a value from 0 to 100." << endl;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return score;
        }
    }
}

// Reads students until the teacher types "end", then prints the class summary.
int main()
{
    int studentCount = 0;
    double sumOfAverages = 0.0;
    string studentName;

    cout << fixed << setprecision(1);

    while (true)
    {
        cout << "Student name (or end to finish): ";
        if (!getline(cin, studentName))
        {
            break;
        }

        if (studentName == "end")
        {
            break;
        }

        if (studentName.empty())
        {
            cout << "Name cannot be empty." << endl;
            continue;
        }

        int scoreSum = 0;
        for (int i = 1; i <= SCORE_COUNT; i++)
        {
            scoreSum += readScore(i);
        }

        double average = (double)scoreSum / SCORE_COUNT;
        cout << studentName << ": average " << average
             << ", grade " << getGrade(average) << endl;

        studentCount++;
        sumOfAverages += average;
    }

    if (studentCount == 0)
    {
        cout << "No students entered" << endl;
    }
    else
    {
        double classAverage = sumOfAverages / studentCount;
        cout << "Students entered: " << studentCount << endl;
        cout << "Class average: " << classAverage << endl;
    }

    return 0;
}
