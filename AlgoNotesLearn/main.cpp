#include <iostream>

// 进制转换（十进制以内，两数相加并输出）
void NumberSystemSwitcher()
{
    unsigned int numSystem;
    unsigned int num1, num2, sum = 0;
    unsigned int numTen1 = 0, numTen2 = 0, sumTen = 0;
    scanf("%d%d%d", &num1, &num2, &numSystem);
    unsigned int temp1, temp2;
    unsigned int multiplier = 1;
    unsigned int divider = 1;
    while (divider <= num1 && divider <= num2)
    {
        temp1 = (num1 % (10 * divider)) / divider;
        numTen1 += temp1 * multiplier;
        temp2 = (num2 % (10 * divider)) / divider;
        numTen2 += temp2 * multiplier;
        divider *= 10;
        multiplier *= numSystem;
    }
    sumTen = numTen1 + numTen2;
    printf("%d %d\n", numTen1, numTen2);
    divider = numSystem;
    multiplier = 1;
    while (sumTen != 0)
    {
        sum += (sumTen % divider) * multiplier;
        sumTen /= numSystem;
        multiplier *= 10;
    }
    printf("%d", sum);
}

int main() {
    NumberSystemSwitcher();
    return 0;
}
