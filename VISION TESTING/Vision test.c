#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>
#define MAX_PASSWORD_LENGTH 100
HANDLE hConsole;
HWND window;

void determineGlasses(int visualAcuity) {
    if (visualAcuity >= 20 && visualAcuity < 40) {
        printf("You need to go for further check-up.\n");
    } else if (visualAcuity >= 40 && visualAcuity < 70) {
        printf("You need to go for a color blindness test.\n");
    } else if (visualAcuity >= 70 && visualAcuity < 100) {
        printf("You need strong glasses.\n");
    } else if (visualAcuity >= 100) {
        printf("You have normal vision. No glasses are needed.\n");
    } else {
        printf("Please consult an eye care professional for a proper evaluation.\n");
    }
}


void addpatient();
void patientrecord();
void searchpatient();
void patientdelete();
void menu();


void book();

//izi zili mu function ya indoctor
void indoctor();
void docs();
void docadd();
void docdel();
void docv();

//izi zili mu function ya inpatient

void inpatient();
void saka();
void ona();
void chotsa();
void ika();


struct patient{
	char First_name[20];
	char last_name[20];
	int hos_no;
	char ward[20];
	char vill[20];
	int patientID;
	int age;
	char gender[10];
	int tests;
	float perc;
	char glas[50];
};

void rece();
void login();
void doc();
void reg();
void admin();
void gotoxy(int x, double y){
	COORD C;
	C.X=x;
	C.Y=y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);
}
void sech();
void check();
void visual();
void stimulus();
void response();
void data();
void tayamba();
struct pano{

	char fname[20];
	char midle[20];
	char last[20];
	char intial[2];
	int age;
	int phone;
	char home[20];
	char job[20];
	char pass[10];
};

void consoleFont(){

	if(hConsole != INVALID_HANDLE_VALUE){
		CONSOLE_FONT_INFOEX fontInfo = {0};
		fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		GetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
		wcscpy_s(fontInfo.FaceName, LF_FACESIZE, L"Algerian");
		fontInfo.dwFontSize.Y = 100;
		fontInfo.FontWeight = 700;
		SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
	}
}

int main(){


		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	WORD originalAttributes = consoleInfo.wAttributes;
		
	sleep(1);
	gotoxy(49,3);
	printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");
	sleep(1);
	gotoxy(60,4);	
	SetConsoleTextAttribute(hConsole,2);
     printf("WELCOME");
     SetConsoleTextAttribute(hConsole, originalAttributes);
     sleep(1);
    gotoxy(68,4);
    SetConsoleTextAttribute(hConsole,3);
     printf("TO");
      SetConsoleTextAttribute(hConsole, originalAttributes);
     sleep(1);
     gotoxy(71,4);
      SetConsoleTextAttribute(hConsole,4);
     printf("THE");
       SetConsoleTextAttribute(hConsole, originalAttributes);
     sleep(1);
     gotoxy(75,4);
       SetConsoleTextAttribute(hConsole,5);
     printf("VISION");
     SetConsoleTextAttribute(hConsole, originalAttributes);
      sleep(1);
     gotoxy(82,4);
     
      SetConsoleTextAttribute(hConsole,6);
     printf("TESTING");
       SetConsoleTextAttribute(hConsole, originalAttributes);
       sleep(1);
     gotoxy(90,4);
       SetConsoleTextAttribute(hConsole,8);
     printf("SYSTEM");
     SetConsoleTextAttribute(hConsole, originalAttributes);
     
     
     sleep(1);
     gotoxy(49,5);
     printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");
     
	 sleep(1);
	  gotoxy(103,4);
     printf("\xdc");
     
     sleep(1);
     gotoxy(49,4);
     printf("\xdc");
     
     
     
     gotoxy(60,7);
     sleep(1);
     SetConsoleTextAttribute(hConsole,14);
     printf("Please wait...");
SetConsoleTextAttribute(hConsole, originalAttributes);

int i;

gotoxy(60,10);
		printf("Loading\n");
	/*	sleep(1);
		gotoxy(68,10);
		printf(".");
			sleep(1);
			
			gotoxy(69,10);
		printf(".");
			sleep(1);
				gotoxy(70,10);
			printf(".");*/
		for(i =0; i<= 100; i++){



			int j;


			for(j =0; j<i; j+=2){

			
				printf("\xdb\xdb");
				
			}
			for(j=0; j<=100; j+=2){

			} 
			gotoxy(50,12);
			printf("%d%\r",i);
			fflush(stdout);
			usleep(100000);
		}
		
		
		gotoxy(103,16);
		printf("DONE!!");

	  // sleep(2);
		system("cls");
		tayamba();
	//	int choice;

}

void tayamba(){
//system("color b0");
gotoxy(49,2);
 printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");	
	//	gotoxy(39,1);
		//printf("======================================");

		gotoxy(49,5);
 printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");	
	//	gotoxy(39,1);

								gotoxy(60,4);
								printf("  WELCOME TO THE VISION TESTING SYSTEM\n");
							
								gotoxy(60,8);
								printf("1. DOCTOR LOGIN\n");
								gotoxy(60,10);
								printf("2. RECEPTIONIST LOGIN\n");
								gotoxy(60,12);
								printf("3. REGISTER DETAILS\n\t\t\t\t");
								gotoxy(60,14);
								printf("4. ADMIN LOGIN\n");
								gotoxy(60,16);	
								printf("Choice No:\n ");
								gotoxy(73,16);
						//	 scanf("%d",&choice);
						
								
      
      
//    int i=4;
       //gotoxy(30,20);
     //  printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");	
      
		switch(getch()){

			case '1':
				system("cls");
				login();
				break;
				
			case '2':
				system("cls");
				rece();
				break;
				case '3':
					system("cls");
		            reg();
					break;
			case '4':
				system("cls");
				admin();
				break;
				
				
		default:
			printf("wrong choice try again");
			sleep(2);
			system("cls");
			tayamba();
				

		}
	}

void hidePassword(char *password) {
    int i = 0;
    char ch;

    while (1) {
        ch = _getch(); 
        if (ch == '\r' || ch == '\n') {
            password[i] = '\0';
            break;
        } else if (ch == '\b' && i > 0) {
            printf("\b \b"); 
            i--;
        } else if (i < MAX_PASSWORD_LENGTH - 1) {
            password[i] = ch;
            printf("*"); 
            i++;
        }
    }
}

		void login(){
			
			
				FILE *fptr;
	
	struct pano info;
	char vname[20]; 
	char password[MAX_PASSWORD_LENGTH]; 
	
	int found=0;
	fptr=fopen("koma.dat","r");
	gotoxy(60,2);
	printf("=====  LOGIN PAGE  =====\n");
	gotoxy(60,4);
	printf("Enter employee first name\n");
	gotoxy(60,5);
	scanf("%s",&vname);
	gotoxy(60,7);
	printf("Enter password");
	gotoxy(60,8);
	hidePassword(password);


	while(fread(&info,sizeof(struct pano),1,fptr)){
			if(strcmp(info.fname,vname)==0 && strcmp(info.pass,password)==0){
			found=1; 
		 printf("Login successful\n");
		  Sleep(6);
		
        system("cls");
	menu();
	
	 }
	}
	char ana;
	if(!found){
		gotoxy(60,13);
		printf("incorrect details please try again press any key to go back");
		getch();
		  system("cls");
		tayamba();
		
		 }
	
		fclose(fptr);
		
}

void menu(){
	
		gotoxy(60,0);
		
		system("color 8f");
        printf("WELCOME TO THE MAIN MENU\n\n");
		
		gotoxy(60,2);
        printf("choose any options....\n");

        int opin;
		
		gotoxy(60,4);
        printf("1. VISUAL EYE INTERFACE TEST\n");
		
		gotoxy(60,6);
        printf("2. EYE STIMULUS PRESENTATION\n");
		gotoxy(60,8);
        printf("3. EYE RESPONSE COLLECTIION\n");
		gotoxy(60,10);
        printf("4. PATIENT DATA ANYALYSIS\n");
		gotoxy(60,12);
        printf("5. EIXT\n");
		
		gotoxy(60,14);
		printf("Choice No: ");
		gotoxy(73,14);
        scanf("%d",&opin);

        switch(opin){

        	case 1:
        		system("cls");
        		visual();
        		break;

        		case 2:
        			system("cls");
        			stimulus();
        			break;

        			case 3:
        				system("cls");
        				response();
        				break;

        				case 4:
        					system("cls");
        				data();
        					break;
        					
        					case 5:
        						system("cls");
        						tayamba();
        						break;
					
		}
	
	
	
	
}

void visual(){
	gotoxy(60,0);
	printf("WELCOME TO THE VISUAL USER INTERFACE PANEL\n\n");
	gotoxy(20,2);
	printf("The visual user interface allows users to initiate tests, view instructions,\n");
	gotoxy(20,3);
	printf(" and provide feedback once the displayed letter is seen on the screen.\n");
	
	gotoxy(20,4);
	printf("INSTRUCTIONS ON HOW TO USE THE SYSYTEM:\n");
	gotoxy(20,5);
	printf("press a any key and wait and till it brings in another shape with a letter\n");
	
	//getch();

	 sleep(3);
	 gotoxy(20,14);
	 printf("TEST NO.1");
	gotoxy(40,14); 
	printf(" ________ \n");
	gotoxy(40,15);
    printf("|        |\n");
    gotoxy(40,16);
    printf("|   E    |\n");
    gotoxy(40,17);
    printf("|________|\n");
	

 //   printf("press a any letter and wait and till it brings in another shape with a letter\n");
    
    Sleep(3);
    gotoxy(55,14);
    printf("TEST NO.2");
    gotoxy(68,14);
    printf(" ________ ");
    
    gotoxy(68,15);
    printf("|        |");
    
    gotoxy(68,16);
    printf("|   M    |");
    
    gotoxy(68,17);
    printf("|________|");
    
    gotoxy(40,27);
    
    printf("press any button to get to another phase of this test");
    getch();
    Sleep(3);
    system("cls");
	gotoxy(1,0);
	printf("SNELLEN CHART::");
	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	WORD originalAttributes = consoleInfo.wAttributes;
	system("color 8f");
	

gotoxy(60,14);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(60,15);
printf("\xdb\xdb");
gotoxy(60,16);
printf("\xdb\xdb");
gotoxy(60,17);
printf("\xdb\xdb");
gotoxy(60,18);
printf("\xdb\xdb");
//gotoxy(60,1);
gotoxy(60,19);
printf("\xdb\xdb");

gotoxy(70,14);
printf("\xdb\xdb");
gotoxy(70,15);
printf("\xdb\xdb");
gotoxy(70,16);
printf("\xdb\xdb");
gotoxy(70,17);
printf("\xdb\xdb");
gotoxy(70,18);
printf("\xdb\xdb");
gotoxy(70,19);
printf("\xdb\xdb");


//printf("____");
gotoxy(80,14);
printf("\xdb\xdb");
gotoxy(80,15);
printf("\xdb\xdb");
gotoxy(80,16);
printf("\xdb\xdb");
gotoxy(80,17);
printf("\xdb\xdb");
gotoxy(80,18);
printf("\xdb\xdb");
gotoxy(80,19);
printf("\xdb\xdb");


//line number 3


gotoxy(42,21);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(42,22);
printf("\xdb\xdb");
gotoxy(42,23);
printf("\xdb\xdb");
gotoxy(42,24);
printf("\xdb\xdb");
gotoxy(42,25);
printf("\xdb\xdb");
//gotoxy(60,1);

gotoxy(52,21);
printf("\xdb\xdb");
gotoxy(52,22);
printf("\xdb\xdb");
gotoxy(52,23);
printf("\xdb\xdb");
gotoxy(52,24);
printf("\xdb\xdb");
gotoxy(52,25);
printf("\xdb\xdb");

//printf("____");
gotoxy(62,21);
printf("\xdb\xdb");
gotoxy(62,22);
printf("\xdb\xdb");
gotoxy(62,23);
printf("\xdb\xdb");
gotoxy(62,24);
printf("\xdb\xdb");
gotoxy(62,25);
printf("\xdb\xdb");

//line number 3 ija

gotoxy(72,25);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(72,21);
printf("\xdb\xdb");
gotoxy(72,22);
printf("\xdb\xdb");
gotoxy(72,23);
printf("\xdb\xdb");
gotoxy(72,24);
printf("\xdb\xdb");
gotoxy(72,25);
printf("\xdb\xdb");
//gotoxy(60,1);

gotoxy(80,21);
printf("\xdb\xdb");
gotoxy(80,22);
printf("\xdb\xdb");
gotoxy(80,23);
printf("\xdb\xdb");
gotoxy(80,24);
printf("\xdb\xdb");
gotoxy(80,25);
printf("\xdb\xdb");

//printf("____");
gotoxy(89,21);
printf("\xdb\xdb");
gotoxy(89,22);
printf("\xdb\xdb");
gotoxy(89,23);
printf("\xdb\xdb");
gotoxy(89,24);
printf("\xdb\xdb");
gotoxy(89,25);
printf("\xdb\xdb");




gotoxy(10,19);

gotoxy(50,28);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(50,29);
printf("\xdb\xdb");
gotoxy(50,30);
printf("\xdb\xdb");
gotoxy(50,31);
printf("\xdb\xdb");
gotoxy(50,32);
printf("\xdb\xdb");
//gotoxy(60,1);

gotoxy(55,28);
printf("\xdb\xdb");
gotoxy(55,29);
printf("\xdb\xdb");
gotoxy(55,30);
printf("\xdb\xdb");
gotoxy(55,31);
printf("\xdb\xdb");
gotoxy(55,32);
printf("\xdb\xdb");

//printf("____");
gotoxy(60,28);
printf("\xdb\xdb");
gotoxy(60,29);
printf("\xdb\xdb");
gotoxy(60,30);
printf("\xdb\xdb");
gotoxy(60,31);
printf("\xdb\xdb");
gotoxy(60,32);
printf("\xdb\xdb");





gotoxy(70,32);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(70,28);
printf("\xdb\xdb");
gotoxy(70,29);
printf("\xdb\xdb");
gotoxy(70,30);
printf("\xdb\xdb");
gotoxy(70,31);
printf("\xdb\xdb");
gotoxy(70,32);
printf("\xdb\xdb");
//gotoxy(60,1);

gotoxy(75,28);
printf("\xdb\xdb");
gotoxy(75,29);
printf("\xdb\xdb");
gotoxy(75,30);
printf("\xdb\xdb");
gotoxy(75,31);
printf("\xdb\xdb");
gotoxy(75,32);
printf("\xdb\xdb");

//printf("____");
gotoxy(80,28);
printf("\xdb\xdb");
gotoxy(80,29);
printf("\xdb\xdb");
gotoxy(80,30);
printf("\xdb\xdb");
gotoxy(80,31);
printf("\xdb\xdb");
gotoxy(80,32);
printf("\xdb\xdb");



gotoxy(38,28);
printf("\xdb\xdb\xdb\xdb\xdb");
gotoxy(38,29);
printf("\xdb");
gotoxy(38,30);
printf("\xdb\xdb\xdb\xdb\xdb");

//gotoxy(60,1);

gotoxy(38,31);
printf("\xdb");
gotoxy(38,32);
printf("\xdb\xdb\xdb\xdb\xdb");


gotoxy(92,13);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(92,14);
printf("\xdb\xdb");
gotoxy(92,15);
printf("\xdb\xdb");
gotoxy(92,16);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");

//gotoxy(60,1);
gotoxy(92,17);
printf("\xdb\xdb");
gotoxy(92,18);
printf("\xdb\xdb");
gotoxy(92,19);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");




//line nummber 3


gotoxy(100,21);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");

gotoxy(100,22);
printf("\xdb\xdb");
gotoxy(100,23);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");


gotoxy(100,24);
printf("\xdb\xdb");
gotoxy(100,25);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");



gotoxy(75,3);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(75,4);
printf("\xdb\xdb");
gotoxy(75,5);
printf("\xdb\xdb");
gotoxy(75,6);
printf("\xdb\xdb");
gotoxy(75,7);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(75,8);
printf("\xdb\xdb");
gotoxy(75,9);
printf("\xdb\xdb");
gotoxy(75,10);
printf("\xdb\xdb");
gotoxy(75,11);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");



gotoxy(90,28);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(90,29);
printf("\xdb\xdb");
gotoxy(90,30);
printf("\xdb\xdb");

//gotoxy(60,1);

gotoxy(90,31);
printf("\xdb\xdb");
gotoxy(90,32);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb");



gotoxy(104,32);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
gotoxy(104,28);
printf("\xdb\xdb");
gotoxy(104,29);
printf("\xdb\xdb");
gotoxy(104,30);
printf("\xdb\xdb");
gotoxy(104,31);
printf("\xdb\xdb");
gotoxy(104,32);
printf("\xdb\xdb");
//gotoxy(60,1);

gotoxy(109,28);
printf("\xdb\xdb");
gotoxy(109,29);
printf("\xdb\xdb");
gotoxy(109,30);
printf("\xdb\xdb");
gotoxy(109,31);
printf("\xdb\xdb");
gotoxy(109,32);
printf("\xdb\xdb");

//printf("____");
gotoxy(114,28);
printf("\xdb\xdb");
gotoxy(114,29);
printf("\xdb\xdb");
gotoxy(114,30);
printf("\xdb\xdb");
gotoxy(114,31);
printf("\xdb\xdb");
gotoxy(114,32);
printf("\xdb\xdb");





gotoxy(104,34);
printf("\xdc\xdc\xdc\xdc\xdc");
gotoxy(104,34);
printf("\xdc");
gotoxy(104,35);
printf("\xdc");

gotoxy(106,34);
printf("\xdc\xdc");
gotoxy(106,35);
printf("\xdc");

gotoxy(108,34);
printf("\xdc");
gotoxy(108,35);
printf("\xdc");




gotoxy(90,35);
printf("\xdc\xdc\xdc\xdc\xdc");


gotoxy(90,34);
printf("\xdc");
gotoxy(90,35);
printf("\xdc");

gotoxy(92,34);
printf("\xdc");
gotoxy(92,35);
printf("\xdc");

gotoxy(94,34);
printf("\xdc");
gotoxy(94,35);
printf("\xdc");

gotoxy(60,35);
printf("E");

gotoxy(75,35);
printf("MN");

gotoxy(38,35);
printf("MN22/2");


gotoxy(10,3);
printf("1. 100FT/30.5M");

gotoxy(10,11);
printf("2. 70FT/21.7M");

gotoxy(10,21);
printf("3. 50FT/15.2M");

gotoxy(10,28);
printf("4. 30FT/9.1M");

gotoxy(10,34);
printf("5. 15FT/4.6M");

gotoxy(60,40);
printf("<<<press any button to get the calculation of the results>>>");
   getch();
 
   system("cls");
   
   		gotoxy(60,1);
   		printf("VISION TESTING SYSTEM");
        int id;
        int found=0;
        long int size = sizeof(struct patient);
  		float percentage;
  		int a,p;
  		FILE *fp;
  		struct patient info;
  		fp=fopen("patient_info.dat","r+");
  		if(fp==NULL){
  			printf("error opening file");
  			exit(1);
		  }
	gotoxy(60,2);
    printf("Enter ID number of the patient\n");
    gotoxy(60,3);
    scanf("%d",&id);
	gotoxy(60,6);
	printf("How many tests has the patient got right");
	gotoxy(60,7);
	scanf("%d",&a);
	gotoxy(60,8);
	printf("The total number of tests obtained by the patient");
	gotoxy(60,9);
	scanf("%d",&p);
	
		percentage=(a/p)*100;
    // Determine the type of glasses needed based on the percentage
   // char* glassesType;
   char glassesType[100];
    if (percentage >= 80) {
       // glassesType = "No glasses needed.";
     
       strcpy(glassesType,"No_glasses_needed_but_patient_must_be_given_Acetazolamide_for_glaucoma(Diamox)_15ml/mg.");
    } else if (percentage >= 60) {
        //glassesType = "Reading glasses needed.";

        strcpy(glassesType,"Reading_glasses_needed.");
    } else{
      //  glassesType = "Prescription glasses needed.";
    
        strcpy(glassesType,"Prescription_glasses_needed.");
    }
    
    
    while(fread(&info,sizeof(struct patient),1,fp)){
    	if(id==info.patientID){
    		found=1;
    		info.perc = percentage;
    		strcpy(info.glas,glassesType);
    		fseek(fp, -size,SEEK_CUR);
    		//strcnpy(info.glas,glassesType ,sizeof(info.glas));
    		
    		fwrite(&info, sizeof(struct patient), 1, fp);
    			break;
		}
		}
		
	
	if(!found){
			printf("can't  save the info.");
			
	}else{
			printf("info saved");
				
	}
			
    gotoxy(60,10);
	 printf("Results:");
	 gotoxy(60,11);
    printf("Number of tests right: %d",a);
    gotoxy(60,12);
    printf("Percentage: %.2f%%\n", percentage);
    
    gotoxy(60,13);
    printf("Glasses needed: %s\n", glassesType);
	
				gotoxy(60,10);
	printf("press any button to go return to the main menu");
	getch();
	system("cls");
	menu();	
	
    
    fclose(fp);
    

gotoxy(60,16);
	
	printf("saving the test results in the patients records");

		gotoxy(60,18);
	printf("loading");
		gotoxy(68,18);
	sleep(2);
	printf(".");
		gotoxy(69,18);
		sleep(2);			
	printf(".");
		gotoxy(70,18);
		sleep(2);
	printf(".");
		gotoxy(60,19);
	printf("press any button to go return to the main menu");
	getch();
	system("cls");
	menu();	
}

void stimulus(){


gotoxy(60,0);
printf("COLOUR BLINDNESS TESTING SITE");
gotoxy(20,2);
printf("INSTRUCTIONS OF THE TEST:choose the correct color....note[this is a regular test]");
gotoxy(20,3);
printf("The color selected will determine the effectiveness of the colour blindness of the patient");
gotoxy(20,4);
printf("If the patient gets to fail the answer the doctor must determine the right answer and input the wrong answer when calculating");
//int multi = 0;
char ans[2];
char ans2[2];
char ans3[2];
char ans4[2];

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	WORD originalAttributes = consoleInfo.wAttributes;

//	consoleFont();

	
//system("color b0");

gotoxy(40,7);
printf("1. what is the color in the box below\n");
SetConsoleTextAttribute(hConsole,1);
				
				gotoxy(40,9);
	  			printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	  			gotoxy(40,10);
		  		printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		  		gotoxy(40,11);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
				gotoxy(40,12);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		
	SetConsoleTextAttribute(hConsole, originalAttributes);

gotoxy(40,14);
printf("A. green");
gotoxy(50,14);
printf("B. red");
gotoxy(40,15);
printf("C. yellow");
gotoxy(50,15);
printf("D. blue");
gotoxy(40,16);
printf("Ans:: ");
gotoxy(48,16);
scanf("%s",&ans);
//if(answer1=='D'){
//	multi++;
if(strcmp(ans,"D")==0){

	gotoxy(40,18);
	printf("Correct answer now lets move to test NO.2");
	
	sleep(6);
	
    system("cls");
}else{
	gotoxy(40,18);
	printf("The answer is wrong please try again");
	sleep(2);
	
	system("cls");
	stimulus();
}

gotoxy(60,0);
printf("COLOUR BLINDNESS TESTING SITE");
gotoxy(20,2);
printf("INSTRUCTIONS OF THE TEST:choose the correct color....note this is a regular test");
gotoxy(20,3);
printf("The color selected will determine the effectiveness of the colour blindness of the patient");
gotoxy(20,4);
printf("If the patient gets to fail the answer the doctor must determine the right answer and input the wrong answer when calculating");

		gotoxy(40,7);
printf("2. what is the color in the box\n");
	SetConsoleTextAttribute(hConsole,4);
				gotoxy(40,9);
	  			printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	  			gotoxy(40,10);
		  		printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		  		gotoxy(40,11);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
				gotoxy(40,12);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	
	SetConsoleTextAttribute(hConsole, originalAttributes);	

	
gotoxy(40,14);
printf("A. green");
gotoxy(50,14);
printf("B. red");
gotoxy(40,15);
printf("C. yellow");
gotoxy(50,15);
printf("D. blue");
gotoxy(40,16);
printf("Ans:: ");
gotoxy(48,16);
scanf("%s",&ans2);

if(strcmp(ans2,"B")==0){


	gotoxy(40,18);
	printf("Correct answer now lets move to test NO.3");
	
	
	sleep(6);
	
    system("cls");
}else{
	gotoxy(40,18);
	printf("The answer is wrong please try again");
	sleep(2);
	system("cls");
	stimulus();
}
gotoxy(60,0);
printf("COLOUR BLINDNESS TESTING SITE");
gotoxy(20,2);
printf("INSTRUCTIONS OF THE TEST:choose the correct color....note[this is a regular test]");
gotoxy(20,3);
printf("The color selected will determine the effectiveness of the colour blindness of the patient");
gotoxy(20,4);
printf("If the patient gets to fail the answer the doctor must determine the right answer and input the wrong answer when calculating");
		gotoxy(40,7);
printf("3. what is the color in the box\n");
	SetConsoleTextAttribute(hConsole,18);
				gotoxy(40,9);
	  			printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	  			gotoxy(40,10);
		  		printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		  		gotoxy(40,11);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
				gotoxy(40,12);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	
	SetConsoleTextAttribute(hConsole, originalAttributes);	


gotoxy(40,14);
printf("A. green");
gotoxy(50,14);
printf("B. red");
gotoxy(40,15);
printf("C. yellow");
gotoxy(50,15);
printf("D. blue");
gotoxy(40,16);
printf("Ans:: ");
gotoxy(48,16);
scanf("%s",&ans3);

if(strcmp(ans3,"A")==0){


	gotoxy(40,18);
	printf("Correct answer now lets move to test NO.4");
	
	
	sleep(6);
	
    system("cls");
}else{
	gotoxy(40,18);
	printf("The answer is wrong please try again");
	sleep(2);
	system("cls");
	stimulus();
}


gotoxy(40,0);
printf("COLOUR BLINDNESS TESTING SITE");
gotoxy(20,2);
printf("INSTRUCTIONS OF THE TEST:choose the correct color....note[this is a regular test]");
gotoxy(20,3);
printf("The color selected will determine the effectiveness of the colour blindness of the patient");
gotoxy(20,4);
printf("If the patient gets to fail the answer the doctor must-");
gotoxy(20,5);
printf("determine the right answer and input the wrong answer when calculating");


		gotoxy(40,7);
printf("4. what is the color in the box\n");
	SetConsoleTextAttribute(hConsole,14);
				gotoxy(40,9);
	  			printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	  			gotoxy(40,10);
		  		printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		  		gotoxy(40,11);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
				gotoxy(40,12);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	
	SetConsoleTextAttribute(hConsole, originalAttributes);	


gotoxy(40,14);
printf("A. green");
gotoxy(50,14);
printf("B. red");
gotoxy(40,15);
printf("C. yellow");
gotoxy(50,15);
printf("D. blue");
gotoxy(40,16);
printf("Ans:: ");
gotoxy(48,16);
scanf("%s",&ans4);

if(strcmp(ans4,"C")==0){


	gotoxy(40,18);
	printf("Correct answer, press any key to proceed...");
	getch();
	
	Sleep(6);
	
    system("cls");
    int a, b = 5;
    float percentage;
gotoxy(60,5);
    printf("Enter the number of test got right:\n");
    gotoxy(60,6);
    scanf("%d", &a);

    percentage = (float)a / b * 100;
    gotoxy(60,8);
    printf("Percent: %f\n", percentage);


    int visualAcuity; 
     gotoxy(60,9);
    determineGlasses(visualAcuity);
    gotoxy(60,11);
    printf("thank you for your cooperation!!, press any key to go back");
    
sleep(6);
    getch();
    system("cls");
    menu();
    
}else{
	gotoxy(40,18);
	printf("The answer is wrong please try again");
	Sleep(2);
	system("cls");
	stimulus();
}

}



void response(){
	
	
    printf("\t\t\t\t\t\t----- Astigmatism Test -----\n");
    printf("\t\t\t\t\t\tPlease stand 20 feet away from the screen.\n");
    printf("\t\t\t\t\t\tCover one eye and identify the orientation of the shapes.\n");

    // Display the shapes for astigmatism test
    printf("\t\t\t\t\t\t\nShapes:\n");
    printf("\t\t\t\t\t\t   \\    /\n");
    printf("\t\t\t\t\t\t    \\  /\n");
    printf("\t\t\t\t\t\t     \\/\n");

    printf("\t\t\t\t\t\t     /\\\n");
    printf("\t\t\t\t\t\t    /  \\\n");
    printf("\t\t\t\t\t\t   /    \\\n");

    // Prompt the user for their result
    char astigmatismResult;
    printf("\t\t\t\t\t\t\nEnter the orientation of the shapes (\\ or /): ");
    scanf(" %c", &astigmatismResult);

    // Analyze the result
    if (astigmatismResult == '\\' || astigmatismResult == '/') {
        printf("\t\t\t\t\t\tYour astigmatism test result is normal.\n");
    } else {
        printf("\t\t\t\t\t\tPlease consult an eye specialist for further evaluation.\n");
    }
    
    printf("\t\t\t\t\t\tpress any key to go back\n");
    getch();
    system("cls");
    menu();
}
   
   

void data(){
	int ice;
	while(ice!=5){
		gotoxy(60,2);
		printf("=====PATIENT DATABASE MANAGEMENT PAGE=====");
			gotoxy(60,3);
		printf("_______________________________\n");
			gotoxy(60,5);
		printf("1. Add patient Record\n");
			gotoxy(60,6);
		printf("2. Patient Record\n");
			gotoxy(60,7);
		printf("3. Search patient Record\n");
			gotoxy(60,8);
		printf("4. Delete patient Record\n");
			gotoxy(60,9);
		printf("5. Exit\n");
			gotoxy(60,10);
		printf("_______________________________\n");
			gotoxy(60,12);
		scanf("%d",&ice);
		
		switch(ice){
			case 1:
				system("cls");
				addpatient();
				system("cls");
				break;
				
				case 2:
					system("cls");
					patientrecord();
					printf("\t\t\t\tPress any key to exit\n");
					getch();
					system("cls");
					break;
					
					case 3:
						system("cls");
						searchpatient();
						printf("\n\t\t\t\tPress any key to exit\n");
						getch();
						system("cls");
						break;
						
						case 4:
						system("cls");
						patientdelete();
						printf("\n\t\t\t\tPress any key to exit\n");
						getch();
						system("cls");
						break;	
						
						case 5:
							system("cls");
							menu();
							break;
				}
					
			}
		}
void addpatient(){
							
	char another[2];
	FILE*fp;
	struct patient info;
		if(fp==NULL){
			printf("error opening file");
			exit(1);
		}
		
		system("cls");
		gotoxy(60,1);
		printf("=====ADD PATIENT INFORMATION=====");
	
		fp=fopen("patient_info.dat","a");
			gotoxy(60,2);
		printf("Enter First Name: ");
		gotoxy(60,3);
		scanf("%s",&info.First_name);
		gotoxy(60,4);
		printf("Enter Last Name: ");
		gotoxy(60,5);
		scanf("%s",&info.last_name);
		gotoxy(60,6);
		printf("Enter Ward or Room Name: ");
		gotoxy(60,7);
		scanf("%s",&info.ward);
		gotoxy(60,8);
		printf("Enter Hospital Book ID: ");
		gotoxy(60,9);
		scanf("%d",&info.hos_no);
		gotoxy(60,10);
		printf("Enter Home address or District of birth: ");
		gotoxy(60,11);
		scanf("%s",&info.vill);
		
	//	printf("\n\t\t\tEnter Percentage after Eye tests: ");
	//	scanf("%f",&info.per);
		gotoxy(60,12);
		printf("Patient ID number");
		gotoxy(60,13);
		scanf("%d",&info.patientID);
		gotoxy(60,14);
		printf("Enter the patients gender");
		gotoxy(60,15);
		scanf("%s",&info.gender);
		
		//printf("Enter the number of tests taken");
		info.perc = 0;
		strcpy(info.glas,"NoType");
		gotoxy(60,16);
		printf("___________________________________________\n");
		
		fwrite(&info,sizeof(struct patient),1,fp);
		fclose(fp);
		gotoxy(60,17);
		printf("Do you want to add another record?(y/n): ");
		gotoxy(60,18);
		scanf("%s",&another);
        
	 	
	
        
         if(strcmp(another,"y")==0 || strcmp(another,"Y")==0){
         	system("cls");
         	tayamba();
		 }else{
		 	system("cls");

}
}
void patientrecord(){
	
	FILE*fp;
	
	struct patient info;
	fp=fopen("patient_info.dat","r");
		printf("\t\t\t\t\t\t\t=====Patient Records=====\n\n\n");
			
		if(fp==NULL){
			
			printf("\t\t\t\tCan't Open File\n");
			exit(1);
		}
			
			printf("\t\t\t\t\t\tPatient Records\n");
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
		
		while(fread(&info,sizeof(struct patient),1,fp)){
			
		printf("\n\t\t\t\t\t\tPatient Name: %s %s",info.First_name,info.last_name);
		printf("\n\t\t\t\t\t\t Ward orRoom Name: %s",info.ward);
		printf("\n\t\t\t\t\t\tHospital Book ID: %d",info.hos_no);
		printf("\n\t\t\t\t\t\tHome address or District of birth:  %s",info.vill);
		printf("\n\t\t\t\t\t\tPercentage after Eye tests: %.2f",info.perc);
		printf("\n\t\t\t\t\t\tGlasses or lenses type: %s",info.glas);
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
	//	break;
		}
		fclose(fp);
	
}

void searchpatient(){
	
	FILE*fp;
	
	struct patient info;
	int hos_no, found=0;
	
	fp=fopen("patient_info.dat","r");
	
	printf("\t\t\t\t=====Search Patient=====\n\n\n");
	printf("\t\t\tEnter patient book ID number:  ");
	scanf("%d",&hos_no);
	
	while(fread(&info,sizeof(struct patient),1,fp)){
			if(info.hos_no==hos_no){
			found=1; 
               
		}
	}
	
	if(!found){
		printf("\t\t\tRecords not found\n");
	}else{
		printf("\n\t\t\tPatient Name: %s %s",info.First_name,info.last_name);
		printf("\n\t\t\tWard or Room Name: %s",info.ward);
		printf("\n\t\t\tHospital Book ID: %d",info.hos_no);
		printf("\n\t\t\tHome address or District of birth:  %s",info.vill);
		printf("\n\t\t\tPercentage after Eye tests: %.2f",info.perc);
		printf("\n\t\t\tEye Glasses type: %s",info.glas);
		printf("\n\t\t\t__________________________________________________________\n");		
	}
		fclose(fp);
	
}
void patientdelete(){
	
		FILE*fp,*fp1;
	
	struct patient info;
	int hos_no,found=0;
	
	printf("\t\t\t\t=====Delete Records=====\n\n\n");
	fp=fopen("patient_info.dat","r");
	fp1=fopen("temp1. dat","w");
	
	printf("\t\t\tEnter patient book ID number:  ");
	scanf("%d",&hos_no);
		if(fp==NULL){
			
			fprintf(stderr,"\t\t\t\tCan't Open File\n");
		}
		while(fread(&info,sizeof(struct patient),1,fp)){
			if(info.hos_no==hos_no){
			found=1; 
		}else{
			fwrite(&info,sizeof(struct patient),1,fp1);
		}
	}

	if(found){
		remove("patient_info.dat");
		rename("patient_info.dat","temp1. dat");
		printf("\n\t\t\tRecord deleted successfully\n");
	}
	
	if(!found){
			printf("\n\t\t\tRecord not found!!!\n");
	}
		fclose(fp);
	    fclose(fp1);
}
		void rece(){

		char nm[20];
		//char pb[20];
		char password[MAX_PASSWORD_LENGTH]; 
		gotoxy(60,1);
		printf("RECEPTIONIST LOGIN PAGE");

        gotoxy(60,4);
		printf("ENTER YOUR DEFUALT USERNAME");
		gotoxy(60,5);
		scanf("%s",&nm);

		gotoxy(60,6);
		printf("ENTER YOUR PASSWORD");
		gotoxy(60,7);
		hidePassword(password);

		if(strcmp(nm,"admin")==0 || strcmp(password,"0000")==0){
			printf("\t\t\t\tdetails sucessfull");
		 Sleep(6);
				system("cls");
         

		}
		else{
				gotoxy(60,8);
		 printf("\t\t\t\tincorrect details\n");
		 	gotoxy(60,9);
		 printf("Press any button to retry again\n");
		 getch();
		 system("cls");
		 rece();

		}
		Sleep(6);


		int opt;
		gotoxy(60,0);
		printf("WELCOME TO INFORMATION SEARCH PANNEL");
		gotoxy(60,2);
		printf("1. CHECK PATIENT DETAILS ");
		gotoxy(60,3);		
		printf("2. CHECK AVAILABLE DOCTORS");
		
		gotoxy(60,4);
		printf("3.EXIT");
		gotoxy(60,5);
		scanf("%d",&opt);
	

		switch(opt){

			case 1:
				system("cls");
				check();
				break;

				case 2:
					system("cls");
					book();
					break;
					
					case 3:
						system("cls");
						tayamba();
						break;

		}
		}
	
		void check(){
	
	FILE*fp;
	
	struct patient info;
	fp=fopen("patient_info.dat","r");
		printf("\t\t\t\t=====Patient Records=====\n\n\n");
			
		if(fp==NULL){
			
			fprintf(stderr,"\t\t\t\tCan't Open File\n");
		}else{
				
			printf("\t\t\t\t\t\tPatient Records\n");
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
		}
		while(fread(&info,sizeof(struct patient),1,fp)){
			
		printf("\n\t\t\t\t\t\tPatient Name: %s %s",info.First_name,info.last_name);
		printf("\n\t\t\t\t\t\tWard orRoom Name: %s",info.ward);
		printf("\n\t\t\t\t\t\tHospital Book ID: %d",info.hos_no);
		printf("\n\t\t\t\t\t\tHome address or District of birth:  %s",info.vill);
		printf("\n\t\t\t\t\t\tPercentage after Eye tests: %.2f",info.perc);
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
		}
		fclose(fp);
	
	printf("\n\t\t\t\t\t\tpress any button to go back");
	getch();
	system("cls");
	rece();
}

		void book(){

				FILE *fptr;
	
	struct pano info;
	fptr=fopen("koma.dat","r");
		
			
		if(fptr==NULL){
			
			printf("\t\t\t\tCan't Open File\n");
			exit(1);
		}
		
	   printf("\t\t\t\t\t\t\t=====Employee Records=====\n\n\n");
			

		printf("\n\t\t\t\\t\t\txdb__________________________________________________________\xdb\n");
		
		while(fread(&info,sizeof(struct pano),1,fptr)){
			
		printf("\n\t\t\t\t\t\tEmployee Name: %s %s %s",info.fname,info.midle,info.last);
		printf("\n\t\t\t\t\t\tHome Address: %s",info.home);
		printf("\n\t\t\t\t\t\tIntial: %s",info.intial);
		printf("\n\t\t\t\t\t\tJob Title:  %s",info.job);
		printf("\n\t\t\t\t\t\tPassword: %s",info.pass);
		printf("\n\t\t\t\t\t\tPhone Number: %d",info.phone);
		printf("\n\t\t\t\\t\t\txdb__________________________________________________________\xdb\n");
		}
		fclose(fptr);
	printf("\t\t\t\t\t\tpress any key to go back");
	getch();
	rece();
		}



void reg(){
    char ana[50];
    FILE *fptr;
    struct pano info;
    
    
    if((fptr=fopen("koma.dat","a"))==NULL){
    	printf("error opening file");
    	exit(1);
	}
	
gotoxy(60,1);
        printf("==WELCOME TO THE DOCTOR REGISTRATION PANNEL==\n\n");
  		
		gotoxy(60,3);
        printf("Enter First Name:\n ");
        	gotoxy(60,4);
        scanf("%s",info.fname);
        	gotoxy(60,6);
        printf("Enter your Middle Name:\n");
        	gotoxy(60,7);
        scanf("%s",info.midle);
	gotoxy(60,8);
        printf("Enter your Last Name\n");
        	gotoxy(60,9);
        scanf("%s",info.last);
	gotoxy(60,10);
        printf("Enter your Intials\n");
        	gotoxy(60,11);
        scanf("%s",info.intial);
	gotoxy(60,12);
      	printf("Enter your phone Number\n");
      		gotoxy(60,13);
        scanf("%d",&info.phone);
	gotoxy(60,14);
    	printf("Enter Age:\n ");
    		gotoxy(60,15);
      	scanf("%d",&info.age);
	gotoxy(60,16);
        printf("Enter your area of Residence\n");
        	gotoxy(60,17);
        scanf("%s",info.home);
	gotoxy(60,18);
        printf("Enter your Job Title\n");
        	gotoxy(60,19);
        scanf("%s",info.job);
	gotoxy(60,20);
        printf("Create a strong Password\n");
        	gotoxy(60,21);
        scanf("%s",info.pass);
        
        fwrite(&info,sizeof(struct pano),1,fptr);
        
        fclose(fptr);
        	gotoxy(60,23);
        		printf("Do you want to add another record?(y/n): ");
        			gotoxy(60,24);
	        	scanf("%s",&ana);
        
        
         if(strcmp(ana,"y")==0 || strcmp(ana,"Y")==0){
         	system("cls");
         	reg();
		 }else{
		 	system("cls");
		 	main();
		 }
        
        
        
}


void admin(){
	char nm[10];
char password[MAX_PASSWORD_LENGTH]; 
	gotoxy(60,2);
	printf("WELCOME TO THE ADMIN PANELL");
		
	gotoxy(60,3);
	printf("ENTER USERNAME");
	gotoxy(60,4);
	scanf("%s",&nm);
	
	gotoxy(60,5);
	printf("ENTER ADMIN PASSWORD");
	gotoxy(60,6);
	hidePassword(password);
	if(strcmp(nm,"admin")==0 || strcmp(password,"ADMIN")==0){
		
		gotoxy(60,7);
			printf("Details sucessfull");
		 Sleep(6);
				system("cls");
         

		}
		else{
				gotoxy(60,8);
		 printf("\t\t\t\tincorrect details\n");
		 	gotoxy(60,9);
		 printf("Press any button to retry again\n");
		 getch();
		 system("cls");
		 tayamba();
}
	int man;
		gotoxy(60,2);
	printf("WELCOME TO THE ADMIN PANELL");
	gotoxy(60,4);
	printf("1. EMPLOYEE INFORMATION");
	
gotoxy(60,5);
printf("2. PATIENT INFORMATON");
	
	gotoxy(60,6);
	printf("3.GO BACK");
	gotoxy(60,7);
	printf("Choice No:");
	
		gotoxy(76,7);
	scanf("%d",&man);
	
	switch(man){
		
		case 1:
			system("cls");
			indoctor();
			getch();
			break;
			
		case 2:
			system("cls");
			inpatient();
			getch();
			break;
			
			case 3:
				system("cls");
				tayamba();
				break;
	}
	

}
	void indoctor(){
		
		int on;
			gotoxy(60,1);
		printf("WELCOME ADMIN TO THE EMPLOYEE INFORAMTION PANEL");
		gotoxy(60,4);
		printf("1. ADD OR UPDATE INFORMATION");
			gotoxy(60,6);
		printf("2. DELETE INFORMATION");
			gotoxy(60,8);
		printf("3. SEARCH INFORMATION");
			gotoxy(60,10);
		printf("4. VIEW EMPLOYEE INFORMATION");
		gotoxy(60,12);
		printf("5.BACK");
		gotoxy(60,13);
		scanf("%d",&on);
		
		switch(on){
			
			case 1:
				system("cls");
				docadd();
			//	getch();
				break;
				
				case 2:
				system("cls");
				docdel();
				
			//	getch();
				break;
				
				case 3:
					system("cls");
					docs();
				//	getch();
					break;
					
					case 4:
						system("cls");
						docv();
					//		getch();
						break;
						
						case 5:
							system("cls");
							admin();
							break;
		}
	}

	void docadd(){
		FILE *fptr, *temp;
		struct pano info;
		char name[50];
		
		fptr=fopen("koma.dat","r+");
		if(fptr==NULL){
			printf("error opening file");
			exit(1);
		}
		gotoxy(60,1);
		printf(":::U P D A T I N G  P A G E:::");		
		temp=fopen("temp.dat","w");
		gotoxy(60,3);
		printf("Enter name to be updated\n");
		gotoxy(60,4);
		scanf("%s",&name);
		
		while(1){
			fread(&info,sizeof(struct pano),1,fptr);
			if(feof(fptr)){
				break;
			}
			if(strcmp(name,info.fname)!=0){
				fwrite(&info,sizeof(struct pano),1,temp);
			}else{
				gotoxy(60,5);
        printf("Enter Name:\n");
        gotoxy(60,6);
        scanf("%s",info.fname);
        gotoxy(60,7);
        printf("Enter your Middle Name:\n");
        gotoxy(60,8);
        scanf("%s",info.midle);
		gotoxy(60,9);
        printf("Enter your Last Name\n");
        gotoxy(60,10);
        scanf("%s",info.last);
		gotoxy(60,11);
        printf("Enter your Intials\n");
        gotoxy(60,12);
        scanf("%s",info.intial);
        
		gotoxy(60,13);
      	printf("Enter your phone Number\n");
      	
      	gotoxy(60,14);
        scanf("%d",&info.phone);
		
		gotoxy(60,15);
    	printf("Enter Age:\n ");
    	gotoxy(60,16);
      	scanf("%d",&info.age);
gotoxy(60,17);
        printf("Enter your area of Residence\n");
        gotoxy(60,18);
        scanf("%s",info.home);
gotoxy(60,19);
        printf("Enter your Job Title\n");
        gotoxy(60,20);
        scanf("%s",info.job);
gotoxy(60,21);
        printf("Create a strong Password\n");
        gotoxy(60,22);
        scanf("%s",info.pass);
        
        fwrite(&info,sizeof(struct pano),1,temp);
			}
			 
		}
		fclose(fptr);
		fclose(temp);
		
		remove("koma.dat");
		rename("temp.dat","koma.dat");
		
		
		
		
		
	
	}
	void docs(){
		
	FILE*fptr;
	
	struct pano info;
	char fname[50]; 
	int found=0;
	fptr=fopen("koma.dat","r");
	
	printf("\t\t\t\t\t\t\t=====S E A R C H  E M P L O Y E E=====\n\n\n");
	printf("\t\t\t\t\t\tEnter Employee First Name:  ");
	scanf("%s",&fname);
	
	while(fread(&info,sizeof(struct pano),1,fptr)==1){
			if(strcmp(info.fname,fname)==0){
			found=1; 

		}
	}
	
	if(!found){
		printf("\t\t\tRecords not found\n");
	}else{
				printf("\n\t\t\t\t\t\tEmployee First Name: %s",info.fname);
		printf("\n\t\t\t\t\t\tEmployee Middle Name: %s",info.midle);
		printf("\n\t\t\t\t\t\tEmployee Intials : %s",info.intial);
		printf("\n\t\t\t\t\t\tJob title: %s",info.job);
		printf("\n\t\t\t\t\t\tEmployee Password: %s",info.pass);
		printf("\n\t\t\t\t\t\tEnter Home address:  %s",info.home);
		printf("\n\t\t\t\t\t\tEmployee Phone Number: %d",info.phone);
		printf("\n\t\t\t\t\t\tEmployee Age: %d",info.age);
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
	}
		fclose(fptr);
	
	}
	
void docdel(){
		
		FILE *fptr, *temp;
		struct pano info;
		char name[50];
		
		fptr=fopen("koma.dat","r+");
		if(fptr==NULL){
			printf("error opening file");
			exit(1);
		}
		
		temp=fopen("temp.dat","w");
		
		printf("\t\t\t\t\t\tEnter name to be deleted\n");
		scanf("%s",&name);
		
		while(1){
			fread(&info,sizeof(struct pano),1,fptr);
			if(feof(fptr)){
				break;
			}
			if(strcmp(name,info.fname)!=0){
				fwrite(&info,sizeof(struct pano),1,temp);
			}
			 
		}
		fclose(fptr);
		fclose(temp);
		
		remove("koma.dat");
		rename("temp.dat","koma.dat");

		
	}
	
	void docv(){
	
				FILE *fptr;
	
	struct pano info;
	fptr=fopen("koma.dat","r");
		
	     printf("\t\t\t\t\t\t\t=====Employee Records=====\n\n\n");
			
		if(fptr==NULL){
			
			printf("\t\t\t\tCan't Open File\n");
			exit(1);
		}
			
		
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
		
		while(fread(&info,sizeof(struct pano),1,fptr)){
			
		printf("\n\t\t\t\t\t\tEmployee Name: %s %s %s",info.fname,info.midle,info.last);
		printf("\n\t\t\t\t\t\tHome Address: %s",info.home);
		printf("\n\t\t\t\t\t\tIntial: %s",info.intial);
		printf("\n\t\t\t\t\t\tJob Title:  %s",info.job);
		printf("\n\t\t\t\t\t\tPassword: %s",info.pass);
		printf("\n\t\t\t\t\t\tAge : %d",info.age);
		printf("\n\t\t\t\t\t\tPhone Number: %d",info.phone);
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
		

	}
			fclose(fptr);
}


//uyu nde mantu ndi view wama patients komano azipanga access ndi adminstrator

	void inpatient(){
		int zam;
		gotoxy(60,1);
		printf("WELCOME ADMIN TO THE PATIENT INFORAMTION PANEL");
			gotoxy(60,4);
		printf("1.SEARCH PATIENT INFORMATION ");
			gotoxy(60,6);
		printf("2. DELETE PATIENT INFORMATION");
			gotoxy(60,8);
		printf("3. ADD OR UPDATE PATIENT INFORMATION");
			gotoxy(60,10);
		printf("4. VIEW PATIENT INFORMATION");
			gotoxy(60,12);
		printf("5. EXIT");
			gotoxy(60,14);
			
		scanf("%d",&zam);
		
		switch(zam){
			case 1:
				system("cls");
				saka();
			
				break;
				
				case 2:
					system("cls");
					chotsa();
					break;
					
					case 3:
						system("cls");
						ika();
						break;
						
						case 4:
							system("cls");
							ona();
							break;
						case 5:
						system("cls");
						tayamba();
						break;
			
			
		}
	}
		void saka(){
			FILE*fp;
	
	struct patient info;
	int hos_no, found=0;
	
	fp=fopen("patient_info.dat","r");
	
	printf("\t\t\t\t\t\t\t=====Search Patient=====\n\n\n");
	printf("\t\t\t\t\t\tEnter patient book ID number:  ");
	scanf("%d",&hos_no);
	
	while(fread(&info,sizeof(struct patient),1,fp)){
			if(info.hos_no==hos_no){
			found=1; 
               
		}
	}
	
	if(!found){
		printf("\t\t\t\t\t\tRecords not found\n");
	}else{
		printf("\n\t\t\t\t\t\tPatient Name: %s %s",info.First_name,info.last_name);
		printf("\n\t\t\t\t\t\tWard or Room Name: %s",info.ward);
		printf("\n\t\t\t\t\t\tHospital Book ID: %d",info.hos_no);
		printf("\n\t\t\t\t\t\tHome address or District of birth:  %s",info.vill);
		printf("\n\t\t\t\t\t\tPercentage after Eye tests: %f",info.perc);
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");		
	}
		fclose(fp);
			printf("\t\t\tpress any button to go back");
		getch();
		system("cls");
		admin();
		}
		
		void chotsa(){
			
	FILE*fp,*fp1;
	
	struct patient info;
	int hos_no,found=0;
	
	printf("\t\t\t\t=====Delete Records=====\n\n\n");
	fp=fopen("patient_info.dat","r");
	fp1=fopen("temp1. dat","w");
	
	printf("\t\t\tEnter patient book ID number:  ");
	scanf("%d",&hos_no);
		if(fp==NULL){
			
			fprintf(stderr,"\t\t\t\tCan't Open File\n");
		}
		while(fread(&info,sizeof(struct patient),1,fp)){
			if(info.hos_no==hos_no){
			found=1; 
		}else{
			fwrite(&info,sizeof(struct patient),1,fp1);
		}
	}

	if(found){
		remove("patient_info.dat");
		rename("patient_info.dat","temp1. dat");
		printf("\n\t\t\tRecord deleted successfully\n");
		
			printf("\t\t\tpress any button to go back");
		getch();
		system("cls");
		admin();
	}
	
	if(!found){
			printf("\n\t\t\tRecord not found!!!\n");
				printf("\t\t\tpress any button to go back");
		getch();
		system("cls");
		admin();
	}
		fclose(fp);
	    fclose(fp1);
			
		}
		
		void ika(){
			
										
	char another;
	FILE*fp;
	struct patient info;
	
	do{
		
		system("cls");
		printf("\t\t\t\t=====Add patient info=====\n\n\n");
		
		fp=fopen("patient_info.dat","a");
		printf("\n\t\t\tEnter First Name: ");
		scanf("%s",&info.First_name);
		
		printf("\n\t\t\tEnter Last Name: ");
		scanf("%s",&info.last_name);
		
		printf("\n\t\t\tEnter Ward or Room Name: ");
		scanf("%s",&info.ward);
		
		printf("\n\t\t\tEnter Hospital Book ID: ");
		scanf("%d",&info.hos_no);
		
		printf("\n\t\t\tEnter Home address or District of birth: ");
		scanf("%s",&info.vill);
		
	//	printf("\n\t\t\tEnter Percentage after Eye tests: ");
	//	scanf("%f",&info.per);
		
		printf("\n\t\t\tPatient ID number");
		scanf("%d",&info.patientID);
		
		printf("\n\t\t\tEnter the patients gender");
		scanf("%s",&info.gender);
		
		//printf("Enter the number of tests taken");
		info.perc = 0;
		strcpy(info.glas,"NoType");
		printf("\n\t\t\t___________________________________________\n");
		
		if(fp==NULL){
			
			printf("\t\t\tCan't Open File\n");
		}else{
			
			printf("\t\t\tRecord Stored Successfully\n");
		}
		
		fwrite(&info,sizeof(struct patient),1,fp);
		fclose(fp);
		printf("\t\t\tDo you want to add another record?(y/n): ");
		scanf("%s",&another);
	 	
	 	
}while(another=='y'||another=='Y');
	printf("\t\t\tpress any button to go back");
		getch();
		system("cls");
		admin();
		}
		
		
		void ona(){
			
			
	FILE *fp;
	
	struct patient info;
	fp=fopen("patient_info.dat","r");
		printf("\t\t\t\t=====Patient Records=====\n\n\n");
			
		if(fp==NULL){
			
			printf("\t\t\t\tCan't Open File\n");
			exit(1);
		}
			
		else{
			
			printf("\t\t\t\t\t\tPatient Records\n");
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
	
		while(fread(&info,sizeof(struct patient),1,fp)!=feof(fp)){
			
			
		printf("\n\t\t\t\t\t\tPatient Name: %s %s",info.First_name,info.last_name);
		printf("\n\t\t\t\t\t\tWard orRoom Name: %s",info.ward);
		printf("\n\t\t\t\t\t\tHospital Book ID: %d",info.hos_no);
		printf("\n\t\t\t\t\t\tHome address or District of birth:  %s",info.vill);
		printf("\n\t\t\t\t\t\tPercentage after Eye tests: %f",info.perc);
		printf("\n\t\t\t\t\t\tglass type: %s",info.glas);
		printf("\n\t\t\t\t\t\t__________________________________________________________\n");
		
			
		        break;
		        
		      if(!feof(fp)){
		      	continue;
			  }  
			  
		break;	  
	}
	
}		
	
			fclose(fp);

		printf("\t\t\tpress any button to go back");
		getch();
		system("cls");
		tayamba();
		}
	
	



	
	
