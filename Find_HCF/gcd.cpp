// KUNAL FARMAH
// kunalfarmah98@gmail.com

#include <iostream>
using namespace std;

// Euclid's Algorithm to find HCF of greatest common divisor of 2 numbers

/* Basic Euclidean Algorithm for GCD
 *  The algorithm is based on below facts.
 *  1) If we subtract smaller number from larger (we reduce larger number), GCD doesn’t change. 
      So if we keep subtracting repeatedly the larger of two, we end up with GCD.
 *  2) Now instead of subtraction, if we divide smaller number, the algorithm stops when we find remainder 0.
 */

/* Note that here there is no convention that the first parameter must be the larger number or vice versa.
 * This algorithm is designed such that it would work in any sequnce of parameters
 * The use of modulus operator '%' makes the algorithm work regardless what is the relationship between its operands
 */

int gcd(int a,int b){
    //Base case
    if(b==0){
        return a;
    }
    // Recursive Case
      return gcd(b,a%b);
    // This is eqivalent to removing the smaller number from the larger unless we get the gcd.
    
}

// example test

  int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
   }
