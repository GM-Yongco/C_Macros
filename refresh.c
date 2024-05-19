// =======================================================================
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// Description     : to refresh the first n tabs of your browser
// =======================================================================

#include <stdio.h>
#include "00_macros.h"

// =======================================================================
// FUNCTIONS
// =======================================================================

void custom_loop(int n_of_tabs){
	int i;
	for(i = 1; i<7; i++){
		ctrl_char(0x30 + i);	//ctrl + n for specific tab; n is an int
		ctrl_char(0x52);		//ctrl + R
		press_char(VK_RETURN);	
		//enter key for confirm resubmission if ever
		//mostly for sites that need submissions; usually ran into this cuz was made for ISMIS
	}
}

// =======================================================================
// MAIN
// =======================================================================

int main() {
	alt_tab();
	custom_loop(8);

	return 0;
}