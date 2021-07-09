//multiple inheritance
//class part_timejob has been inherited from two base class called student and worker
#include<bits/stdc++.h>
using namespace std;

class student{
	protected:
		string name;
		string matric;
	public:
		//constructor of the student class
		student(string n=" ",string m=" "){
			name=n;
			matric=m;
		}
};

class worker{
	protected:
		string job;
		double salary;
	public:
		//constructor of the worker class
		worker(string j=" ",double s=0){
			job=j;
			salary=s;
		}	
};

class part_timejob:public student, public worker{
	protected:
		double maxTimeAllowed;
	public:
		//constructor of the derived class
		part_timejob(string _name="",string _matric=" ",string _job=" ",double _salary=0.0,double m=0):student(_name,_matric),worker(_job,_salary){
			maxTimeAllowed=m;
		}
		void display(){
			cout<<"The details of the student and his job details"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Matric number: "<<matric<<endl;
			cout<<"Job name: "<<job<<endl;
			cout<<"Salary: $"<<salary<<endl;
			cout<<"Number of working hours per day: "<<maxTimeAllowed<<" hours"<<endl;	
		}
};

int main(){
	part_timejob j1("GM Shimon","A20EC0266","Web Developer",1000,12);
	j1.display();
	return 0;
}
