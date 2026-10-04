#include "arraylib.h"
#include <algorithm>

using namespace std;

int arr_sum(const int* arr, size_t n) {
    int s = 0;
    for (size_t i = 0; i < n; ++i) 
        s += arr[i];
    return s;
}

int arr_max(const int* arr, size_t n) {
    int mx = arr[0];
    for (size_t i = 0; i < n; i++) {
        if (arr[i] > mx) 
            mx = arr[i];
    }
    return mx;
}

int arr_min(const int* arr, size_t n) {
    int mn = arr[0];
    for (size_t i = 0; i < n; i++) {
        if (arr[i] < mn) 
            mn = arr[i];
    }
    return mn;
}

double arr_average(const int* arr, size_t n) {
    double s = 0;
    int k = 0;
    for (size_t i = 0; i < n; i++) {
        s += arr[i];
        k+=1;
    }
    return s/k;
}

int arr_count_positive(const int* arr, size_t n) {
    int k = 0;
    for (size_t i = 0; i < n; i++) {
        if (arr[i] > 0)
            k += 1;
    }
    return k;
}

int arr_count_negative(const int* arr, size_t n) {
    int k = 0;
    for (size_t i = 0; i < n; i++) {
        if (arr[i] < 0)
            k += 1;
    }
    return k;
}

int arr_count_zero(const int* arr, size_t n) {
    int k = 0;
    for (size_t i = 0; i < n; i++) {
        if (arr[i] == 0)
            k += 1;
    }
    return k;
}

int arr_product(const int* arr, size_t n) {
    int p = 1;
    for (size_t i = 0; i < n; ++i) 
        p *= arr[i];
    return p;
}

double arr_median(const int* arr, size_t n) {
    int* copy = new int[n];

    for (size_t i = 0; i < n; i++) 
        copy[i] = arr[i];

    sort(copy, copy + n);
    double median;

    if (n % 2 == 0) 
        median = (static_cast<double>(copy[n / 2 - 1]) + copy[n / 2]) / 2.0;

    else 
        median = copy[n / 2];

    delete[] copy;

    return median;
}