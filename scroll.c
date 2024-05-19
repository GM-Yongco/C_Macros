// =======================================================================
// Description     : Code that will impress u ;)
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// =======================================================================

#include <stdio.h>
#include "00_macros.h"

void custom_loop(){
	int i;
	for(i = 1; i<10000; i++){
		Sleep(1000);
		char_press(VK_DOWN);	//enter key for confirm resubmission if ever
	}
}

// =======================================================================
// MAIN
// =======================================================================

int main() {
	alt_tab();
	custom_loop();

	return 0;
}