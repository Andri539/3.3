#include <iostream>
#include <cmath> 

using namespace std;

int main() {
	double x, R, y;

	
	cout << "������ �������� R: ";
	cin >> R;
	cout << "������ �������� x: ";
	cin >> x;


	if (x <= -R) {
		y = R;
	}
	else if (-R < x && x <= R) {
		y = R - sqrt(pow(R, 2) - pow(x, 2));
	}
	else if (R < x && x <= 6) {
		y = (R + (x - R) * (-3 - R)) / (6 - R);
	}
	else { // x >= 6
		y = x - 9;
	}

	
	cout << "���������: y = " << y << endl;

	system("pause"); 
	return 0;
}
