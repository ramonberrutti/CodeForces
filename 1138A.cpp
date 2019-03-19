#include <iostream>

int main()
{
    int count = 0;
    std::cin >> count;

    int lastNum = 0;
    int num = 0;

    int leftSum = -1;
    int rightSum = -1;

    int maxSum = 0;

    for (int i = 0; i < count; i++)
    {
        std::cin >> num;

        if (num != lastNum)
        {
            if (leftSum != -1 && std::min(leftSum, rightSum) > maxSum)
            {
                maxSum = std::min(leftSum, rightSum);
            }

            lastNum = num;
            leftSum = rightSum;
            rightSum = 0;
        }

        rightSum++;
    }

    if (leftSum != -1 && std::min(leftSum, rightSum) > maxSum)
    {
        maxSum = std::min(leftSum, rightSum);
    }

    std::cout << (maxSum * 2);

    return 0;
}