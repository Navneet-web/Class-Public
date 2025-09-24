#include<iostream>
using namespace std;
class bike{
	public:
	string name,model,engine;
	int year;
	
	void sleep(){
		cout<<name<<endl<<model<<endl<<engine<<endl<<year;
	}
	
};
int main(){
	bike bike1;
bike1.name="Royal Enfield";
bike1.model="Himalayan 411";
bike1.engine="452 cc, single-cylinder, liquid-cooled, DOHC";
bike1.year=2023;


bike1.sleep();



}
