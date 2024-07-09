#include <iostream>
#include <ctime> 
using namespace std;

int main() {

    const int ar = 4;

    int array[ar][ar];

    for (int i = 0; i < ar; i++) 
        {
        for (int j = 0; j < ar; j++) {
            array[i][j] = i + j;
        }
    }

    for (int i = 0; i < ar; i++) 
        {
        for (int j = 0; j < ar; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
