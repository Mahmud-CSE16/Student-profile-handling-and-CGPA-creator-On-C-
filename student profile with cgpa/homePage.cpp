#include<bits/stdc++.h>
#include<conio.h>
#include <iomanip>
#include"homePage.h"
#include"my.h"
#include"s_admission.h"
#include"view.h"
#include"student_profile.h"
#include"result.h"

using namespace std;

void homePage(){
    system("cls");
    design();
    gotoxy(20,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Home Page \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(20,5);
    cout<<"\xDB\xb2\xB1 1. Student Admission";
    gotoxy(20,7);
    cout<<"\xDB\xb2\xb1 2. Search Student for seeing (his/her) profile";
    gotoxy(20,9);
    cout<<"\xDB\xb2\xb1 3. Result";
    gotoxy(20,11);
    cout<<"\xDB\xb2\xb1 4. Back to First Page.";
    gotoxy(20,13);
    cout<<"\xDB\xb2\xb1 5. Close Application";
    gotoxy(20,15);
    cout<<"------------------------------------------";
    gotoxy(20,16);
    cout<<"Enter your choice:";
    int c;
    cin>>c;
    switch (c){
       case 1:
              s_admission();
           break;
       case 2:
              student_profile();
           break;
       case 3:
              res::result();
           break;
       case 4:
           start();
           break;
       case 5:
           system("cls");
           design();
           gotoxy(25,10);
           cout<<"\xb1\xb2\xdb Thanks for visiting. \xdb\xb2\xb1";
           delay(3000);
           gotoxy(20,28);
           exit(0);
      default:{
          gotoxy(15,19);
          cout<<"\aWrong Entry!!Please re-entered correct option";
          getch();
          homePage();
         }
    }
}
