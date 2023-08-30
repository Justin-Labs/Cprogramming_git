#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 50;
    int test_num = 50;

    num +=30;
    test_num = test_num + 30;
    printf("num after adding 30: %d\n", num);
    printf("test_num after adding 30: %d\n", test_num);

    num -= 10;
    test_num = test_num - 10;
    printf("num after subtracting 10: %d\n", num);
    printf("test_num after subtracting 10: %d\n", test_num);

    num *= 2;
    test_num = test_num * 2;
    printf("num after multiplying by 2: %d\n", num);
    printf("test_num after multiplying by 2: %d\n", test_num);

    num /= 5;
    test_num = test_num / 5;
    printf("num after dividing by 5: %d\n", num);
    printf("test_num after dividing by 5: %d\n", test_num);

    num %= 6;
    test_num = test_num % 6;
    printf("num after computing reminder: %d\n", num);
    printf("test_num after computing reminder: %d\n", test_num);

    return EXIT_SUCCESS;
}