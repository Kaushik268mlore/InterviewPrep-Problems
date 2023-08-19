#include <bits/stdc++.h>
using namespace std;
//https://codedrills.io/problems/rotated-sorted-array
class RotatedArray {
public:
	// DO NOT read from stdin or write to stdout.
	// Input is given as the function arguments.
	// Output is taken as the function return value.
	bool checkIfSorted(std::vector<int> arr) {
		// Code here
		int n=arr.size();
		int cnt=0;
		for(int i=0;i<n;i++){
			if(arr[i]>arr[(i+1)%n])cnt++;
		}
	return cnt<=1;}
};
