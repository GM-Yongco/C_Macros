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

	printf("\nalt tabbed");
}

void ctrl_char(BYTE virtualKeyCode){
	Sleep(100);
	keybd_event(VK_CONTROL, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
	
	printf("\nctrl +\tkey pressed", virtualKeyCode);
}

void shift_char(BYTE virtualKeyCode){
	Sleep(100);
	keybd_event(VK_SHIFT, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	
	printf("\nctrl +\tkey pressed", virtualKeyCode);
}

void char_press(BYTE virtualKeyCode){
	Sleep(100);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
}

void string_press(char *str) {
	Sleep(100);
	int i;
	for(i = 0; i < strlen(str); i++){
		//the ascii upper case has thesame value as the virtual key code for letters
		keybd_event(toupper(str[i]), 0, 0, 0);
		keybd_event(toupper(str[i]), 0, KEYEVENTF_KEYUP, 0);
	}

	printf("\ntyped: %s", str);
}
