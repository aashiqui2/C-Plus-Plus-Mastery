#include <iostream>
#include <string>
using namespace std;
int main()
{

	//!  Number to String : theto_string function.
	// float float_var{22.3f};
	// double double_var{1.34847e5};
	// int int_var{223};

	//string float_str{std::to_string(float_var)};

	//string double_str{std::to_string(double_var)};

	//string int_str{std::to_string(int_var)};

	//cout << "size of float_str : " << float_str.size() <<endl;
	//cout << "float_var : " << float_var <<endl;
	//cout << "float_str : " << float_str <<endl;

	//cout << "double_var : " << double_var <<endl;
	//cout << "double_str : " << double_str <<endl;

	//cout << "int_var : " << int_var <<endl;
	//cout << "int_str : " << int_str <<endl;

	//string to number (integral types)
	// int, long , long long
	//stoi,stol,stoll
	//string number_str{"34.567"}; // Could even be negative

	// int int_var =stoi(number_str);
	//cout << "int_var : " << int_var <<endl;
	//cout << "sizeof(int_var) : " << sizeof(int_var) <<endl;

	// long long_var =stol(number_str);
	//cout << "long_var : " << long_var <<endl;
	//cout << "sizeof(long_var) : " << sizeof(long_var) <<endl;

	// long long long_long_var =stoll(number_str);
	//cout << "long_long_var : " << long_long_var <<endl;
	//cout << "sizeof(long_long_var) : " << sizeof(long_long_var) <<endl;

	//! unsigned long , unsigned long long
	//stoul,stoull
	// Underflows when thestring contains a negative number
	//string number_str = "34.567";

	//string number_str = "-34.567"; // Resulting unsigned long and long long underflow
	//  and become huge numbers of their type

	//cout <<endl;
	//cout << "unsigned long, unsigned long long : " <<endl;

	// unsigned long u_l_var =stoul(number_str);
	//cout << "u_l_var : " << u_l_var <<endl;
	//cout << "sizeof(u_l_var) : " << sizeof(u_l_var) <<endl;

	// unsigned long long u_ll_var =stoull(number_str);
	//cout << "u_ll_var : " << u_ll_var <<endl;
	//cout << "sizeof(u_ll_var) : " << sizeof(u_ll_var) <<endl;

	//! float, double,long double :
	//stof,stod,stold
	std::string number_str = "34.567";

	float float_var =stof(number_str);
	std::cout << "float_var : " << float_var <<endl;
	std::cout << "sizeof(float_var) : " << sizeof(float_var) <<endl;

	double double_var =stod(number_str);
	std::cout << "double_var : " << double_var <<endl;
	std::cout << "sizeof(double_var) : " << sizeof(double_var) <<endl;

	long double long_double_var =stold(number_str);
	std::cout << "long_double_var : " << long_double_var <<endl;
	std::cout << "sizeof(long_double_var) : " << sizeof(long_double_var) <<endl;

	return 0;
}