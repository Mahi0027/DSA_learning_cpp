#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <string>
#include <graphics.h>
#include "Execution.cpp"

using namespace std;

class Lists
{
	public:
		Header header;
//		Home home;
		Execution execution;
		char *majorTopic[11] = {"Array","String","Stack","Queue","Linked List","Binary Tree","Binary Search Tree","Heap","Hashing","Graph","Matrix"};
		POINT cursorPos;
	Lists(){
	}
	
	void listPage(){
		cleardevice();
		header.ManuBar(0);
		cout<<"sdf"<<endl;
		vector<vector<int> > dimentions;
		vector<int> coordinates;
		settextstyle(8,0,4);
		for(int i=0;i<11;i++) {
			outtextxy(200,130+i*75,(char *)this->majorTopic[i]);
			coordinates.push_back(200);
			coordinates.push_back(130+i*75);
			coordinates.push_back(800);
			coordinates.push_back(130+(i+1)*75);
			dimentions.push_back(coordinates);
			coordinates.clear();
		}
		settextstyle(8,0,2);
		while(1){
			GetCursorPos(&this->cursorPos);
			if(GetAsyncKeyState(VK_LBUTTON)){
				cleardevice();
				header.ManuBar(0);
				if((this->cursorPos.x > dimentions[0][0] && this->cursorPos.x < dimentions[0][2])  && (this->cursorPos.y > dimentions[0][1] && this->cursorPos.y < dimentions[0][3])) {		
					execution.arrayDS();
					break;
				}
				if((this->cursorPos.x > dimentions[1][0] && this->cursorPos.x < dimentions[1][2])  && (this->cursorPos.y > dimentions[1][1] && this->cursorPos.y < dimentions[1][3])) {
					execution.stringDS();
					break;
				}
				if((this->cursorPos.x > dimentions[2][0] && this->cursorPos.x < dimentions[2][2])  && (this->cursorPos.y > dimentions[2][1] && this->cursorPos.y < dimentions[2][3])) {
					execution.stackDS();
					break;
				}
				if((this->cursorPos.x > dimentions[3][0] && this->cursorPos.x < dimentions[3][2])  && (this->cursorPos.y > dimentions[3][1] && this->cursorPos.y < dimentions[3][3])) {
					execution.queueDS();
					break;
				}
				if((this->cursorPos.x > dimentions[4][0] && this->cursorPos.x < dimentions[4][2])  && (this->cursorPos.y > dimentions[4][1] && this->cursorPos.y < dimentions[4][3])) {
					execution.linkedListDS();
					break;
				}
//				if((this->cursorPos.x > dimentions[5][0] && this->cursorPos.x < dimentions[5][2])  && (this->cursorPos.y > dimentions[5][1] && this->cursorPos.y < dimentions[5][3])) {
//					execution.binaryTreeDS();
//					break;
//				}
//				if((this->cursorPos.x > dimentions[6][0] && this->cursorPos.x < dimentions[6][2])  && (this->cursorPos.y > dimentions[6][1] && this->cursorPos.y < dimentions[6][3])) {
//					execution.binarySearchTreeDS();
//					break;
//				}
//				if((this->cursorPos.x > dimentions[7][0] && this->cursorPos.x < dimentions[7][2])  && (this->cursorPos.y > dimentions[7][1] && this->cursorPos.y < dimentions[7][3])) {
//					execution.heapDS();
//					break;
//				}
//				if((this->cursorPos.x > dimentions[8][0] && this->cursorPos.x < dimentions[8][2])  && (this->cursorPos.y > dimentions[8][1] && this->cursorPos.y < dimentions[8][3])) {
//					execution.hashingDS();
//					break;
//				}
//				if((this->cursorPos.x > dimentions[9][0] && this->cursorPos.x < dimentions[9][2])  && (this->cursorPos.y > dimentions[10][1] && this->cursorPos.y < dimentions[9][3])) {
//					execution.graphDS();
//					break;
//				}
//				if((this->cursorPos.x > dimentions[10][0] && this->cursorPos.x < dimentions[10][2])  && (this->cursorPos.y > dimentions[11][1] && this->cursorPos.y < dimentions[10][3])) {
//					execution.matrixDS();
//					break;
//				}
////				home button click
//				if((this->cursorPos.x > this->homeButtonPosition[0] && this->cursorPos.x < this->homeButtonPosition[2]) && (this->cursorPos.y > this->homeButtonPosition[1] && this->cursorPos.y < this->homeButtonPosition[3])) {
////					home.home();
//					break;
//				}
////				exit button click action
//				if((this->cursorPos.x > this->exitButtonPosition[0] && this->cursorPos.x < this->exitButtonPosition[2]) && (this->cursorPos.y > this->exitButtonPosition[1] && this->cursorPos.y < this->exitButtonPosition[3])) {
//					break;
//				}
			}
			if(GetAsyncKeyState(VK_RBUTTON)){
				break;
			}
			delay(100);
		}
	}
};
