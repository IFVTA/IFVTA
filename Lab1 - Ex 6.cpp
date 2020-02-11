#include <iostream>
using namespace std;
int main() {
	int r;
	cout << "Raio = ";
	cin >> r;
	const float PI = 3.14;
	float area = PI * r * r;
	float volume = (4 / 3) * PI * r * r * r;
	cout << "Area = " << area << endl << "Volume = " << volume;
	return 0;
}