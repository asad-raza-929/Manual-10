#include<iostream>
#include<cmath>
using namespace std; 


class Triangle{
private:
	int a, b, c;
public:
	int p,s,A;
	
	void perimeter(int a, int b, int c){
		p = a + b + c;
	}
		void area(int a, int b ,int c){
		s = p/2;
		A = sqrt(s*(s-a)*(s-b)*(s-c));
	}
	void print(){
		cout<<"Area of Traingle      :"<<A<<endl;
		cout<<"Perimeter of Triangle :"<<p;
	}
};

int main(){
	Triangle T;
	T.perimeter(3,4,5);
	T.area(3,4,5);
	T.print();

    return 0;
}
