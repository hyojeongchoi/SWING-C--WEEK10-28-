#include<iostream>
#include<vector>
#include<string>
using namespace std;

class kiosk {

private: 
vector<string> burger = { "�������", "�Ұ�����", "���̹���", "��ġ�����" }; 
vector<string> side = { "ġ�ƽ","����Ƣ��","������","���̽�ũ��" }; 
vector<string> drink = { "���̴�","�ݶ�","ȯŸ","�������ֽ�" };

public: kiosk(); 
	  int order, n;      //�޴���ȣ�ͼ��������ϴº��� 
	  void getburger(); //�ܹ���
	  void getside(); //���̵�޴�
	  void getdrink(); //�����
	  void select(int a);//ó���� �޴� ����?
	  ~kiosk(); 
};  
kiosk::kiosk() {};
kiosk::~kiosk() {};

void kiosk::getburger() // �ܹ���
{
	int k;
	for (k = 0; k < 4; k++)
	{
		cout << k + 1 << ". " << burger[k] << endl;
	}
	cout << endl << "�ֹ��� ������ ��ȣ�� ������ �Է����ּ���." << endl;
	cout << "ex-> ������� 2�� : 1 2" << endl;
	cin >> order >> n;

	if (order > 4 || order == 0)
	{
		while (order > 4 || order == 0)
		{
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�." << endl;
			cout << "�ٽ� �������ֽʽÿ�" << endl;
			cin >> order >> n;
		}
	}

	cout << burger[order - 1] << " " << n << "���� �ֹ��Ǿ����ϴ�." << endl;
	//cout << "��� �����Ͻðڽ��ϱ�? ( y or �������� �ƹ� Ű�� �����ּ���.)" << endl;
}
void kiosk::getside()
{
	int k;
	for (k = 0; k < 4; k++)
	{
		cout << k + 1 << ". " << side[k] << endl;
	}
	cout << endl << "�ֹ��� ���̵� �޴��� ��ȣ�� ������ �Է����ּ���." << endl;
	cout << "ex-> ġ�ƽ 2�� : 1 2" << endl;
	cin >> order >> n;

	if (order > 4 || order == 0)
	{
		while (order > 4 || order == 0)
		{
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�." << endl;
			cout << "�ٽ� �������ֽʽÿ�" << endl;
			cin >> order >> n;
		}
	}
	cout << side[order - 1] << " " << n << "���� �ֹ��Ǿ����ϴ�." << endl;
	//cout << "��� �����Ͻðڽ��ϱ�? ( y or �������� �ƹ� Ű�� �����ּ���.)" << endl;
}
void kiosk::getdrink()
{
	int k;
	for (k = 0; k < 4; k++)
	{
		cout << k + 1 << ". " << drink[k] << endl;
	}
	cout << endl << "�ֹ��� ������� ��ȣ�� ������ �Է����ּ���." << endl;
	cout << "ex-> ���̴� 2�� : 1 2" << endl;
	cin >> order >> n;

	if (order > 4 || order == 0)
	{
		while (order > 4 || order == 0)
		{
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�." << endl;
			cout << "�ٽ� �������ֽʽÿ�" << endl;
			cin >> order >> n;
		}
	}

	cout << drink[order - 1] << " " << n << "���� �ֹ��Ǿ����ϴ�." << endl;
}
void kiosk::select(int a)
{
	switch (a)
	{
	case 1:
		getburger();
		break;
	case 2:
		getside();
		break;
	case 3:
		getdrink();
		break;
	}
}
int main()
{
	kiosk one;
	int menunum;
	char keep;
	do
	{
		cout << "======== �޴� �з� ========" << endl;
		cout << "1. �ܹ���" << endl;
		cout << "2. ���̵�" << endl;
		cout << "3. �����" << endl;
		cout << "===========================" << endl;
		cout << endl << "����� �����Ͻðڽ��ϱ� ? " << endl;
		cin >> menunum;

		if (menunum < 1 || menunum>3)
		{
			while (menunum <1 || menunum > 3)
			{
				cout << "�������� �ʴ� �з��� �����ϼ̽��ϴ�." << endl;
				cout << "�ٽ� �������ֽʽÿ�" << endl;
				cin >> menunum;
				if (menunum > 0 || menunum < 4)
					break;
			}
		}
		
		one.select(menunum);
		cout << "��� �����Ͻðڽ��ϱ�? ( y or �������� �ƹ� Ű�� �����ּ���.)" << endl;
		cin >> keep;
	}while (keep == 'y');
}