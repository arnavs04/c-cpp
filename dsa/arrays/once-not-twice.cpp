#include <bits/stdc++.h>
 
using namespace std;

int singleNumber(vector<int>& nums) { 
       unordered_map<int,int> a;
	   for(auto x: nums) a[x]++;
	   for(auto z:a)
		   if(z.second==1)
			   return z.first;
	   return -1;
}

int main() {

}