#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;   // ������һ�����׼�¼
    if (std::cin >> total)
    {
        Sales_item trans;   // ��
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans; //�ۼ�ISBN��ͬ�ļ�¼
            }else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }else
    {
        std::cerr << "δ��⵽����" << std::endl;
    }

    return 0;
}