// =======================================================================
// Description     : to automate the USC ismis evaluation
// Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
// Date            : ur my date uwu
// =======================================================================

#include <stdio.h>
#include <stdlib.h>

#include <time.h> 
#include "00_macros.h"
#define RANDOM -1

// =======================================================================
// FUNCTIONS
// =======================================================================


void part_1(int score){
	int i, j, PART_MAX = 4;
	BOOLEAN randomize = FALSE;
	if(score == RANDOM){
		randomize = TRUE;
	}
	
	for(j = 0; j<30; j++){//30 questions					
		//randomize feature
		if(randomize == TRUE){
			score = (rand()%PART_MAX) + 1;
		}
		//initializes navigation
		char_press(VK_RIGHT);
		char_press(VK_LEFT);
		//picks the score
		for(i = 0; 
			i < (score - 1) && i<PART_MAX; 
			i++){
			char_press(VK_RIGHT);
		}
		char_press(VK_RETURN);
	}
}

// =======================================================================

void part_2(int score){						//learning expereince satisfaction thingy
	int i, PART_MAX = 10;
	BOOLEAN randomize = FALSE;
	if(score == RANDOM){
		randomize = TRUE;
	}
	//randomize feature
	if(randomize == TRUE){
		score = (rand()%PART_MAX) + 1;
	}

	//initializes navigation
	char_press(VK_RIGHT);
	char_press(VK_LEFT);
	for(i = 0; 
		i < (score - 1) && i < PART_MAX; 
		i++){
		char_press(VK_RIGHT);
	}
	char_press(VK_RETURN);
}

// =======================================================================

void part_3(BOOLEAN score){
	int PART_MAX = 2;
	BOOLEAN randomize = FALSE;
	if(score == RANDOM){
		randomize = TRUE;
	}

	//3 sentences section
	string_press("because this course is the best");
	char_press(VK_TAB);
	string_press("the course is perfect");
	char_press(VK_TAB);
	string_press("good *thumbs*");
	char_press(VK_TAB);

	//initializes navigation
	char_press(VK_RIGHT);
	//the lil yes or no question
	//randomize feature
	if(randomize == TRUE){
		score = (rand()%PART_MAX) + 1;
	}
	if(score == TRUE){
		char_press(VK_LEFT);
	}
	char_press(VK_TAB);

	//last sentences section
	string_press("yes");
	char_press(VK_RETURN);
}

// =======================================================================
// MAIN
// =======================================================================

int main() {
	separator("START");
	
	//switches to the browser 
	//then initializes to a button
	//then initialized the random
	alt_tab();
	char_press(VK_TAB); 
	srand(time(0)); 

	part_1(4);
	part_2(10);
	part_3(TRUE);

	separator("END");
	return 0;
}