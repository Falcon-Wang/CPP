#include <iostream>     // ָ��Ҫʹ�õ�ͷ�ļ�

int main()  // �������ͣ�return type�� ��������function name�� �β��б�parameter list��
{
    // ��ʾ�û�������������������ǵĺ�
    std::cout << "�������������֣�";   // ��ӡ��Ϣ��Ҳ������ֵ������string literal��
    int val1 = 0, val2 = 0;     //�������ͱ����洢����
    std::cin >> val1 >> val2;   //�����û����벢�洢
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << std::endl;    // endl�ǲ��ݷ���manipulator����������ǰ��

    return 0;   // �����壬����0һ�����ɹ�
}