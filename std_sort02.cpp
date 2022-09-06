#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public : 
	string name;
	int score;
	Student(string name,int score)
	{
		this->name = name;
		this->score = score;
	}
	bool operator <(Student &student)
	{	
		return this->score < student.score;
	}
};

int main(void)
{
	Student students[] = {
		Student("한용석1",1),
		Student("한용석2",2),
		Student("한용석3",3),
		Student("한용석4",4),
		Student("한용석5",5),
	};
	
	sort(students,students + 5);
	for(int i = 0; i < 5; i++)
	{
		cout << students[i].name << '\n';
	}
	return 0;
}


