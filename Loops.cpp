#include <iostream>
using namespace std;
int main() {

  for (int i = 0; i < 71; i += 10)
		cout << i << " ";
	cout << endl;
	for (int i = 20; i >= -19; i--)
		cout << i << " ";
	cout << endl;
	for (int i = 3; i < 1876; i *= 5)
		cout << i << " ";
	cout << endl;
  
  for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 12; j++)
			cout << "*";
		cout << endl;
	}
  
	int input;
	int rand;

	cout << "enter a number" << endl;
	cin >> input;
	

	while (input > 0) {
		cout << "shuffle";
		input--;
		cout << endl;
	}
}
