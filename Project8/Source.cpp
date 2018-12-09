#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <time.h>

void Task1() {
	/*������������ ������ ��� �����. ����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������.
*/
	int x, y;
	printf("������� ��� �����:");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x == y) {
		printf("����� �����\n");
	}
	else {
		if (x > y) { printf("%d, %d", y, x); }
		else if (y > x) { printf("%d, %d", x, y); }
	}
}

void Task2() {
	/*������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������. ������� �������� ������, ���� ��� ������� ���� 4 ����� � ����*/
	int x1, x2, x3, x4, x5, sred;
	printf("������� 5 ������ ��������:");
	scanf_s("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
	sred = (x1 + x2 + x3 + x4 + x5) / 5;
	if (sred == 4 || sred > 4) {
		printf("������� ��������\n");
	}
	else { printf("������� �� ��������\n"); }
}

void Task3() {
	/*�������� ���������-�����������. ������������ ������ ��� ����� � �������� �������������� ��������. ������� �� ����� ���������*/
	int x, y, a, sum;
	printf("�����������\n ������� ��� �����:");
	scanf_s("%d %d", &x, &y);
	printf("�������� ��������:\n1) +\n2)-\n3)/\n4) *\n");
	scanf_s("%d", &a);
	switch (a) {
	case 1:
	{sum = x + y;
	printf("%d\n", sum); }
	break;
	case 2:
	{sum = x - y;
	printf("%d\n", sum); }
	break;
	case 3:
	{sum = x / y;
	printf("%d\n", sum); }
	break;
	case 4:
	{sum = x * y;
	printf("%d\n", sum); }
	break;
	default:
		break;
	}
}

void Task4() {
	/*�������� ���������, ������� �� ������ ������������ �������� ��������� �� ����� � ������� �� ������� �� ������� ������������*/
	int x, y, a;
	printf("������� ����� � ������� �� 0 �� 7:");
	scanf_s("%d %d", &x, &y);
	a = pow(x, y);
	printf("����� � �������: %d\n", a);
}


int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("������� ����� �������:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:
	{Task1(); }
	break;
	case 2:
	{Task2(); }
	break;
	case 3:
	{Task3(); }
	break;
	case 4:
	{Task4(); }
	break;
	case 5:
	{Task5(); }
	break;
	default:
		break;
	}
	printf("�� ������ ��������� 1/0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;
	system("pause");
}