#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // using range for syntax..sumavg/size automatic set to 0 at first
    int sum = 0, avg, size = 0;
    for (auto temp : {1, 2, 3, 4, 5})
    {
        sum = sum + temp;
        size++;
    }

    if (size != 0)
    {
        avg = sum / size; // or use size=vectorname.size()
    }
    cout << "sum : " << sum << endl;
    cout << "size : " << size << endl;
    cout << "Avg : " << avg << endl;

    // iterate through string
    for (auto c : "YASH")
    {
        cout << c << endl;
    }

    // iterate through vector or array
    vector<int> var = {10, 11, 12, 13, 14};
    for (auto i : var)
    {
        cout << i << endl;
    }

    // using normal method
    vector<int> var1 = {100, 110, 120, 130, 140};
    for (int i = 0; i < var1.size(); i++)
    {
        cout << var1[i] << endl;
    }

    // removing spacec from a sentence
    for (auto c : "This is a test")
    {
        if (c != ' ')
        {
            cout << c;
        }
    }

    return 0;
}
