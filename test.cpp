#include <iostream>
#include <cassert> // для assert
 // Подключаем основной файл

void test_find_sum() {
    std::cout << " txt from test_find_sum " << std::endl;
    assert(find_sum(2, 3) == 5); // если false прерывает выполнение
    assert(find_sum(-1, 1) == 0);
    assert(find_sum(0, 0) == 0);
}
