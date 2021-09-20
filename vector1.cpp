#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> );

int main()
{

    vector<int>::iterator it;
    vector<int> numbers = { 10, 13, 5, 7, 25};
    int     new_number;


    printVector(numbers);
    sort(numbers.begin(), numbers.end());
    printVector(numbers);
    // 5 7 10 13 25

    // Add one value to number with keeping sorted order
    // 15
    // 5 7 10 13 15 25

    // member functions
    //insert() 
    cout <<"enter your number to insert : ";
    cin >> new_number;

    for(it=numbers.begin(); it<numbers.end(); it++)
    {
        if (*it > new_number)
            break;
    }

    numbers.insert(it, new_number);
    printVector(numbers);

}

void printVector(vector<int> vec)
{
    vector<int>::iterator it;
    for(it=vec.begin(); it<vec.end(); it++)
        cout << *it << "\t";
    cout << endl;
}