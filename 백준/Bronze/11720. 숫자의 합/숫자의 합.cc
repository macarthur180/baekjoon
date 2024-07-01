#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;   // 25
    cin >> n;

    int* arr = new int[n];

    string a;
    cin >> a;  // 7000000000000000000000000

    int length = a.length();
    int sum = 0;

    // 문자열의 각 자리를 배열에 저장
    for (int i = 0; i < length; i++) {
        arr[i] = a[length - 1 - i] - '0';
        sum += arr[i];
    }

    cout << sum;

    // 동적 배열 메모리 해제
    delete[] arr;

    return 0;
}
