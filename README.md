# Grade Calculator

Grade Calculator is a small console program in C++ for teachers. The teacher types a student's name and 5 scores, and the program shows the student's average and grade. Several students can be entered in one run; at the end the program shows how many students were entered and the class average.

## Requirements
- The program shall ask for a student's name and stop asking when the teacher types `end` instead of a name.
- The program shall read exactly 5 scores for each student; each score is a whole number from 0 to 100.
- The program shall reject any score outside 0–100 (or text that is not a number), show `Invalid score. Enter a value from 0 to 100.` and ask for the same score again.
- The program shall calculate each student's average as a decimal number and print it with 1 decimal place together with the grade.
- The program shall print the number of students entered and the class average (the average of all students' averages) at the end, or `No students entered` if there were none.

## Grading scale
| Grade | Average |
|-------|---------|
| A | 90 - 100 |
| B | 75 - 89.99 |
| C | 60 - 74.99 |
| F | below 60 |

## How to run
1. Open https://www.onlinegdb.com and choose C++.
2. Paste the code from main.cpp and click Run.

## Author
Tasnim Bazarbay, group SP-1/25
