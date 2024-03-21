#include <iostream>
using namespace std;
const int n = 5;

int main() {
    setlocale(LC_ALL, "ukr");
    int a[n][n];
    int maxI = 0, maxJ = 0;
    int max = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = (i + j) * 3 % 50;
            cout << a[i][j] << '\t';
            if (a[i][j] > max) {
                max = a[i][j];
                maxI = i;
                maxJ = j;
            }
        }
        cout << '\n';
    }
    if (n % 2 != 0) {
        int temp = a[n / 2][n / 2];
        a[n / 2][n / 2] = max;
        a[maxI][maxJ] = temp;
    }
    cout << "Масив пiсля обмiну максимального елемента з елементом на перетинi дiагоналей:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << '\t';
        }
        cout << '\n';
    }
    return 0;
}