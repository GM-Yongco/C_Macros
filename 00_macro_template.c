// =======================================================================
// Description     : Code that will impress u ;)
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// =======================================================================

#include <Windows.h>
#include <stdio.h>

#include <string.h>
#include <ctype.h>
// a bit of overhead from the unecessary functions but should be g

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

void string_press(const char *str) {
	Sleep(100);
	int i;
	for(i = 0; i < strlen(str); i++){
		keybd_event(toupper(str[i]), 0, 0, 0);
		keybd_event(toupper(str[i]), 0, KEYEVENTF_KEYUP, 0);
	}
}

// =======================================================================
// MAIN
// =======================================================================

int main() {
	alt_tab();

	string_press("kill me now");
}