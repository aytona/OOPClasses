#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class BaseClass
{
protected:
	string Name;
	float GPA;
	int Grade;
	bool Pass;
public:
	void setAllValues (string name, float gpa, int grade, bool pass)
	{
		Name = name;
		GPA = gpa;
		Grade = grade;
		Pass = pass;
	}

	void Print ()
	{
		cout<<"Name = "<<Name<<endl;
		cout<<"GPA = "<<GPA<<endl;
		cout<<"Grade = "<<Grade<<endl;
		cout<<"Pass = "<<Pass<<endl;
	}
};

class SubClass : public BaseClass
{
private:
	string id;

public:
	SubClass(string i)
	{
		id = i;
	}

	void Print()
	{
		BaseClass::Print();
	}
};

int main()
{
	vector<SubClass> list; 
	
	ifstream infile;
	infile.open ("Assignment.txt",ifstream::in);
	if (infile.is_open())
	{
		string line;
		while(!infile.eof())
		{
			string name;
			float gpa;
			int grade;
			bool pass;

			infile>>name;
			infile>>gpa;
			infile>>grade;
			infile>>pass;

			infile.peek();

			infile.ignore(255,'\n');

			if(name.compare("")==0)
				break;

			SubClass obj("id");
			obj.setAllValues(name,gpa,grade,pass);

			list.push_back(obj);
		}
		infile.close();
	}
	else
		return 0;

	 for (std::vector<SubClass>::iterator it = list.begin(); it != list.end(); ++it)
	 {
		 cout << endl;
		 it->Print();
	 }

	return 0;
}
 