// =======================================================================
// Description     : Code I often used for macros
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// =======================================================================

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>

typedef enum{FALSE, TRUE}BOOLEAN;

typedef unsigned char BYTE;
#define DELAY_MS 100

// =======================================================================
// MISC FUNCTIONS
// =======================================================================

void separator(char* message){
	int count = 55; 				//additional 5 for the (\n)s and the \0
	char new_string[count];

	memset(new_string, '-', count);

	new_string[0] = '\n';
	new_string[1] = '\n';
	new_string[count-2] = '\n';
	new_string[count-3] = '\n';
	new_string[count-1] = '\0';

	memcpy(new_string + 2, message, strlen(message));
	new_string[strlen(message) + 2] = ' ';

	printf("%s", new_string);
}

// =======================================================================
// CORE FUNCTIONS 1
// =======================================================================

void alt_tab(){
	Sleep(DELAY_MS);
	keybd_event(VK_MENU, 0, 0, 0);
	keybd_event(VK_TAB, 0, 0, 0);
	keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);

	printf("\nalt tabbed");
}

void ctrl_char(BYTE virtualKeyCode){
	Sleep(DELAY_MS);
	keybd_event(VK_CONTROL, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
	
	printf("\nctrl +\tkey pressed", virtualKeyCode);
}

void shift_char(BYTE virtualKeyCode){
	Sleep(DELAY_MS);
	keybd_event(VK_SHIFT, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	
	printf("\nctrl +\tkey pressed", virtualKeyCode);
}

void char_press(BYTE virtualKeyCode){
	Sleep(DELAY_MS);
	keybd_event(virtualKeyCode, 0, 0, 0);
	keybd_event(virtualKeyCode, 0, KEYEVENTF_KEYUP, 0);
}

void string_press(char *str) {
	Sleep(DELAY_MS);
	int i;
	for(i = 0; i < strlen(str); i++){
		//the ascii upper case has thesame value as the virtual key code for letters
		//use shift char for the capital letters
		keybd_event(toupper(str[i]), 0, 0, 0);
		keybd_event(toupper(str[i]), 0, KEYEVENTF_KEYUP, 0);
	}
	printf("\ntyped: %s", str);
}
