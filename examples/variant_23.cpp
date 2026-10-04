#include "arraylib.h"
#include <cstddef>
#include <iostream>

using namespace std;

int main() {
    int warehouse_load[] = {
    1200, 980, 1430, 875,
    1610, 1320, 1090, 1540
    };

    const size_t n = sizeof(warehouse_load) / sizeof(warehouse_load[0]);

    cout << "Общий грузооборот: " << arr_sum(warehouse_load, n) << '\n';
    cout << "Средний грузооборот: " << arr_average(warehouse_load, n) << '\n';
    cout << "Максимальный объём: " << arr_max(warehouse_load, n) << '\n';
    cout << "Мининальный объем: " << arr_min(warehouse_load, n) << '\n';
    cout << "Медиана объёмов: " << arr_median(warehouse_load, n) << '\n';

    return 0;
}