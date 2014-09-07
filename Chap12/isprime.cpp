#include <cmath>
#include <iostream>

using std::cout; using std::cin; using std::endl; using std::string;

//assumes the use of the CMATH library to determine the square root, but the same results could be achieved without this function

bool optimusPrime(int number) {
	// initially filter out all even numbers as well as the number 2 as it's a special corner case in terms of prime numbers
	if (!(number % 2) && number != 2) {
		return false;
	}
	// the two important factors here are not continuing past the square root of the tested number
	// and incrementing the dividing number by 2 each loop as only even numbers are divisible by even numbers
	for(int i = 3; i <= std::sqrt(number); i += 2) {
		if (!(number % i)) {
			// as soon as the tested number is found to be divisible with remainder zero it exits the function indicating it is not a prime number
			return false;
		}
	}
	// function returns true (that the number is prime) after running through the entire for loop without exiting
	return true;
}

int main() {
	int val;
	while (val != 0) {
		cout << "Enter a number: ";
		cin >> val;
		bool isprime = optimusPrime(val);
		string s;
		if (isprime) {
			s = " IS ";
		}
		else {
			s = " IS NOT ";
		}
		cout << "The number " << val << s << "prime." << endl;
	}
	return 0;
}