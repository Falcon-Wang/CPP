#include <iostream>
#include "Sales_item.h"     // �����Զ���ͷ�ļ�

void ioOperation(Sales_item book);  // Sales_item�����IO
int Multiply(Sales_item item1, Sales_item item2); // Sales_item����ӷ�

int main()
{
    Sales_item book;    // ��ʼ��Sales_item����
    ioOperation(book);

    Sales_item item1, item2;
    Multiply(item1, item2);

    return 0;
}

// Sales_item�����IO
void ioOperation(Sales_item book)
{
    std::cout << "������һ����¼:";
    // Exp input: 0-201-70353-X 4 24.99
    std::cin >> book;   // ����ISBN�š��۳������͵���
    // Exp output: 0-201-70353-X 4 99.96 24.99
    std::cout << book << std::endl;     // ���ISBN�š��۳��������ܼۺ͵���
}

// Sales_item����ӷ�
int Multiply(Sales_item item1, Sales_item item2)
{
    std::cout << "������������¼:" << std::endl;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn())   // ���ó�Ա����
    {
        std::cout << item1 + item2 << std::endl;    // ISBN��ͬ������£�����������������Ľ�����ۼ�
        return 0;
    }
    std::cerr << "ISBN��һ��" << std::endl;    // �׳�����ʱ�쳣
    return -1;
}