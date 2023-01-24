#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <string>
#include <graphics.h>
#include "Home.cpp"
//#include "Lists.cpp"
//#include "Execution.cpp"

using namespace std;

////class DataStructure 
////{
////	public:
////		int height;
////		int width;
////	DataStructure() {
////		height = GetSystemMetrics(SM_CYSCREEN);
////		width = GetSystemMetrics(SM_CXSCREEN);
////	}
////	void header() {
////		rectangle(25,25,this->width - 25,this->height - 25);
////		rectangle(25,25,this->width - 25,75);
////		floodfill(26,26,0);
////		this->button(this->homeButtonPosition[0], this->homeButtonPosition[1], this->homeButtonPosition[2], this->homeButtonPosition[3], 10);
////		outtextxy((this->width/100)*85 + 22,40,"HOME");
////		this->button(this->exitButtonPosition[0], this->exitButtonPosition[1], this->exitButtonPosition[2], this->exitButtonPosition[3], 10);
////		outtextxy((this->width/100)*91 + 25,40,"EXIT");
////	}
////	
////	void linearSearch() {
////		outtextxy(100,500,"Linear Search");
////	}
////	
////	void array() {
////		outtextxy(100,500,"Array");
////	}
////	void string() {
////		outtextxy(100,500,"String");
////	}
////	
////	void stack() {
////		outtextxy(100,500,"Stack");
////	}
////	void queue() {
////		outtextxy(100,500,"Queue");
////	}
////	void linkedList() {
////		outtextxy(100,500,"Linked List");
////	}
////	void binaryTree() {
////		outtextxy(100,500,"Binary Tree");
////	}
////	void binarySearchTree() {
////		outtextxy(100,500,"Binary Search Tree");
////	}
////	void heap() {
////		outtextxy(100,500,"Heap");
////	}
////	void hashing() {
////		outtextxy(100,500,"Hashing");
////	}
////	void graph() {
////		outtextxy(100,500,"Graph");
////	}
////	void matrix() {
////		outtextxy(100,500,"Matrix");
////	}
////};
//
//class Display
//{
//	public:
//		int height;
//		int width;
//		int homeButtonPosition[4];
//		int exitButtonPosition[4];
////		char *majorTopic[11] = {"Array","String","Stack","Queue","Linked List","Binary Tree","Binary Search Tree","Heap","Hashing","Graph","Matrix"};
//		POINT cursorPos;
////		void linearSearch();
////		void array();
////		void string();
////		void stack();
////		void queue();
////		void linkedList();
////		void binaryTree();
////		void binarySearchTree();
////		void heap();
////		void hashing();
////		void graph();
////		void matrix();
//		
//	Display(){
//		height = GetSystemMetrics(SM_CYSCREEN);
//		width = GetSystemMetrics(SM_CXSCREEN);
//		initwindow(width, height,"",-3,-3);
//		this->homeButtonPosition[0] = (this->width/100)*85;
//		this->homeButtonPosition[1] = 30;
//		this->homeButtonPosition[2] = (this->width/100)*90;
//		this->homeButtonPosition[3] = 70;
//		this->exitButtonPosition[0] = (this->width/100)*91;
//		this->exitButtonPosition[1] = 30;
//		this->exitButtonPosition[2] = (this->width/100)*96;
//		this->exitButtonPosition[3] = 70;
//	}
//	
////	void header(int color) {
////		rectangle(25,25,this->width - 25,this->height - 25);
////		rectangle(25,25,this->width - 25,75);
////		floodfill(26,26,color);
////		this->button(this->homeButtonPosition[0], this->homeButtonPosition[1], this->homeButtonPosition[2], this->homeButtonPosition[3], 10);
////		outtextxy((this->width/100)*85 + 22,40,"HOME");
////		this->button(this->exitButtonPosition[0], this->exitButtonPosition[1], this->exitButtonPosition[2], this->exitButtonPosition[3], 10);
////		outtextxy((this->width/100)*91 + 25,40,"EXIT");
////	}
//	
////	void button(int x1, int y1, int x2, int y2, int radius){
//		if(radius*2 > (x2-x1) || radius*2 > (y2-y1)){
//			if((y2-y1)>(x2-x1)) {
//				radius = (x2 - x1)/2;	
//			}
//			else{
//				radius = (y2 - y1)/2;
//			}
//		}
//		
////		left line
//		line(x1, y1 + radius,x1, y2 - radius);
////		top left arc
//		arc(x1 + radius, y1 + radius, 90, 180, radius);
////		top line
//		line(x1 + radius, y1, x2 - radius, y1);
////		top right arc
//		arc(x2 - radius, y1 + radius, 0, 90, radius);
////		right line
//		line(x2, y1 + radius, x2, y2 - radius);
////		botton right arc
//		arc(x2 - radius, y2 - radius, 270, 360, radius);
////		bottom line
//		line(x1 + radius, y2, x2 - radius, y2);
////		bottom left arc
//		arc(x1 + radius, y2 - radius, 180, 270, radius);
//	}
//	
//	void mouseAction() {
//		while(1) {
//			GetCursorPos(&this->cursorPos);
//			if(GetAsyncKeyState(VK_LBUTTON)){
////				home button click action
//				if((this->cursorPos.x > this->homeButtonPosition[0] && this->cursorPos.x < this->homeButtonPosition[2]) && (this->cursorPos.y > this->homeButtonPosition[1] && this->cursorPos.y < this->homeButtonPosition[3])) {
//					this->homePage();
//					break;
//				}
////				exit button click action
//				if((this->cursorPos.x > this->exitButtonPosition[0] && this->cursorPos.x < this->exitButtonPosition[2]) && (this->cursorPos.y > this->exitButtonPosition[1] && this->cursorPos.y < this->exitButtonPosition[3])) {
////					this->exitPage();
//					break;
//				}
//				break;
//			}
//			if(GetAsyncKeyState(VK_RBUTTON)){
//				break;
//			}
//			delay(100);
//		}
//	}
//	
//	void homePage() {
//		vector<vector<int> > dimentions;
//		vector<int> coordinates;
//		cleardevice();
//		this->header(0);
//		settextstyle(8,0,4);
//		for(int i=0;i<11;i++) {
//			outtextxy(200,130+i*75,this->majorTopic[i]);
//			coordinates.push_back(200);
//			coordinates.push_back(130+i*75);
//			coordinates.push_back(800);
//			coordinates.push_back(130+(i+1)*75);
//			dimentions.push_back(coordinates);
//			coordinates.clear();
//		}
//		settextstyle(8,0,2);
//		while(1){
//			GetCursorPos(&this->cursorPos);
//			if(GetAsyncKeyState(VK_LBUTTON)){
//				if((this->cursorPos.x > dimentions[0][0] && this->cursorPos.x < dimentions[0][2])  && (this->cursorPos.y > dimentions[0][1] && this->cursorPos.y < dimentions[0][3])) {
//					this->arrayDS();
//					break;
//				}
//				if((this->cursorPos.x > dimentions[1][0] && this->cursorPos.x < dimentions[1][2])  && (this->cursorPos.y > dimentions[1][1] && this->cursorPos.y < dimentions[1][3])) {
//					this->stringDS();
//				}
//				if((this->cursorPos.x > dimentions[2][0] && this->cursorPos.x < dimentions[2][2])  && (this->cursorPos.y > dimentions[2][1] && this->cursorPos.y < dimentions[2][3])) {
//					this->stackDS();
//				}
//				if((this->cursorPos.x > dimentions[3][0] && this->cursorPos.x < dimentions[3][2])  && (this->cursorPos.y > dimentions[3][1] && this->cursorPos.y < dimentions[3][3])) {
//					this->queueDS();
//				}
//				if((this->cursorPos.x > dimentions[4][0] && this->cursorPos.x < dimentions[4][2])  && (this->cursorPos.y > dimentions[4][1] && this->cursorPos.y < dimentions[4][3])) {
//					this->linkedListDS();
//				}
//				if((this->cursorPos.x > dimentions[5][0] && this->cursorPos.x < dimentions[5][2])  && (this->cursorPos.y > dimentions[5][1] && this->cursorPos.y < dimentions[5][3])) {
//					this->binaryTreeDS();
//				}
//				if((this->cursorPos.x > dimentions[6][0] && this->cursorPos.x < dimentions[6][2])  && (this->cursorPos.y > dimentions[6][1] && this->cursorPos.y < dimentions[6][3])) {
//					this->binarySearchTreeDS();
//				}
//				if((this->cursorPos.x > dimentions[7][0] && this->cursorPos.x < dimentions[7][2])  && (this->cursorPos.y > dimentions[7][1] && this->cursorPos.y < dimentions[7][3])) {
//					this->heapDS();
//				}
//				if((this->cursorPos.x > dimentions[8][0] && this->cursorPos.x < dimentions[8][2])  && (this->cursorPos.y > dimentions[8][1] && this->cursorPos.y < dimentions[8][3])) {
//					this->hashingDS();
//				}
//				if((this->cursorPos.x > dimentions[9][0] && this->cursorPos.x < dimentions[9][2])  && (this->cursorPos.y > dimentions[10][1] && this->cursorPos.y < dimentions[9][3])) {
//					this->graphDS();
//				}
//				if((this->cursorPos.x > dimentions[10][0] && this->cursorPos.x < dimentions[10][2])  && (this->cursorPos.y > dimentions[11][1] && this->cursorPos.y < dimentions[10][3])) {
//					this->matrixDS();
//				}
////				home button click
//				if((this->cursorPos.x > this->homeButtonPosition[0] && this->cursorPos.x < this->homeButtonPosition[2]) && (this->cursorPos.y > this->homeButtonPosition[1] && this->cursorPos.y < this->homeButtonPosition[3])) {
//					this->homePage();
//				}
////				exit button click action
//				if((this->cursorPos.x > this->exitButtonPosition[0] && this->cursorPos.x < this->exitButtonPosition[2]) && (this->cursorPos.y > this->exitButtonPosition[1] && this->cursorPos.y < this->exitButtonPosition[3])) {
//					break;
//				}
//			}
//			if(GetAsyncKeyState(VK_RBUTTON)){
//				break;
//			}
//			delay(100);
//		}
//	}
//	
//	void exitPage() {
//		cleardevice();
//		this->header(0);
//		outtextxy(500,500,"Exit Page");
//		this->mouseAction();
//	}
//	
//	void linearSearchDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Linear Search");
//		this->mouseAction();
//	}
//	
//	void aaa() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"donnnnnnneeeeee");
//		while(1) {
//			GetCursorPos(&this->cursorPos);
//			if(GetAsyncKeyState(VK_LBUTTON)){
//				break;
//			}
//		}
//	}
//	void arrayDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Array");
//		cout<<"1"<<endl;
////		this->mouseAction();
//		while(1){
//			GetCursorPos(&this->cursorPos);
//			if(GetAsyncKeyState(VK_LBUTTON)) {
//				this->aaa();
//				break;
//			}
//			
//		} 
//		cout<<"2"<<endl;
//	}
//	void stringDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"String");
//		this->mouseAction();
//	}
//	
//	void stackDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Stack");
//		this->mouseAction();
//	}
//	void queueDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Queue");
//		this->mouseAction();
//	}
//	void linkedListDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Linked List");
//		this->mouseAction();
//	}
//	void binaryTreeDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Binary Tree");
//		this->mouseAction();
//	}
//	void binarySearchTreeDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Binary Search Tree");
//		this->mouseAction();
//	}
//	void heapDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Heap");
//		this->mouseAction();
//	}
//	void hashingDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Hashing");
////		this->mouseAction();
//	}
//	void graphDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Graph");
//		this->mouseAction();
//	}
//	void matrixDS() {
//		cleardevice();
//		this->header(0);
//		outtextxy(100,500,"Matrix");
//		this->mouseAction();
//	}
//	
//	~Display(){
//		closegraph();
//	}
//};

int main(int argc, char** argv) {
	enum Color {BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY, LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE};
	
//	Display obj;
	Color color = BLACK;
	
	
	HomePage home_page;
	home_page.home();
	cout<<"done"<<endl;
//	obj.header(0);
//	obj.mouseAction();
	return 0;
}
