#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <ctime> 

using namespace std;

int main() {

    const int ar = 5;

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
            cout << array[i][j] << " " ;
        }
        cout << endl;
    }

    {
        time_t mytime = time(NULL);
        struct tm* now = localtime(&mytime);
        printf("\nDate: %d.%d.%d\n", now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);
       
       
    }
    {

    }
   
    
    
    return 0;

}


