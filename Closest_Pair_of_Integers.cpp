#include <bits/stdc++.h>
using namespace std;
//https://codedrills.io/problems/closest-pair-of-integers
class ClosestPairOfIntegers {
public:
	// DO NOT read from stdin or write to stdout.
	// Input is given as the function arguments.
	// Output is taken as the function return value.
	int getMinimumAbsoluteDifference(int N, std::vector<int> L) {
		// Code here
		int res=INT_MAX;
		sort(L.begin(),L.end());
		for(int i=0;i<N-1;i++){
			if(L[i]==L[i+1])continue;
			res=min(abs(L[i]-L[i+1]),res);
		}
		if(res==1e8)return -1;
	return res;}
};
