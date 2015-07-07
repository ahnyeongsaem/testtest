#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
#include<deque>
#include<iomanip>
#include<cmath>
#include<Windows.h>
using namespace std;

// InputKey and MouseClick value define
#define InputKey(keyCode) keybd_event(keyCode, 0, 0, 0), keybd_event(keyCode, 0, KEYEVENTF_KEYUP, 0)
#define ASCII_ZERO 0x30
#define KEY_PRESS 0x8000
#define KEY_PRESSING 0x0001

// Program Status
#define STATUS_NONE 0
#define STATUS_ON 1
#define STATUS_OFF 2

int main()
{
	int number = 1;
	int digit[3];
	int i;
	int Status = STATUS_NONE;

	int a;
	cout << a;
	if (a == 1)
	{
		


	}
	else if (a == 2)
	{
		cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO";
	}
	else if (a == 3)
	{

	}
	else if (a == 4)
	{

	}
	else if (a == 5)
	{

	}
	else if (a == 6)
	{
		puts("Press F6 Key to enable program");
		puts("Press F7 Key to disable program");

		while (1)
		{
			SHORT nowInput1 = GetAsyncKeyState(VK_F6); // F6 Key means 'Enable'
			if ((nowInput1 & KEY_PRESS) && (nowInput1 & KEY_PRESSING) && (Status == STATUS_NONE))
			{
				printf("You pressed F6 Key (Status : Enable)\n");
				Status = STATUS_ON;
			}
			if ((nowInput1 & KEY_PRESS) && (nowInput1 & KEY_PRESSING) && (Status == STATUS_OFF))
			{
				printf("You pressed F6 Key (Status : Enable)\n");
				Status = STATUS_ON;
			}

			if (Status == STATUS_ON) {

				SHORT nowInput2 = GetAsyncKeyState(VK_F7);

				for (i = 1; i <= 999; i++) {
					SHORT nowInput2 = GetAsyncKeyState(VK_F7);
					if ((nowInput2 & KEY_PRESS) && (nowInput2 & KEY_PRESSING))
					{
						printf("You pressed F7 Key (Status : Disable)\n");
						number = 0;
						Status = STATUS_OFF;
						break;
					}

					digit[0] = (number / 100) + ASCII_ZERO;
					digit[1] = (number % 100 / 10) + ASCII_ZERO;
					digit[2] = (number % 100 % 10) + ASCII_ZERO;

					if (number < 10) {
						InputKey(digit[2]);
					}

					if (number >= 10 && number < 100) {
						InputKey(digit[1]);
						InputKey(digit[2]);
					}

					if (number >= 100 && number < 1000) {
						InputKey(digit[0]);
						InputKey(digit[1]);
						InputKey(digit[2]);
					}
					InputKey(VK_RETURN);
					number++;
					Sleep(50);
				}
			}
		}

		return 0;
	}
	else if (a == 7)
	{

	}
	else if (a == 8)
	{

	}
	else if (a == 9)
	{
		HWND hWnd; /*API를 배웠다면 더 쉽겠지만 API에서는 windows함수들을 제어할때 쓸 Handle이라는 변수(?)가 필요합니다.고로 윈도우 핸들을 선언한거죠*/
    hWnd=FindWindow("ConsoleWindowClass",NULL);/*클레스 Name을 정의해준다.(프로그램 상단위에 보여지는 Program Name과 코딩작업 내에서 불려지는 Class Name으로 나뉘어지는데 이때 Class Name을 정해준다.)*/
    HDC hdc;/*API에서는 도형이나 그림등 화면출력에 필요한 부분을 hdc라는 것을 통해서 하게 되는데

이 hdc또한 위에서 봤듯이 핸들중에 하나이며(앞에 h가 붙으면 헨들)부를때는 DC핸들이라고 한다.무튼 우리는 이 DC핸들을 도화지라고 생각해주면 된다.*/
    for(;;){
    hdc=GetDC(hWnd);/*DC핸들을 사용할 준비작업중에 하나로 윈도우 핸들에서부터 DC를 받아 hdc에 저장한다.*/
    Ellipse(hdc,10,10,100,100);/*원을 그리는 함수로 hdc라는 도화지위에 X좌표10 Y좌표 10에서부터 X좌표100 Y좌표 100까지 원을 그린다.(이때 한칸 한칸은 한 픽셀의 Size이다.)*/
    ReleaseDC(hWnd,hdc);/*API에서는 DC를 사용하고 난뒤에는 ReleaseDC를 통하여 DC를 제거해 줘야한다.(당연히 제거된후에는 hdc를 사용불가능한다.)*/
    Sleep(10);/*그려진후 0.01초가량 정지한다.*/
    }


	}
	else if (a == 10)
	{

	}
	else if (a == 11)
	{
		cout << "빼애애애애애애애ㅐㅇㄱ!!" << endl;
	}




}