#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <string>
#include <graphics.h>
#include "Header.cpp"
#include "Lists.cpp"

using namespace std;

class HomePage
{
	public:
		POINT cursorPos;
		Header head;
		Lists list;
	HomePage(){
	}
	
	void home() {
		cleardevice();
		head.ManuBar(0);
		while(1) {
			GetCursorPos(&head.cursorPos);
			if(GetAsyncKeyState(VK_LBUTTON)){
//				home button click action
				if((head.cursorPos.x > head.homeButtonPosition[0] && head.cursorPos.x < head.homeButtonPosition[2]) && (head.cursorPos.y > head.homeButtonPosition[1] && head.cursorPos.y < head.homeButtonPosition[3])) {
					list.listPage();
					break;
				}
//				exit button click action
				if((head.cursorPos.x > head.exitButtonPosition[0] && head.cursorPos.x < head.exitButtonPosition[2]) && (head.cursorPos.y > head.exitButtonPosition[1] && head.cursorPos.y < head.exitButtonPosition[3])) {
//					this->exitPage();
					break;
				}
				break;
			}
			if(GetAsyncKeyState(VK_RBUTTON)){
				break;
			}
			delay(100);
		}
	}

};
