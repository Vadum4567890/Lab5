#include <iostream>
using namespace std;

int main() {

    int arr[] = { 4, 2, 1, 6, -8, 5 };

    int min = 0;
    int sum = 0;
    for (int i : arr)
    {
        if (i < min) {
            min = i;
        }
        if (i > 0) {
            sum += i;
        }
    }

    cout << "The min element is " << min << endl;
    cout << "The sum of elements is " << sum << endl;
	return 0;
}