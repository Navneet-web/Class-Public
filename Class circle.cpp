#include<iostream>
using namespace std;
class area{
	public:
		int ar;
		
		void co(){
			cout<<3.14*ar*ar;
		}
};
int main(){
	area area1;
	area1.ar=10;
	
	area1.co();
}
