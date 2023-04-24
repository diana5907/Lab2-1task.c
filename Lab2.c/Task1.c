#include <stdio.h>
#include <math.h>
int main() {
    int a = 81, b = 9;
    int sum = a + b;
    float quotient = (float)b / a;
    int product = a * b;

    printf("Сума чисел: %d\n", sum);
    printf("Результат ділення другого числа на перше: %f\n", quotient);
    printf("Добуток чисел: %d\n", product);

    return 0;
}