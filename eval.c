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
// MISC FUNCTIONS
// =======================================================================

void radio_button_n(int n){
	Sleep(DELAY_MS);
	//goes left and right to initialize the radio button selection
	keybd_event(VK_RIGHT, 0, 0, 0);
	keybd_event(VK_RIGHT, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_LEFT, 0, 0, 0);
	keybd_event(VK_LEFT, 0, KEYEVENTF_KEYUP, 0);
	//goes to the appropriate button
	int i;
	for(i = 0; i<n;i++){
		keybd_event(VK_RIGHT, 0, 0, 0);
		keybd_event(VK_RIGHT, 0, KEYEVENTF_KEYUP, 0);
	}
}

// =======================================================================
// MAIN FUNCTIONS
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
		//selects the score
		radio_button_n(score - 1);
		//enters the score and proceeds
		press_char(VK_RETURN);
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

	//selects the score
	radio_button_n(score - 1);
	//enters the score and proceeds
	press_char(VK_RETURN);
}

// =======================================================================

//3 sentences section
void part_3(BOOLEAN score){
	int PART_MAX = 2;
	BOOLEAN randomize = FALSE;
	if(score == RANDOM){
		randomize = TRUE;
	}

	//first 3 sentences sentences section
	press_string("because this course is the best");
	press_char(VK_TAB);
	press_string("the course is perfect");
	press_char(VK_TAB);
	press_string("good *thumbs*");
	press_char(VK_TAB);

	//the lil yes or no question
	//initializes navigation
	press_char(VK_RIGHT);
	//randomize feature
	if(randomize == TRUE){
		score = (rand()%PART_MAX);
	}
	if(score == TRUE){
		press_char(VK_LEFT);
	}
	press_char(VK_TAB);

	//last sentences section
	press_string("yes");
	press_char(VK_RETURN);
}

// =======================================================================
// MAIN
// =======================================================================

int main() {
	separator("START");
	
	alt_tab();				//switches to the browser 
	press_char(VK_TAB); 	//then initializes to a button
	srand(time(0)); 		//then initialized the random

	part_1(4);
	part_2(10);
	part_3(TRUE);

	separator("END");
	return 0;
}