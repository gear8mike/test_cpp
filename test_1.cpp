using namespace TMath;
using namespace std;


void func(double_t *a)
{
	*a+=1.1;
	cout<<"*a\t"<<*a<<endl;
	cout<<"a\t"<<a<<endl;
	cout<<"&a\t"<<&a<<endl;
	cout<<"&*a\t"<<&(*a)<<endl;
}

void test_1()
{
	double a=10.;
	
	func(&a);
	cout<<"result\t"<<a<<endl;
	
	int b=23;
	int *b_p;
	
	b_p=&b;
	
	*b_p+=4;
	
	cout<<"new modifications"<<endl;
	cout<<"b = "<<b<<endl;
}
	
	
