// =======================================================================
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// Description     : to automate the USC ismis evaluation
// =======================================================================

#include <stdio.h>
#include <stdlib.h>

#include <time.h> 
#include "00_macros.h"
#define RANDOM -1

// =======================================================================
// MAIN FUNCTIONS
// =======================================================================


// =======================================================================
// MAIN
// =======================================================================

int main() {
	separator("START");

	alt_tab();
	
	press_string("yes");
	press_char(VK_ESCAPE);

	separator("LOOP START");

	int i;
	for(i = 0; i<300; i++){
		press_char(VK_SPACE);
		Sleep(200);
	}

	separator("END");
	return 0;
}