#include <iostream>
#include <queue>
using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_SCORES = 3;
class Student
{
private:
	int SID;
	string SName;
	vector<double> score;

public:

	Student() : SID(0), SName() {}
	Student(int i, string name, double *sc[3])
	{
		SID = i;
		SName = name;
		score.push_back(*sc[0]);
		score.push_back(*sc[1]);
		score.push_back(*sc[2]);
	}
	void getID(int i) {SID = i;} //This must be an error in your provided data and functions as you list ID as a string here but used int for it as i.
	void getname(string name) {SName = name;}
	vector<double> const &getScore() const { return score; }
	void getScores(double s1,double s2,double s3)
	{
		score.clear();
		score.push_back(s1);
		score.push_back(s2);
		score.push_back(s3);
	}
	
    void printStudent() const
    {
		cout << "Student ID: " << SID << "\t";
		cout << "Name: " << SName << "\t";
		for (int i = 0; i < NUM_SCORES; i++)
			cout << score[i] << "\t";
		cout << endl;
	}
};

class StudentCompare
{
	public:
	bool operator()(const Student &lhs, const Student &rhs)
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
};


int main(){
	Student s1, s2, s3, s4, s5;
	Student pop_student;

	s1.getID(100);
	s1.getname("John");
	s1.getScores(100, 100, 100);
	s1.printStudent();

	s2.getID(101);
	s2.getname("Jingle");
	s2.getScores(100, 90, 90);
	s2.printStudent();

	s3.getID(102);
	s3.getname("Heimer");
	s3.getScores(100, 90, 80);
	s3.printStudent();

    s4.getID(103);
	s4.getname("Schmidt");
	s4.getScores(100, 90, 70);
	s4.printStudent();

    s5.getID(104);
	s5.getname("Steve");
	s5.getScores(90, 90, 100);
	s5.printStudent();

//	cout << "Test\n";
 	priority_queue<Student, vector<Student>, StudentCompare> pq;
	pq.push(s1);
	pq.push(s2);
	pq.push(s3);
    pq.push(s4);
    pq.push(s5);
    cout <<"There are "<< pq. size()<< " Students" << "\n";

	while (!pq.empty())
	{
		pop_student = pq.top();
		pop_student.printStudent();
		pq.pop();
	}
}
