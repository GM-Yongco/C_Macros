// =======================================================================
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// Description     : Uses tabs to navigate the website UI and other keyboard inputs to delte a chat
// 		useless and stopped development cuz i realized theres a delete all chats option 
// =======================================================================

#include <Windows.h>
#include <stdio.h>

typedef unsigned char BYTE;

// =======================================================================
// FUNCTIONS
// =======================================================================

void alt_tab(){
	Sleep(100);
	keybd_event(VK_MENU, 0, 0, 0);
	keybd_event(VK_TAB, 0, 0, 0);
	keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);

	printf("alt tabbed\n");
}

void ctrl_char(BYTE virtualKeyCode){
	Sleep(100);
	keybd_event(VK_CONTROL, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
	
	printf("ctrl +\tkey pressed \n", virtualKeyCode);
}

void char_press(BYTE virtualKeyCode){
	Sleep(100);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
}

// =======================================================================
// SPECIFIC FUNCTIONS
// =======================================================================

void select_first_chat(){
	int i;
	for(i = 0; i<8; i++){
		char_press(VK_TAB);
	}
	char_press(VK_RETURN);
}

void select_burger(){
	int i;
	for(i = 0; i<10; i++){
		char_press(VK_TAB);
	}
	char_press(VK_RETURN);
}

void delete(){
	int i;
	for(i = 0; i<2; i++){
		char_press(VK_DOWN);
	}
	char_press(VK_RETURN);
	char_press(VK_RETURN);
}

// =======================================================================
// MAIN
// =======================================================================

int main() {
	
	alt_tab();

	int i = 0;
	for(i = 0; i<20; i++){
		select_first_chat();

		Sleep(1000);

		select_burger();
		delete();

		Sleep(2000);
	}
	return 0;
}