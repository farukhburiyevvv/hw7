#include <iostream>
#include <vector>
#include <bits/chrono.h>
#include <cmath>
#include <complex>
using namespace std;

void days2years(int &days, int &years) {
    if (days > 365) {
        years = days / 365;
        days -= years * 365;
        cout << "Years:" << years << " Days:" << days << endl;
    } else cout << "Years:" << years << " Days:" << days << endl;
}

double func(double *x, double *y) {
    double result = 11 * pow(*x, 3) / 3.0 + 5;
    return result;
}

int minsNewYear(int *hour, int *min) {
    int mins = (23 - *hour) * 60 + 60 - *min;
    return mins;
}

double probability(int *A, int *B) {
    double prob = .0;
    if (*A < *B) prob = (6 - *B + 1) / 6.0;
    else prob = (6 - *A + 1) / 6.0;
    return prob;
}

int presses(int *x) {
    int r = *x;
    int length = 1;
    int count = 0;
    while (r > 10) {
        r = r / 10;
        length++;
    }
    for (int i = 1; i <= length; i++) { count += i; }
    return (r - 1) * 10 + count;
}
