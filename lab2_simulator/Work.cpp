#define _CRT_SECURE_NO_WARNINGS
#include "Work.h"
#include "Human.h"
#include <iostream>

Work WorkInit(char namework[30], int payment)
{
	Work work;
	strcpy(work.NameWork, namework);
	work.Payment = payment;
	return work;
}

void WorkRead()
{
	int payment;
	char strnamework[30];
	printf("������� ���������� � ������:\n");
	do {
		printf("����� ������: ");
		gets_s(strnamework);
	} while (strnamework[0] == NULL);
	do {
		printf("������� ������ �� ���� ������� ������: ");
		scanf("%d", &payment);
	} while (payment < 1 || payment > 100000);
	WorkInit(strnamework, payment);
}

void WorkDisplay(Work work)
{
	printf("����� ������: %s\n������ �� ������: %d", work.NameWork, work.Payment);
}

void Working(Work work, Human human)
{
	if (human.Moneybalance >= 0) {
		printf("�� ���������� � �������� %d ������!", work.Payment);
		human.Moneybalance += work.Payment;
	}
}

