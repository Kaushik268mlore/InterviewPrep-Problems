#include <bits/stdc++.h>
using namespace std;
//https://codedrills.io/problems/distinct-majority-element
class Elements {
public:
	// DO NOT read from stdin or write to stdout.
	// Input is given as the function arguments.
	// Output is taken as the function return value.
	int getMajorityElement(std::vector<int> A) {
		// Code here
		unordered_set<int>s;
		for(int i:A){
			if(s.count(i))return i;
			s.insert(i);
		}
	return 0;}
};
