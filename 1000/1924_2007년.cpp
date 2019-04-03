#include <iostream>
#include <string>
using namespace std;

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string yoil[7] = {"MON"s, "TUE"s, "WED"s, "THU"s, "FRI"s, "SAT"s, "SUN"s};
	
	int month, day;
	cin >> month >> day;
	month--, day--;
	for (int i = 0; i < month; ++i) {
		day += days[i];
	}
	cout << yoil[day % 7] << endl;

	return 0;
}