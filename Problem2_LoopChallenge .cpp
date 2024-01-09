/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!
*/
#include <iostream> //mistake you do..forget using break; and for choice yes of no..use confirm like variable
/*Can use if nested to solve this
note..generally use range-for for vector and traditional-for for array*/

#include <vector>
using namespace std;
int main()
{
    int i;
    char sel;
    int n;
    vector<int> vec;
    // cout << "Enter size";
    // cin >> n;
    // for ( i = 0; i < n; i++)
    // {
    //     int ele;
    //     cout << "ENter element " << i << endl;
    //     cin >> ele;
    //     vec.push_back(ele);
    // }
    char ch;
    do
    {
        cout << "Menu\n 1.Display List\n 2.Add into list\n 3.Print mean\n 4.Display SMallest \n 5.Display Largest\n "
             << endl;
        cout << "Enter The choice You want" << endl;
        cin >> ch;

        switch (ch)
        {
        case '1': // display list
        {
            if (vec.size() != 0)
            {
                cout << "[";
                for (auto i : vec)
                {

                    cout << i << " ";
                }
                cout << "]";
            }

            else
            {
                cout << "[]-List is empty" << endl;
            }
        }
        break;

        case '2':
        {
            // add element
            cout << "You selected 2\n";
            // int size_to_add
            // cin>>size_to_add;
            //  for (int i = 0; i < size_to_add; i++)  //enter number of elements to add
            //  {

            int data;
            cout << "Enter element to add";
            cin >> data;
            vec.push_back(data);
            cout << data << " added\n";

            // }
        }
        break;

            //         case 1:   traditional for
            // {
            //     cout << "Displaying List: ";
            //     for (int i = 0; i < vec.size(); ++i)
            //     {
            //         cout << vec[i] << " ";
            //     }
            //     cout << endl;
            // }
            // break;

        case '3':
        {
            int sum = 0, avg;
            cout << "Mean\n";
            if (vec.size() != 0)
            {
                for (auto i : vec)
                {
                    sum = sum + i;
                }
                cout << "avg is :" << static_cast<double>(sum) / vec.size() << endl;
            }
            else
            {
                cout << "\nList empthy..so no mean";
            }
        }
        break;

        case '4': // for this..remember DSA sort algo..consider 1st element as smallest..compare it with other and display
        {
            // cout << "First is: " << endl;
            // cout << vec[0];

            int small_no = vec[0];
            for (auto i : vec)
            {
                if (i < small_no)
                    small_no = i;
            }

            cout << "Smallest is: " << small_no << endl;
        }

        break;

        case '5':
        {
            // cout << "Last number  is: " << endl;
            // cout << vec[vec.size() - 1];
            int big_no = vec[0];
            for (auto i : vec)
            {
                if (i > big_no)
                    big_no = i;
            }

            cout << "Largest is: " << big_no << endl;
        }
        break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
        cout << "\nDo you want to continue(Y/N)\n";
        cin >> sel;
    }

    while (sel == 'y' || sel == 'Y'); // when e entered...false..thus stop  when while false..stop loop

    return 0;
}
