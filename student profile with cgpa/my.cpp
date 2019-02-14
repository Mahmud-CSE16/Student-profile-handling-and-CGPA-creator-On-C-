#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include <sstream> ///for string stream
#include <string>
#include <iomanip>
#include"my.h"
#include"homePage.h"
#include"student_profile.h"
#include"result.h"

using namespace std;

char password[15]="teacher",password1[15]="student",Word[20];

void start(){
    design();
    gotoxy(20,9);
    cout<<"\xb2\xb2\xb2\xB2\xB1 Khulna University of Engineering & Technology \xb1\xB2\xb2\xb2\xb2";
    gotoxy(33,12);
    cout<<"\xb1\xb1\xb1\xb2 Welcome to Our Varsity \xb2\xb1\xb1\xb1";
    gotoxy(45,18);
    cout<<"Press any key to continue........";
    getch();
    Password();
}

void design(){
    system("cls");
    gotoxy(1,1);
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\xdb\xb3 KUET \xb3\xdb@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    gotoxy(1,2);cout<<"&"; gotoxy(100,2);cout<<"&";
    int i;
    for(i=3;i<27;i++){
    gotoxy(1,i);cout<<"\xdb";gotoxy(100,i);cout<<"\xdb";
    }
    gotoxy(1,27);
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    gotoxy(2,26);Time();gotoxy(84,26);date();

}


COORD coord = {0, 0}; // sets coordinates to 0,0
void gotoxy (int x, int y){
        coord.X = x; coord.Y = y; // X and Y coordinates
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void  delay(unsigned int mseconds){
    clock_t goal=mseconds+clock();
    while (goal>clock());
}


int Time(){
    char dest[50];
    time_t t;
    struct tm *tm;
    char pm[3],HH[3],MM[3],SS[3];
    t=time(NULL);
    tm=localtime(&t);

    strftime(dest,50,"%I %M %S %p",tm);
    stringstream sin(dest);
    sin>>HH>>MM>>SS>>pm;
    ///sscanf(dest,"%s %s %s %s",&HH,&MM,&SS,pm);
    printf("Time: %s:%s:%s %s\n",HH,MM,SS,pm);
}
int date(){
    char dest[50];
    time_t t;
    struct tm *tm;
    int dd,mm,yy;
    t=time(NULL);
    tm=localtime(&t);

    strftime(dest,50,"%d %m %Y",tm);
    stringstream sin(dest);
    sin>>dd>>mm>>yy;
    ///sscanf(dest,"%d %d %d",&dd,&mm,&yy);
    printf("Date: %d/%d/%d\n",dd,mm,yy);
}
void Password(){
    system("cls");
    design();
    gotoxy(15,4);
    printf("\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1 Password Protected \xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2\xb1\xb2\xb2");
    char ch;
    int i=0;
    gotoxy(15,6);
    printf("\xb2\xb2\xb1 What your position? \xb1\xb2\xb2");
    gotoxy(15,7);
    printf("1. Teacher");
    gotoxy(15,8);
    printf("2. Student");
    gotoxy(15,9);
    printf("--------------------------");
    gotoxy(15,10);
    printf("Enter your position:");
    int a;
    scanf("%d",&a);
    if(a==1){
    gotoxy(15,14);
    printf("Enter Password:");
    while(ch!=13){
        ch=getch();
        if(ch!=13){
           cout<<"*";
           Word[i++]=ch;
        }
    }
    Word[i]='\0';
    if(strcmp(Word,password)==0){
        gotoxy(22,17);
        printf("\xdb\xb2\xb2\xb1\xb1\xb1 Password Match \xb1\xb1\xb1\xb2\xb2\xdb");
        gotoxy(35,20);
        printf("Press any key to continue........");
        getch();
        homePage();
    }
    else{
        gotoxy(15,17);
        printf("\aWarning!! Incorrect Password\a");
        gotoxy(35,20);
        printf("Press enter key to \"Retry\"");
        getch();
        Password();
    }
    }
    else if(a==2){
        gotoxy(15,14);
    printf("Enter Password:");
    while(ch!=13){
        ch=getch();
        if(ch!=13){
           cout<<"*";
           Word[i++]=ch;
        }
    }
    Word[i]='\0';
    if(strcmp(Word,password1)==0){
        gotoxy(22,17);
        printf("\xdb\xb2\xb2\xb1\xb1\xb1 Password Match \xb1\xb1\xb1\xb2\xb2\xdb");
        gotoxy(35,20);
        printf("Press any key to continue........");
        getch();
        homePage();
    }
    else{
        gotoxy(15,17);
        printf("\aWarning!! Incorrect Password\a");
        gotoxy(35,20);
        printf("Press enter key to \"Retry\"");
        getch();
        Password();
    }
    }
    else{
        gotoxy(15,17);
        printf("\aWarning Enter\a");
        gotoxy(35,20);
        printf("Press any key to \"Retry\"");
        getch();
        Password();
    }
}



