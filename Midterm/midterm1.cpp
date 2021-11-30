#include <iostream>
#include <queue>
using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_SCORES = 3;
class Student
{
private:
	int sid;
	string SName;
	vector<double> score;

public:
	Student() : sid(0), SName() {}
	Student(int id, string name, double s0, double s1, double s2)
	{
		sid = id;
		SName = name;
		score.push_back(s0);
		score.push_back(s1);
		score.push_back(s2);
	}
    int getSid() const { return sid; }
	string getSname() const { return SName; }
	vector<double> const &getScore() const { return score; }
	void setSid(int id) { sid = id; }
	void setSname(string name) { SName = name; }
	void setScore(double s0, double s1, double s2)
    {
		score.clear();
		score.push_back(s0);
		score.push_back(s1);
		score.push_back(s2);
	}
    void printStudent() const
    {
		cout << "Student ID: " << sid << "\t";
		cout << "Name: " << SName << "\t";
		for (int i = 0; i < NUM_SCORES; i++)
			cout << score[i] << "\t";
		cout << endl;
	}
};

bool operator<(const Student &lhs, const Student &rhs)
{
	double lhssum = 0.0, rhssum = 0.0;
	vector<double> score;
	score = lhs.getScore();
	for (int i = 0; i < score.size(); i++)
		lhssum += score[i];
	score = rhs.getScore();
	for (int i = 0; i < score.size(); i++)
		rhssum += score[i];

	return lhssum < rhssum; 
}
//template <class T>   
//class Stack 
//{
//    pool: vector<T> ;
//    Stack();
//    push(el; const T &): void
//    pop(): T
//    topEl( ) : T & // get 1st element
//    isEmpty( ): bool
//    size() : int // get the number of elms
//}

int main()
{
    cout << "TEST" << endl;
}