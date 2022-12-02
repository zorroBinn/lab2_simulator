#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "WhoIsRicher.h"
#include "Worker.h"
#include "Wardrobe.h"
#include "SetColor.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Clothes* cl = new Clothes(99, "��������", "�����", "����");
	Wardrobe wb;
	Clothes cl1(82, "t1", "t2", "t3");
	Clothes* cl2 = new Clothes(100, "t11", "t22", "t33");
	
	//���� ����������
	wb.Add(cl);
	wb.Add(&cl1);
	wb.Add(new Clothes(100, "t11", "t22", "t33"));
	SetColor sk("������");
	sk = cl1;
	wb.Add(&sk);
	wb.Display(); //���� ������
	cout << endl;
	
	//���� ��������
	wb.Delete(2);
	wb.Display();
	cout << endl;
	
	//���� �����
	wb.Read();
	wb.Display();
	cout << endl;
	
	//���� ���������� 1
	wb.SortByClothesStatus();
	wb.Display();
	cout << endl;
	
	//���� ���������� 2
	wb.SortByClothingSetCount();
	wb.Display();
	cout << endl;
	
	//���� ������ 1
	wb.SearchByClothesStatus(100);
	cout << endl;
	
	//���� ������ 2
	wb.SearchByClothingSetCount(1);
	cout << endl;

	cin.get();
}