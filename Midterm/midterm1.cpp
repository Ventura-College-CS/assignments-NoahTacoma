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
	
	// SID: int
	// SName: string
	// scores: double [0..2] //double array for 3 scores

	// Student();
	// Student(int i, sting name, double *sc);
	// getID() : string
	// getScores() : double *
	// //All other getter/setter function if you need

    void printStudent() const
    {
		cout << "Student ID: " << SID << "\t";
		cout << "Name: " << SName << "\t";
		for (int i = 0; i < NUM_SCORES; i++)
			cout << score[i] << "\t";
		cout << endl;
	}
};



template <class T>   
class Stack 
{
	public:
    vector<T>pool;

    //Stack();
	Stack()
	{
		
	}

    void push(const T & el){
		this->pool.push_back(el);

	}
    T pop(){
		T a = this->pool.back();
		this->pool.pop_back();
		return a;

	}
	T& topEl( ) {
		return this->pool.back();

	}// get 1st element
    bool isEmpty(){
		return this->pool.empty();
	}
    int size(){
		return this->pool.size();
	} // get the number of elms;
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

	Stack <Student>test;
	test.push(s1);
	test.push(s2);
	test.push(s3);
	test.push(s4);
	test.push(s5);
	cout <<"size" << test.size() << "\n";
	while(!test.isEmpty()){
		pop_student = test.topEl();
		pop_student.printStudent();
		test.pop();
	}

}












// {
// 	Student s1, s2, s3, s4, s5;
// 	Student pop_student;

// 	s1.setSid(100);
// 	s1.setSname("John");
// 	s1.setScore(100, 100, 100);
// 	s1.printStudent();

// 	s2.setSid(101);
// 	s2.setSname("Jingle");
// 	s2.setScore(100, 90, 90);
// 	s2.printStudent();

// 	s3.setSid(102);
// 	s3.setSname("Heimer");
// 	s3.setScore(100, 90, 80);
// 	s3.printStudent();

//     s4.setSid(103);
// 	s4.setSname("Schmidt");
// 	s4.setScore(100, 90, 70);
// 	s4.printStudent();

//     s5.setSid(104);
// 	s5.setSname("Steve");
// 	s5.setScore(90, 90, 100);
// 	s5.printStudent();

// //	cout << "Test\n";
//  	priority_queue<Student> pq;
// 	pq.push(s1);
// 	pq.push(s2);
// 	pq.push(s3);
//     pq.push(s4);
//     pq.push(s5);
//     cout <<"There are "<< pq. size()<< " Students" << "\n";

// 	while (!pq.empty())
// 	{
// 		pop_student = pq.top();
// 		pop_student.printStudent();
// 		pq.pop();
// 	}
// }