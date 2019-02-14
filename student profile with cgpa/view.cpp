#include<bits/stdc++.h>
#include<iostream>
#include<windows.h>
#include<conio.h>
#include"my.h"
#include"homePage.h"
#include"s_admission.h"
#include"view.h"
#include"student_profile.h"
#include"result.h"

using namespace std;

void view_student(){
    system("cls");
    design();
    student obj;
    fstream fin("student.txt",ios_base::in|ios_base::binary);
    gotoxy(23,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Show All Student \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,5);cout<<"\xdb\xb2\xb1 SI No:";
    gotoxy(25,5);cout<<"\xdb\xb2\xb1 Name";
    gotoxy(45,5);cout<<"\xdb\xb2\xb1 ID No.";
    gotoxy(60,5);cout<<"\xdb\xb2\xb1 Department";
    gotoxy(80,5);cout<<"\xdb\xb2\xb1 varsity";

    gotoxy(10,6);cout<<"---------";
    gotoxy(25,6);cout<<"--------";
    gotoxy(45,6);cout<<"---------";
    gotoxy(60,6);cout<<"--------------";
    gotoxy(80,6);cout<<"-----------";
    int i=0;
    while(fin.read((char *) &obj, sizeof obj))
    {
        ++i;
        gotoxy(10,6+i);cout<<i<<".";
        gotoxy(25,6+i);cout<<obj.name;
        gotoxy(45,6+i);cout<<obj.s_id;
        gotoxy(60,6+i);cout<<obj.department;
        gotoxy(80,6+i);cout<<obj.varsity;
    }
    fin.close();
    gotoxy(60,23);cout<<"\xdb\xb2\xb1 Goto Admission Page......[Enter]";
    getch();
    s_admission();
}
