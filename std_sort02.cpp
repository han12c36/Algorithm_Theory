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
		Student("�ѿ뼮1",1),
		Student("�ѿ뼮2",2),
		Student("�ѿ뼮3",3),
		Student("�ѿ뼮4",4),
		Student("�ѿ뼮5",5),
	};
	
	sort(students,students + 5);
	for(int i = 0; i < 5; i++)
	{
		cout << students[i].name << '\n';
	}
	return 0;
}


