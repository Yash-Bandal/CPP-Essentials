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
