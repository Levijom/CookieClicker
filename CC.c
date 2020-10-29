/*
https://orteil.dashnet.org/cookieclicker/
https://github.com/Levijom/CookieClicker

Current Status:  Take input from user as to what costs/options are, return best option
*/

#include <stdio.h>
#define SIZE 26

const char *options[] = {"Cursor", "Grandma", "Farm", "Mine", "Factory", "Bank", 
	"Temple", "Wizard Tower", "Shipment", "M1", "M2", "Store1", "Store2", "Store3", 
	"Store4", "Store5", "Store6", "Store7", "Store8", "Store9", "Store10", "Store11", 
	"Store12", "Store13", "Store14", "Store15"};
	
int optionPrice[SIZE];
int optionsIndex = 0;

// Return int index in char array of possible moves
int getOption(){
	return 0;
}

// The names of the items in the store change, this function will be called to accomidate the changes
void shiftStore(){
	
}

// Price may need to be updated manually
void manualSetPrice(){
	
}

void updateStore(){
	
}

void initProducer(){
	char yorn;
	printf("Add option |%s| ?\nY/N: ",options[optionsIndex]);
	scanf(" %c",&yorn);
	if (yorn == 'y' || yorn == "Y"){
		optionsIndex++;
		printf("Option added\n");
	}
	else{
		printf("Add aborted\n");
	}
}

// A menu is given for possible options
void printMenuOptions(){
	printf("\nSelect an option\n");
	printf("----------------------------------------\n");
	printf("-m: Find current optimal move\n");
	printf("-s: Add new store item\n");
	printf("-a: Add new purchasable cookie producer\n");
	printf("-u: Update a value manually\n");
	printf("-e: Exit program\n");
	printf("----------------------------------------\n");
	printf("Option: ");
	
}

int main(void){
	char menuInput;
	
	while(menuInput != 'e'){
		printMenuOptions();
		scanf(" %c",&menuInput);
		printf("\nYou chose option %c\n",menuInput);
		switch(menuInput){
			case 'a':
			case 'A':
				initProducer();
				break;
			case 'e':
			case 'E':
				break;
			case 'm':
			case 'M':
				printf("Optimal move: %s\n",options[getOption()]);
				break;
			case 's':
			case 'S':
				updateStore();
				break;
			case 'u':
			case 'U':
				break;
		}
	}
	return 0;
}











