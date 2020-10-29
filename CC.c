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

// Return int index in char array of possible moves
int getOption(){
	
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
	
}

// A menu is given for possible options
void printMenuOptions(){
	printf("Select an option\n");
	printf("----------------------------------------\n");
	printf("-u: Update a value manually\n");
	printf("-m: Find optimal move\n");
	printf("-s: Add new store item\n");
	printf("-a: Add new purchasable cookie producer\n");
	printf("----------------------------------------\n");
	
}

int main(void){
	char menuInput;
	
	printMenuOptions();
	scanf("%c",&menuInput);
	printf("You chose option %c\n",menuInput);
	printf("%s got ran over by a reindeer",options[1]);
}











