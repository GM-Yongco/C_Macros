// =======================================================================
// Description     : Code that will impress u ;)
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// =======================================================================

#include <stdio.h>
#include <stdlib.h>
#include "00_macros.h"

enum{
	STRONGLY_DISAGREE,
	DISAGREE,
	AGREE, 
	STRONGLY_AGREE
};

// =======================================================================
// MAIN
// =======================================================================

int main() {

	//switches to the browser then initializes
	alt_tab();
	char_press(VK_TAB); 

	// =======================================================================

	int i, j, score = DISAGREE;
	for(j = 0; j<30; j++){					//30 questions
		for(i = 0; i < score; i++){		//goes to the score of whatever you set
			char_press(VK_RIGHT);
		}
		char_press(VK_RETURN);
	}

	// =======================================================================
	//learning expereince satisfaction

	for(i = 0; i < 0; i++){
		char_press(VK_RIGHT);
	}
	char_press(VK_RETURN);

	// =======================================================================
	//sentences section

	string_press("it was supposed to be an easy minor subject");
	char_press(VK_TAB);
	string_press("better professor");
	char_press(VK_TAB);
	string_press("not so nice *sad*");
	char_press(VK_TAB);

	//the lil yes or no question
	char_press(VK_RIGHT);
	// char_press(VK_LEFT);
	char_press(VK_TAB);

	string_press("no");
	char_press(VK_RETURN);
}