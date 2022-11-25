#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "WhoIsRicher.h"
#include "Worker.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Clothes cl(99, "��������", "�����", "����");
	cout << cl << endl; //����� ����� ���������� <<
	Human human(20, "����", "�", cl);
	Worker wk;
	wk = human; //���������� ������� ������������ ������ ������� ��������
	cout << wk << endl;
	//����� ������������ �������� ������ � ������������ � ����������� ������������
	MedicalCard* md = new MedicalCard(human, 78, 182, "������", 11111);
	cout << *md << endl;
	//����� ����������� �������
	md->ExtendDocument();
	
	Human* h = new Human(40, "name", "M", cl);
	Worker* w = new Worker(*h, "���������", 80000);
	h->HumanCardDisplay(); 
	w->HumanCardDisplay();//��������������� �������

	//���� ���������� ������
	Worker wk2(human, "���������", 10000);
	CheatsMoneyBalance(wk2);
	cout << "������: " << WhoIsRicher<Human>::WhoisRicher(*h, wk);

	cin.get();
}