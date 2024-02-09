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

void shift_char(BYTE virtualKeyCode){
	Sleep(100);
	keybd_event(VK_SHIFT, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	
	printf("ctrl +\tkey pressed \n", virtualKeyCode);
}

void char_press(BYTE virtualKeyCode){
	Sleep(100);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);

	printf("some - \tkey pressed\n");
}

void string_press(const char *str) {
	Sleep(100);
	int i;
	for(i = 0; i < strlen(str); i++){
		//the ascii upper case has thesame value as the virtual key code for letters
		keybd_event(toupper(str[i]), 0, 0, 0);
		keybd_event(toupper(str[i]), 0, KEYEVENTF_KEYUP, 0);
	}
}


void custom_loop(){
	// this function spells
	// "https://chat.openai.com/"

	string_press("https");

	//these for the "://"
	shift_char(VK_OEM_1);
	char_press(VK_OEM_2);
	char_press(VK_OEM_2);

	string_press("chat");
	char_press(VK_OEM_PERIOD);

	string_press("openai");
	char_press(VK_OEM_PERIOD);

	string_press("com");
	char_press(VK_OEM_2);
}


// =======================================================================
// MAIN
// =======================================================================

int main() {
	alt_tab();
	ctrl_char(0x54); 		// ctrl + t
	ctrl_char(0x31); 		// ctrl + 1
	ctrl_char(0x57); 		// ctrl + w

	custom_loop();

	char_press(VK_RETURN);

	return 0;
}