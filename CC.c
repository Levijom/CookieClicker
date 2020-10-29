/*
https://orteil.dashnet.org/cookieclicker/
https://github.com/Levijom/CookieClicker

Current Status:  Take input from user as to what costs/options are, return best option

Starting Values:
Cursor:		.01	|	15,18,20,23,27,31,35,40,46,53,61
Grandma: 	1	|	100,115,133,153,175,202,232
Farm: 		8	|	1100,1265,1455,1673,1924,2213,2545
Mine:		47	|	12000,13800,15870,18251
Factory:			130000
Bank:				1400000
*/

#include <stdio.h>
#define SIZE 26

const char *options[] = {"Cursor", "Grandma", "Farm", "Mine", "Factory", "Bank", 
	"Temple", "Wizard Tower", "Shipment", "M1", "M2", "Store1", "Store2", "Store3", 
	"Store4", "Store5", "Store6", "Store7", "Store8", "Store9", "Store10", "Store11", 
	"Store12", "Store13", "Store14", "Store15"};
	
int optionPrice[SIZE];
int optionCps[SIZE] = {0.1,1,8};
int optionsIndex = -1;

// Return int index in char array of possible moves
int getOption(){
	return 0;
}

// Price may need to be updated manually
void manualSetPrice(){
	int i,change,newPrice;
	printf("Which item would you like to set the price of?\n");
	for (i=0;i<=optionsIndex;i++){
		printf("Option %d: %s\n",i,options[i]);
	}
	scanf(" %d",&change);
	printf("\nInput new price: ");
	scanf("%d",&newPrice);
	optionPrice[change] = newPrice;
	printf("\n%s price is changed to %d",options[change],optionPrice[change]);
}

// Prompt user to input type of perk from the store
void updateStore(){
	int type, increase, i;
	printf("Input type of perk:\n");
	printf("-1: Overall Cps increase\n");
	printf("-2: Single producer Cps increase\n");
	scanf("%d",&type);
	if(type == 1){
		printf("Enter percentage increase (double means 200)");
		scanf("%d",&increase);
		for (i=0;i<=optionIndex;i++){
			// multiply by increase percentage
		}
	}
	else if (type == 2){
		// get specific option, multiply
	}
	else{
		
	}
	shiftStore();
}

// The names of the items in the store change, this function will be called to accomidate the changes
void shiftStore(){
	
}

void initProducer(){
	char yorn;
	printf("Add option |%s| ?\nY/N: ",options[optionsIndex+1]);
	scanf(" %c",&yorn);
	if (yorn == 'y' || yorn == "Y"){
		optionsIndex++;
		printf("Option added\n");
	}
	else{
		printf("Add aborted\n");
	}
}

void listMoves(){
	int i;
	printf("Current possible moves include:\n");
	for (i=0;i<=optionsIndex;i++){
		printf("-%s at cost: %d\n",options[i],optionPrice[i]);
	}
}

void printInfo(){
	printf("----------------------------------------\n");
	printf("-m: Send the current state of the game through an algorithm that determines the most optimal move based on price to cookie production\n");
	printf("-s: Manually add an item from the upgrades store.  You will have to enter the details as well for now\n");
	printf("-a: When a new cookie producer is unlocked, you will need to update this list so it can be counted in the optimal choice algorithm\n");
	printf("-u: Sometimes a value can be wrongly claculated.  If this is the case, this option is here to quickly fix the problem\n");
	printf("-i: Print this screen\n");
	printf("-e: Once you are done, you may quit.  Currently this will not save your stats\n");
	printf("----------------------------------------\n");
}

// A menu is given for possible options
void printMenuOptions(){
	printf("\nSelect an option\n");
	printf("----------------------------------------\n");
	printf("-m: Find current optimal move\n");
	printf("-l: List current possible moves");
	printf("-s: Add new store item\n");
	printf("-a: Add new purchasable cookie producer\n");
	printf("-u: Update a value manually\n");
	printf("-i: Get more information about the menu items\n");
	printf("-e: Exit program\n");
	printf("----------------------------------------\n");
	printf("Option: ");
	
}

int main(void){
	char menuInput;
	optionPrice[0] = 15;
	
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
			case 'i':
			case 'I':
				printInfo();
				break;
			case 'l':
			case 'L':
				listMoves();
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
				manualSetPrice();
				break;
			default:
				printf("Invalid choice, try again...\n");
		}
	}
	return 0;
}











