#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <time.h>

void Task1() {
	/*Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.
*/
	int x, y;
	printf("введите два числа:");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x == y) {
		printf("числа ровны\n");
	}
	else {
		if (x > y) { printf("%d, %d", y, x); }
		else if (y > x) { printf("%d, %d", x, y); }
	}
}

void Task2() {
	/*Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену. Студент получает допуск, если его средний балл 4 балла и выше*/
	int x1, x2, x3, x4, x5, sred;
	printf("введите 5 оценок студента:");
	scanf_s("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
	sred = (x1 + x2 + x3 + x4 + x5) / 5;
	if (sred == 4 || sred > 4) {
		printf("студент поступил\n");
	}
	else { printf("студент не поступил\n"); }
}

void Task3() {
	/*Написать программу-калькулятор. Пользователь вводит два числа и выбирает арифметическое действие. Вывести на экран результат*/
	int x, y, a, sum;
	printf("калькулятор\n введите два числа:");
	scanf_s("%d %d", &x, &y);
	printf("выберите действие:\n1) +\n2)-\n3)/\n4) *\n");
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
	/*Написать программу, которая по выбору пользователя возводит введенное им число в степень от нулевой до седьмой включительно*/
	int x, y, a;
	printf("введите число и степень от 0 до 7:");
	scanf_s("%d %d", &x, &y);
	a = pow(x, y);
	printf("число в степени: %d\n", a);
}


int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("введите номер задания:");
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
	printf("вы хотите подолжить 1/0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;
	system("pause");
}