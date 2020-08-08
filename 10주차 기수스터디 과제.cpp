#include<iostream>
#include<vector>
#include<string>
using namespace std;

class kiosk {

private: 
vector<string> burger = { "새우버거", "불고기버거", "싸이버거", "딥치즈버거" }; 
vector<string> side = { "치즈스틱","감자튀김","샐러드","아이스크림" }; 
vector<string> drink = { "사이다","콜라","환타","오렌지주스" };

public: kiosk(); 
	  int order, n;      //메뉴번호와수량저장하는변수 
	  void getburger(); //햄버거
	  void getside(); //사이드메뉴
	  void getdrink(); //음료수
	  void select(int a);//처음에 메뉴 선택?
	  ~kiosk(); 
};  
kiosk::kiosk() {};
kiosk::~kiosk() {};

void kiosk::getburger() // 햄버거
{
	int k;
	for (k = 0; k < 4; k++)
	{
		cout << k + 1 << ". " << burger[k] << endl;
	}
	cout << endl << "주문할 버거의 번호와 수량을 입력해주세요." << endl;
	cout << "ex-> 새우버거 2개 : 1 2" << endl;
	cin >> order >> n;

	if (order > 4 || order == 0)
	{
		while (order > 4 || order == 0)
		{
			cout << "존재하지 않는 메뉴를 선택하셨습니다." << endl;
			cout << "다시 선택해주십시오" << endl;
			cin >> order >> n;
		}
	}

	cout << burger[order - 1] << " " << n << "개가 주문되었습니다." << endl;
	//cout << "계속 선택하시겠습니까? ( y or 끝내려면 아무 키나 눌러주세요.)" << endl;
}
void kiosk::getside()
{
	int k;
	for (k = 0; k < 4; k++)
	{
		cout << k + 1 << ". " << side[k] << endl;
	}
	cout << endl << "주문할 사이드 메뉴의 번호와 수량을 입력해주세요." << endl;
	cout << "ex-> 치즈스틱 2개 : 1 2" << endl;
	cin >> order >> n;

	if (order > 4 || order == 0)
	{
		while (order > 4 || order == 0)
		{
			cout << "존재하지 않는 메뉴를 선택하셨습니다." << endl;
			cout << "다시 선택해주십시오" << endl;
			cin >> order >> n;
		}
	}
	cout << side[order - 1] << " " << n << "개가 주문되었습니다." << endl;
	//cout << "계속 선택하시겠습니까? ( y or 끝내려면 아무 키나 눌러주세요.)" << endl;
}
void kiosk::getdrink()
{
	int k;
	for (k = 0; k < 4; k++)
	{
		cout << k + 1 << ". " << drink[k] << endl;
	}
	cout << endl << "주문할 음료수의 번호와 수량을 입력해주세요." << endl;
	cout << "ex-> 사이다 2개 : 1 2" << endl;
	cin >> order >> n;

	if (order > 4 || order == 0)
	{
		while (order > 4 || order == 0)
		{
			cout << "존재하지 않는 메뉴를 선택하셨습니다." << endl;
			cout << "다시 선택해주십시오" << endl;
			cin >> order >> n;
		}
	}

	cout << drink[order - 1] << " " << n << "개가 주문되었습니다." << endl;
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
		cout << "======== 메뉴 분류 ========" << endl;
		cout << "1. 햄버거" << endl;
		cout << "2. 사이드" << endl;
		cout << "3. 음료수" << endl;
		cout << "===========================" << endl;
		cout << endl << "몇번을 선택하시겠습니까 ? " << endl;
		cin >> menunum;

		if (menunum < 1 || menunum>3)
		{
			while (menunum <1 || menunum > 3)
			{
				cout << "존재하지 않는 분류를 선택하셨습니다." << endl;
				cout << "다시 선택해주십시오" << endl;
				cin >> menunum;
				if (menunum > 0 || menunum < 4)
					break;
			}
		}
		
		one.select(menunum);
		cout << "계속 선택하시겠습니까? ( y or 끝내려면 아무 키나 눌러주세요.)" << endl;
		cin >> keep;
	}while (keep == 'y');
}