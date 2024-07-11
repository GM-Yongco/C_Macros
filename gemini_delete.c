// =======================================================================
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// Description     : Uses tabs to navigate the website UI and other keyboard inputs to delte a chat
// 		useless and stopped development cuz i realized theres a delete all chats option 
// =======================================================================

#include <stdio.h>
#include <stdlib.h>

#include <time.h> 
#include "00_macros.h"
#define RANDOM -1

// =======================================================================
// SPECIFIC FUNCTIONS
// =======================================================================

void burger_delete(){
	Sleep(DELAY_MS);
	//goes up and down to initialize the selection
	press_char(VK_UP);
	press_char(VK_DOWN);

	//goes to the appropriate button
	int i;
	keybd_event(VK_DOWN, 0, 0, 0);
	keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_DOWN, 0, 0, 0);
	keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);

	//selects delete
	keybd_event(VK_RETURN, 0, 0, 0);
	keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);

	//confirm delete
	//goes to the appropriate button
	keybd_event(VK_TAB, 0, 0, 0);
	keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_TAB, 0, 0, 0);
	keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_TAB, 0, 0, 0);
	keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);

	//selects delete
	keybd_event(VK_RETURN, 0, 0, 0);
	keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
}

// =======================================================================
// MAIN
// =======================================================================

int main() {
	separator("START");

	alt_tab();				//switches to the browser 
	ctrl_char(0x52);		//refreshes the page (ctrl + r)

	Sleep(20000);			//wait for the refresh
	separator("SLEEP DONE");

	//initial burger
	int i;
	for(i = 0; i<11; i++){
		press_char(VK_TAB);
	}
	press_char(VK_RETURN);
	separator("BURGER SELCTED");

	burger_delete();



	separator("END");
	return 0;
}
