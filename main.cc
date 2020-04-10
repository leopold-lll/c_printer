#include <iostream>
#include <string>
#include "printer.hh"

using std::cout; 
using std::endl;
using std::vector;

int main(){

	vector<int> vi;
	vi.push_back(5);
	vi.push_back(4);
	vi.push_back(3);
	cout << "vi: " << vi << "\n";

	vector<float> vf;
	vf.push_back(0.5f);
	vf.push_back(0.4f);
	vf.push_back(0.3f);
	cout << "vf: " << vf << "\n";

	return(0);
}