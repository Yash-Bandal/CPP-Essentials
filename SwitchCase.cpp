#include <iostream> //mistake you do..forget using break; and for choice yes of no..use confirm like variable
using namespace std;
int main()
{
    char ch;
       do
    {
    cout << "Menu\n A\n B\n C\n D\n F\n exit(E)\n"
         << endl;
    cout << "Enter The grade You Expect" << endl;
    cin >> ch;

 
        switch (ch)
        {
        case 'a':
        case 'A':
            cout << "Need 90 above" << endl;
            break;

        case 'b':
        case 'B':
            cout << "Need 70 above" << endl;
            break;

        case 'c':
        case 'C':
            cout << "Need 50 above" << endl;
            break;

        case 'd':
        case 'D':
            cout << "Need 35 above" << endl;
            break;

        case 'f':
        case 'F':
        {
            char confirm;
            cout << "Are You Sure You Want F" << endl;
            cout << "Enter Y/N" << endl;
            cin >> confirm;
            if (confirm == 'Y' || confirm == 'y')
            {
                cout << "\n Oh..Abhyas kr gap";
            }
            else if (confirm == 'N' || confirm == 'n')
            {
                cout << "\nGood..Kasht kar";
            }
        }
        break;

       case 'e':
       case 'E':
       {
        cout<<"Exiting....";
       }
       break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (ch != 'e' && ch != 'E');

    // // using enum
    // enum choice
    // {
    //     A,
    //     a,
    //     b,
    //     B,
    //     C,
    //     c,
    //     D,
    //     d,
    //     F,
    //     f
    // };
    // choice ch = A;

    // switch (ch)
    // {
    // case a:
    // case A:
    //     cout << "Need 90 above" << endl;
    //     break;

    // case b:
    // case B:
    //     cout << "Need 70 above" << endl;
    //     break;

    // case c:
    // case C:
    //     cout << "Need 50 above" << endl;
    //     break;

    // case d:
    // case D:
    //     cout << "Need 35 above" << endl;
    //     break;

    // case f:
    // case F:
    // {
    //     char confirm;
    //     cout << "Are You Sure You Want F" << endl;
    //     cout << "Enter Y/N" << endl;
    //     cin >> confirm;
    //     if (confirm == 'Y' || confirm == 'y')
    //     {
    //         cout << "\n Oh..Abhyas kr gap";
    //     }
    //     else if (confirm == 'N' || confirm == 'n')
    //     {
    //         cout << "\nGood..Kasht kar";
    //     }
    // }
    // break;

    // default:
    //     cout << "Invalid choice" << endl;
    //     break;
    // }

    return 0;
}
