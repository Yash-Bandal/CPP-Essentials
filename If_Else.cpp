#include <iostream> //nested if
using namespace std;
int main()
{
    int score;
    cout << " Enter Marks Scored Between 1-100" << endl;
    cin >> score;

    char grade;
    if (score >= 1 && score <= 100)
    {
        if (score >= 90)
            grade = 'A';
       else if (score >= 80)
            grade = 'B';
        else if (score >= 70)
            grade = 'C';
        else if (score >= 50)
            grade = 'D';
        else if (score >= 30)
            grade = 'E';
        else
            grade = 'F';
        cout << "\n Your Score " << score << " is between 1-100";
        cout << "\nYou grade is " << grade;
        if (grade == 'F')
            cout << "\n You Failed..Damn it";
        else
            cout << "\nYou Passes,,COngo ";
    }

else
{
    cout << "Sorry ,Out of range";
}

return 0;
}
