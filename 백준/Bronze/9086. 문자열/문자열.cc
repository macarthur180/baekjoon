#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int count;
	cin >> count;

	for (int i = 0; i < count ; i++) {

		string st;

		cin >> st;

		int n = st.length();
		

		cout << st[0] << st[n-1] << endl;

	}

}