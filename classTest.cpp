#include<iostream>
using namespace std;
class A{
	public:
		void print(){
			cout<<"This is A"<<endl;
		}
};
class B:public A{
	public:
		void print(){
			cout<<"This is B"<<endl;
		}
};
class A2{
	public:
		virtual void print(){
			cout<<"This is A2"<<endl;
		}
};
class B2:public A2{
	public:
		void print(){
			cout<<"This is B2"<<endl;
		}
};
int main(){
	A aa;
	B bb;
	aa.print();
	bb.print();
	A * a1 = &aa;
	A * a2 = &bb;
	a1->print();
	a2->print();
	cout<<"----------------------"<<endl;

	A2 aa2;
	B2 bb2;
	aa2.print();
	bb2.print();
	A2 * a21 = &aa2;
	A2 * a22 = &bb2;
	a21->print();
	a22->print();
	return 0;
}
