#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillupArray(int *);
void printArray(int *);

int main()
{
    int *Array;
    Array = new int[10];

    fillupArray(Array);
    printArray(Array);


}


void fillupArray(int *Array)
{
    srand(time(0));
    for(int i=0; i<10;i++)
    {
    *(Array+i) = rand() % 100;
    }
}


void printArray(int *Array)
{
    for(int i=0; i<10;i++)
        cout << *(Array+i) << "\t";
}
