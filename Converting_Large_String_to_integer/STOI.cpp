#include<bits/stdc++.h>
using namespace std;

// Program to convert a very long string to integer.

// An alternate way is to use the in-built library function stoi() but it doesn't work for a large string (see the last line of code
// for checking it)

/*
 * An integer in C++ can store values in a range of -2147483648 to 2147483647
 * However, a string can be way larger than it, so we need a modulus to keep it in the limits of integer
 */

/* long long is a data type that can store the highest integer number in c++, its range is somewhere near 10^18, i.e it can hold upto
 * an 18 digit number, we take it here as the intermediate calculations might result in a number that is over the range of integer 
 * and will cause the program to crash
 */
 
const long long mod = 2E9;    // we need a modulus such that we can accomodate a large number in long long as a string
                             // has no limit to its length

long long STOI(string a, long long m){

long long ans=0;
	// for each digit, we keep adding it to the ans by multiplying the prev value by 10
	for(int i=0; i<a.size();i++){
		ans =  (ans*10)%m + (a[i]-'0');
		// as the number would be very large, we take its modulus to 
		// fit it in the range of integer
		ans = ans%m;
	}

	return ans;

}

int main(){

	// this string can fit in the range of int and can be converted as such
	string a = "98472837";
	cout<<STOI(a,mod)<<endl;
	
	// this string is too large to be stored in C++, hence it only takes a component
	// of 10^9 by taking mod with the modulus constant
	string b = "456325856236212652565224";
	cout<<STOI(b,mod)<<endl;
  
  // The library stoi() function will crash for such a high input
  // cout<<stoi(b)<<endl;
  
  return 0;
}
