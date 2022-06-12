#include<iostream>
#include<numeric>
using namespace std;

bool are_coprime(const unsigned int a,const unsigned int b) {
	return gcd(a,b)==1;
}
int main() {
	int a = 12;
	int b = 39;
	cout << are_coprime(a, b) << endl;
	return 0;
}