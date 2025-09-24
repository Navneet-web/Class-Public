#include<iostream>
using namespace std;
class area{
	public:
		int l,b;
		
		void co(){
			cout<<l*b;
		}
};
int main(){
	area area1;
	area1.l=5;
	area1.b=10;
	
	area1.co();
}
