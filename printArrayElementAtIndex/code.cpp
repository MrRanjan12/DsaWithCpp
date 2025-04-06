
#include <iostream>
#include <vector>

using namespace std;

void printArrayElementAtIndex(const vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << "Value at index " << i << " is " << nums[i] << endl;
    }
}

int main() {
    cout << "Enter the size of array you want to insert: ";
    int n;
    cin >> n;
    if (n <= 0) {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1;
    }
    vector<int> num(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    printArrayElementAtIndex(num);
    return 0;
}
