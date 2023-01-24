#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <string>
#include <graphics.h>

using namespace std;

class Header
{
	public:
		int height;
		int width;
		int homeButtonPosition[4];
		int exitButtonPosition[4];
		POINT cursorPos;
		
	Header(){
		height = GetSystemMetrics(SM_CYSCREEN);
		width = GetSystemMetrics(SM_CXSCREEN);
		initwindow(width, height,"",-3,-3);
		settextstyle(8,0,2);
		this->homeButtonPosition[0] = (this->width/100)*85;
		this->homeButtonPosition[1] = 30;
		this->homeButtonPosition[2] = (this->width/100)*90;
		this->homeButtonPosition[3] = 70;
		this->exitButtonPosition[0] = (this->width/100)*91;
		this->exitButtonPosition[1] = 30;
		this->exitButtonPosition[2] = (this->width/100)*96;
		this->exitButtonPosition[3] = 70;
	}
	
	void ManuBar(int color) {
		rectangle(25,25,this->width - 25,this->height - 25);
		rectangle(25,25,this->width - 25,75);
		floodfill(26,26,color);
		this->button(this->homeButtonPosition[0], this->homeButtonPosition[1], this->homeButtonPosition[2], this->homeButtonPosition[3], 10);
		outtextxy((this->width/100)*85 + 22,40,(char *)"HOME");
		this->button(this->exitButtonPosition[0], this->exitButtonPosition[1], this->exitButtonPosition[2], this->exitButtonPosition[3], 10);
		outtextxy((this->width/100)*91 + 25,40,(char *)"EXIT");
	}
	
	void button(int x1, int y1, int x2, int y2, int radius){
		if(radius*2 > (x2-x1) || radius*2 > (y2-y1)){
			if((y2-y1)>(x2-x1)) {
				radius = (x2 - x1)/2;	
			}
			else{
				radius = (y2 - y1)/2;
			}
		}
		
//		left line
		line(x1, y1 + radius,x1, y2 - radius);
//		top left arc
		arc(x1 + radius, y1 + radius, 90, 180, radius);
//		top line
		line(x1 + radius, y1, x2 - radius, y1);
//		top right arc
		arc(x2 - radius, y1 + radius, 0, 90, radius);
//		right line
		line(x2, y1 + radius, x2, y2 - radius);
//		botton right arc
		arc(x2 - radius, y2 - radius, 270, 360, radius);
//		bottom line
		line(x1 + radius, y2, x2 - radius, y2);
//		bottom left arc
		arc(x1 + radius, y2 - radius, 180, 270, radius);
	}
};
