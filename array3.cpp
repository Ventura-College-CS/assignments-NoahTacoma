#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// string mainstr="chocolate";
    // string substr="col";

    char mainstr[10]="chocolate";
    char substr[10]="col";
    int pos;

    // pos = mainstr.find(substr) ;
    cout << sizeof(mainstr) <<endl;
    cout << sizeof(substr) << endl;


    cout << strlen(substr) << endl;
    cout << strlen(mainstr) << endl;

    //cout << " found at position " << pos << endl;

}