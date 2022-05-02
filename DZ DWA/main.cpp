#include "FOO.h"
int main()
{
	srand(time(0));
	vector <int> Arr;
	int n = 0, choice = 0;
	n = InputSizeArr(n);
	Arr = RandomFill(Arr, n);
	cout << "Array:\n";
	OutArr(Arr);
	Arr = SelectAction(Arr, choice);
	OutArr(Arr);
}