#include<iostream>
int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	/*
	VS��intȡΪ4byte����32bit��u-u2Ϊ-32��������һ��-32�Ķ������Ƕ���
	32 �Ķ�����Ϊ100000����32λ�ڴ�Ϊ0000 0000 0000 0000 0000 0000 0010 0000����ɶ����Ƹ���ȡ����һΪ��
	1111 1111 1111 1111 1111 1110 0000
	�ϱߵĶ�����-32�����ڴ���ʵ�ʴ洢��ֵ��
	��Ϊ�������unsignend���������������ת�����޷���ʮ����Ϊ��
	2^31+2^30+2^29+...+2^6+2^5 = 4294967264
	*/
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	return 0;
}