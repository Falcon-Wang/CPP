#include <iostream>
#include <limits>

int sum_while(int begin, int end);  // �ۼӺͣ�whileѭ���汾��
int sum_for(int begin, int end);    // �ۼӺͣ�forѭ���汾��
int sum_DynamicInput(std::istream& inputStream);     // ��ȡ������������������
void count_continueChar(std::istream& inputStream);   // ͳ��ÿ���ַ��������������������˶��ٴ�


int main()
{
    std::cout << "sum = " << sum_while(0,10) << std::endl;
    std::cout << "sum = " << sum_for(0,10) << std::endl;
/*
    std::cout << "����������:";
    int sum = sum_DynamicInput(std::cin);   // ʹ����������Ϊ����
    std::cout << "sum = " << sum << std::endl;
*/
    std::cout << "����������:";
    count_continueChar(std::cin);

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

// �����begin��end���ۼӺͣ�forѭ���汾��
int sum_for(int begin, int end)
{
    int sum = 0;
    for (begin; begin <= end; begin++)
    {
        sum += begin;
    }
    return sum;
}

// ��ȡ������������������
int sum_DynamicInput(std::istream& inputStream)     // ����������
{
    int sum = 0, value = 0;

    while (inputStream >> value)
    {
        sum += value;
    }

    return sum;
}

// ͳ��ÿ���ַ��������������������˶��ٴ�
void count_continueChar(std::istream& inputStream)
{
    int currentValue = 0, value = 0;
    if (inputStream >> currentValue)    // ��ȡ��һ��ֵ
    {
        int count = 1;
        while (inputStream >> value)
        {
            if (value == currentValue)
                count++;
            else
            {
                std::cout << "����" << currentValue << "������" << count << "��" << std::endl;
                currentValue = value;   // ��ס��ֵ
                count = 1;  // ���ü�����
            }
        }
        std::cout << "����" << currentValue << "������" << count << "��" << std::endl;
    }
}