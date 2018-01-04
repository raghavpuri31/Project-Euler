#include <iostream>


using namespace std;

int main() {
	int s = 0;
	
	
	int f1 = 1;
	int f2 = 2;
	int f3 = 0;
	
	while (f2 <= 4000000)
	{
		f3 = f1 +f2;
		if (f2 % 2 == 0)
			s += f2;
		f1 = f2;
		f2 = f3;
	}
 
	cout << s;
 
	return 0;
}
