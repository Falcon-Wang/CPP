#include <iostream>

int sum_while(int begin, int end);

int main()
{
    std::cout << "sum = " << sum_while(0,10) << std::endl;
}

// �����begin��end���ۼӺͣ�whileѭ���汾��
int sum_while(int begin, int end)
{
    int sum = 0;    // �ۼӺ�

    while (begin <= end)
    {
        sum += begin++; // �ȼ��� sum = sum + begin; begin++;
    }
    return sum;
}