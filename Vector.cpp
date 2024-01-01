#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // array method
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
  vector<int> test_scores{100, 80, 99};
  cout << "First vowel :" << vowels[0];

  // vector method
  cout << "\nLast Element :" << vowels.at(4);

  cout << "\nThere are " << vowels.size() << " Total Vowels Listed\n";

  // update
  cout << "Change First Score\n";
  cin >> test_scores.at(0);
  cout << "Updated Vector" << endl; // use loop or cout single element
  for (int i = 0; i < test_scores.size(); i++)
  {
    cout << test_scores[i] << endl;
  }

  int score;
  cout << "Enter Score to Add" << endl;
  cin >> score;
  test_scores.push_back(score);
  cout << "Updated Vector" << endl;
  for (int i = 0; i < test_scores.size(); i++)
  {
    cout << test_scores[i] << endl;
  }
  cout << "\nThere are " << test_scores.size() << " Total scores Listed\n";

  // adding required no of elements like array
  int ele;
  int num;
  cout << "Enter Number of elements you want to enter\n";
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    cout << "Enter ELement" << i + 1 << endl;
    cin >> ele;
    test_scores.push_back(ele);
  }

  cout << "Updated Vector" << endl;
  for (int i = 0; i < test_scores.size(); i++)
  {
    cout << test_scores[i] << endl;
  }
  cout << "\nThere are " << test_scores.size() << " Total scores Listed\n";

  // 2D vectors
  cout << "@d Vector\n";
  vector<vector<int>> Rating{
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {10, 11, 12, 13}};

  for (int i = 0; i < Rating.size(); i++)
  {
    for (int j = 0; j < Rating.size(); j++)
    {
      cout << Rating[i][j] << "\t";
    }
    cout << "\n";
  }

  // using a range-for
  vector<vector<int>> vec2d = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8}};

  for (auto i : vec2d)
  {
    for (auto j : i)
    {
      cout << j << "\t";
    }
    cout << endl;
  }
  return 0;
}
