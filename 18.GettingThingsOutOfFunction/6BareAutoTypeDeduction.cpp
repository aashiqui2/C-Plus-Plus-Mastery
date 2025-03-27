#include <iostream>
using namespace std;

int main()
{

	//! Type deduction with auto : Just a copy

	/* double some_var{55.5};
	auto x = some_var;

	cout << "sizeof(some_var) : " << sizeof(some_var) << endl;
	cout << "sizeof(x) : " << sizeof(x) << endl;
	cout << "&some_var : " << &some_var << endl;
	cout << "&x : " << &x << endl;
	cout << " some_var : " << some_var << endl;
	cout << " x : " << x << endl; */

	/* double some_var = 55.5; //double
	double& some_var_ref {some_var};
	auto y = some_var_ref; // y is not deduced as a reference to double
						   // it's just a double that contains the value
						   // in some_var_ref
	++y;

	cout << "sizeof(some_var) : " << sizeof(some_var) << endl; // 8
	cout << "sizeof(some_var_ref) : " << sizeof(some_var_ref) << endl; // 8
	cout << "sizeof(y) : " << sizeof(y) << endl; // 8
	cout << "&some_var : " << &some_var << endl; // 0xabc123
	cout << "&some_var_ref : " << &some_var_ref << endl ;// 0xabc123
	cout << "&y : " << &y << endl;  // 0xaab543
	cout << "some_var : " << some_var << endl; //55.5
	cout << "some_var_ref : " << some_var_ref << endl; // 55.5
	cout << "y : " << y << endl; // 56.5
	 */

	//!  True reference deduction
	/*  	double some_var = 55.5; //double
	  double& some_var_ref {some_var};
	  auto& z = some_var_ref; // z is deduced as a double reference
	  ++z;
	  cout << "sizeof(some_var) : " << sizeof(some_var) << endl; // 8
	  cout << "sizeof(some_var_ref) : " << sizeof(some_var_ref) << endl; // 8
	  cout << "sizeof(z) : " << sizeof(z) << endl; // 8
	  cout << "&some_var : " << &some_var << endl;// 0xabc123
	  cout << "&some_var_ref : " << &some_var_ref << endl;// 0xabc123
	  cout << "&z : " << &z << endl;// 0xabc123
	  cout << "some_var : " << some_var << endl; // 56.5
	  cout << "some_var_ref : " << some_var_ref << endl; //56.5
	  cout << "z : " << z << endl; // 56.5 */

	//! Constness is preserved with properly deduced references.

	/* const double some_other_var{44.3};
	const double &const_ref{some_other_var};
	auto &p = const_ref;

	cout << "some_other_var : " << some_other_var << endl;
	cout << "const_ref : " << const_ref << endl;
	cout << "p : " << p << endl;

	//++p; // Compiler error

	cout << "some_other_var : " << some_other_var << endl;
	cout << "const_ref : " << const_ref << endl;
	cout << "p : " << p << endl; */

	//! Constness doesn't matter with non reference deduction
	const double i_am_const{71.2};
	const double &my_ref{i_am_const};

	// q is a separate variable, initialized with the value in i_am_const.
	auto q = my_ref;
	++q; // Can modify q without a problem. It's a copy.

	return 0;
}