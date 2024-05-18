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

//learning expereince satisfaction thingy
void part_2(int score){						
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

//3 sentences section
void part_3(BOOLEAN score){
	int PART_MAX = 2;
	BOOLEAN randomize = FALSE;
	if(score == RANDOM){
		randomize = TRUE;
	}

	string_press("because this course is the best");
	char_press(VK_TAB);
	string_press("the course is perfect");
	char_press(VK_TAB);
	string_press("good *thumbs*");
	char_press(VK_TAB);

	//the lil yes or no question
	//initializes navigation
	char_press(VK_RIGHT);
	//randomize feature
	if(randomize == TRUE){
		score = (rand()%PART_MAX);
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
	
	alt_tab();				//switches to the browser 
	char_press(VK_TAB); 	//then initializes to a button
	srand(time(0)); 		//then initialized the random

	part_1(4);
	part_2(10);
	part_3(TRUE);

	separator("END");
	return 0;
}