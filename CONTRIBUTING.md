# Coding rules for Grade Calculator (C++)

Every change to this repository must follow these five rules.

## Rule 1. Names: camelCase for variables and functions, UPPER_CASE for constants
```cpp
int studentCount = 0;          // good
int student_count = 0;         // bad
const int MAX_SCORE = 100;     // constant
```

## Rule 2. Indentation: 4 spaces, braces on their own line
```cpp
if (score > MAX_SCORE)
{
    cout << "Invalid score" << endl;
}
```

## Rule 3. Meaningful names (one letter only for loop counters)
```cpp
double classAverage = sumOfAverages / studentCount;   // good
double x = s / c;                                     // bad
for (int i = 1; i <= SCORE_COUNT; i++)                // ok: loop counter
```

## Rule 4. Comments: one line above every function and above code that is not obvious
```cpp
// Returns the letter grade for an average score.
string getGrade(double average)
```

## Rule 5. One statement per line, lines not longer than 100 characters
```cpp
studentCount++;
sumOfAverages += average;      // good: two lines

studentCount++; sumOfAverages += average;   // bad: two statements on one line
```
