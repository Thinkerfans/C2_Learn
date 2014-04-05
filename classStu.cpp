#include<iostream>

class Stu{
	public:
		void stuinfo(){};
	protected:
		int tag;	
	private:
		char name[20];
		int age;
		char sex[10];
};

int main(){

	Stu s;
	s.stuinfo();
	int a = s.tag;
	return 0;
}
