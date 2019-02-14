#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include"my.h"
#include"homePage.h"
#include"s_admission.h"
#include"view.h"
#include"student_profile.h"
#include"result.h"

using namespace std;
using namespace res;
void res::result()
{
    system("cls");
    design();
    gotoxy(23,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Result Page \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(20,5);
    cout<<"\xDB\xb2\xB1 1. Result Update";
    gotoxy(20,7);
    cout<<"\xDB\xb2\xb1 2. Result Publish";
    gotoxy(20,9);
    cout<<"\xDB\xb2\xb1 3. Back to Home Page.";
    gotoxy(20,11);
    cout<<"------------------------------------------";
    gotoxy(20,12);
    cout<<"Enter your choice:";
    int c;
    cin>>c;
    switch (c)
    {
    case 1:
        result_update();
        break;
    case 2:
        result_publish();
        break;
    case 3:
        homePage();
        break;
    default:
    {
        gotoxy(15,19);
        cout<<"\aWrong Entry!!Please re-entered correct option";
        getch();
        result();
    }
    }
}

void res::result_update()
{
    system("cls");
    design();
    student obj;
    int id;
    gotoxy(23,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Update Student Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,5);
    cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Search by Student ID:";
    gotoxy(20,7);
    cout<<"\xdb\xdb\xb2\xb1 Enter Student ID:";
    cin>>id;
    fstream fout("student.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(fout.read((char*)&obj,sizeof obj))
    {
        if(obj.s_id==id)
        {
            gotoxy(30,9);
            cout<<"\xdb\xb2\xb1 Student Record \xb1\xb2\xdb";
            cout<<obj;
            i=1;
            break;
        }
    }
    fout.close();
    if(i==0)
    {
        gotoxy(30,11);
        cout<<"\xdb\xb2\xb1 Record is Not Found \xb1\xb2\xdb";
        gotoxy(60,20);
        cout<<"\xdb\xb2\xb1 Goto Home Page .....[Enter]";
        getch();
        homePage();
    }
    else
    {
        gotoxy(20,15);
        cout<<"----------------------------------";
        gotoxy(20,17);
        cout<<"\xdb\xdb\xb2\xb2\xb1 See Profile..........[Enter]";
        getch();
A:
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
        gotoxy(20,6);
        cout<<"\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
        gotoxy(20,7);
        cout<<"\xdb\xb2\xb1 Department: "<<obj.department<<endl;
        gotoxy(20,8);
        cout<<"\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
        gotoxy(20,10);
        cout<<"--------------------------------------------------------------";
        gotoxy(30,11);
        cout<<"Which Semester Result You Want to Update.";
        gotoxy(20,12);
        cout<<"--------------------------------------------------------------";
        gotoxy(30,14);
        cout<<"1.One One";
        gotoxy(50,14);
        cout<<"5.Three One";
        gotoxy(30,15);
        cout<<"2.One Two";
        gotoxy(50,15);
        cout<<"6.Three Two";
        gotoxy(30,16);
        cout<<"3.Tow One";
        gotoxy(50,16);
        cout<<"7.Four One";
        gotoxy(30,17);
        cout<<"4.Two Two";
        gotoxy(50,17);
        cout<<"8.Four Two";
        gotoxy(30,18);
        cout<<"9.Result Page";
        gotoxy(50,18);
        cout<<"10.Home Page";
        gotoxy(20,19);
        cout<<"---------------------------------------------------------------";
        gotoxy(20,20);
        cout<<"Enter your choice:";
        int c;
        cin>>c;
        switch (c)
        {
        case 1:{
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
            gotoxy(20,4);
            cout<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
            gotoxy(20,5);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
            gotoxy(20,7);
            cout<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
            one_one obj_11;
            One_One(obj_11, id);
            goto A;
            break;
        }
        case 2:
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
            gotoxy(20,4);
            cout<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
            gotoxy(20,5);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
            gotoxy(20,7);
            cout<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
            One_Two( id);
            goto A;
            break;
        case 3:
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
            gotoxy(20,4);
            cout<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
            gotoxy(20,5);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
            gotoxy(20,7);
            cout<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
            Two_One( id);
            goto A;
            break;
        case 4:
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
            gotoxy(20,4);
            cout<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
            gotoxy(20,5);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
            gotoxy(20,7);
            cout<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
            Two_Two( id);
            goto A;
            break;
        case 5:
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
            gotoxy(20,4);
            cout<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
            gotoxy(20,5);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
            gotoxy(20,7);
            cout<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
            Three_One( id);
            goto A;
            break;
        case 6:
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
            gotoxy(20,4);
            cout<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
            gotoxy(20,5);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
            gotoxy(20,7);
            cout<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
            Three_Two( id);
            goto A;
            break;
        case 7:
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
            gotoxy(20,4);
            cout<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
            gotoxy(20,5);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
            gotoxy(20,7);
            cout<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
            Four_One( id);
            goto A;
            break;
        case 8:
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
            gotoxy(20,4);
            cout<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
            gotoxy(20,5);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
            gotoxy(20,7);
            cout<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
            Four_Two( id);
            goto A;
            break;
        case 9:
            result();
            goto A;
            break;
        case 10:
            homePage();
            break;
        default:
        {
            gotoxy(10,19);
            cout<<"\aWrong Entry!!Please re-entered correct option";
            getch();
            result_update();
        }
        }
    }
}

void res::result_publish()
{
A:
    system("cls");
    design();
    cout<<fixed<<right;
    gotoxy(23,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Published Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(20,5);
    cout<<"--------------------------------------------------------------";
    gotoxy(30,6);
    cout<<"Which Semester Result You Want to See";
    gotoxy(20,7);
    cout<<"--------------------------------------------------------------";
    gotoxy(30,8);
    cout<<"1.One One";
    gotoxy(50,8);
    cout<<"5.Three One";
    gotoxy(30,9);
    cout<<"2.One Two";
    gotoxy(50,9);
    cout<<"6.Three Two";
    gotoxy(30,10);
    cout<<"3.Tow One";
    gotoxy(50,10);
    cout<<"7.Four One";
    gotoxy(30,11);
    cout<<"4.Two Two";
    gotoxy(50,11);
    cout<<"8.Four Two";
    gotoxy(30,12);
    cout<<"9.CGPA";
    gotoxy(50,12);
    cout<<"10.Home Page";
    gotoxy(20,13);
    cout<<"---------------------------------------------------------------";
    gotoxy(20,14);
    cout<<"Enter your choice:";
    int c;
    cin>>c;
    switch (c)
    {
    case 1:
    {
        one_one obj_11;
        vector<one_one>o;
        fstream f11("f11.txt",ios_base::in|ios_base::binary);
        while(f11.read((char *) &obj_11, sizeof obj_11))
        {
            o.push_back(obj_11);
        }
        f11.close();
B:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 First_Year First_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.GPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_11(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto B;
        }
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 GPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<setprecision(2)<<o[i].total_credit_11;
            gotoxy(55,10+i);
            cout<<setprecision(2)<<o[i].complete_credit_11;
            gotoxy(75,10+i);
            cout<<setprecision(2)<<o[i].gpa_11;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 2:{
        one_two obj_12;
        vector<one_two>o;
        fstream f12("f12.txt",ios_base::in|ios_base::binary);
        while(f12.read((char *) &obj_12, sizeof obj_12))
        {
            o.push_back(obj_12);
        }
        f12.close();
C:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 First_Year Second_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.GPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_12(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto C;
        }
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 GPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<setprecision(2)<<o[i].total_credit_12;
            gotoxy(55,10+i);
            cout<<setprecision(2)<<o[i].complete_credit_12;
            gotoxy(75,10+i);
            cout<<setprecision(2)<<o[i].gpa_12;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 3:{
        two_one obj_21;
        vector<two_one>o;
        fstream f21("f21.txt",ios_base::in|ios_base::binary);
        while(f21.read((char *) &obj_21, sizeof obj_21))
        {
            o.push_back(obj_21);
        }
        f21.close();
D:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Second_Year First_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.GPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_21(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto D;
        }
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 GPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<setprecision(2)<<o[i].total_credit_21;
            gotoxy(55,10+i);
            cout<<setprecision(2)<<o[i].complete_credit_21;
            gotoxy(75,10+i);
            cout<<setprecision(2)<<o[i].gpa_21;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 4:
        {
        two_two obj_22;
        vector<two_two>o;
        fstream f22("f22.txt",ios_base::in|ios_base::binary);
        while(f22.read((char *) &obj_22, sizeof obj_22))
        {
            o.push_back(obj_22);
        }
        f22.close();
E:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Second_Year Second_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.GPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_22(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto E;
        }
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 GPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<setprecision(2)<<o[i].total_credit_22;
            gotoxy(55,10+i);
            cout<<setprecision(2)<<o[i].complete_credit_22;
            gotoxy(75,10+i);
            cout<<setprecision(2)<<o[i].gpa_22;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 5:{
        three_one obj_31;
        vector<three_one>o;
        fstream f31("f31.txt",ios_base::in|ios_base::binary);
        while(f31.read((char *) &obj_31, sizeof obj_31))
        {
            o.push_back(obj_31);
        }
        f31.close();
F:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Third_Year First_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.GPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_31(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto F;
        }
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 GPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<o[i].total_credit_31;
            gotoxy(55,10+i);
            cout<<o[i].complete_credit_31;
            gotoxy(75,10+i);
            cout<<o[i].gpa_31;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 6:{
        three_two obj_32;
        vector<three_two>o;
        fstream f32("f32.txt",ios_base::in|ios_base::binary);
        while(f32.read((char *) &obj_32, sizeof obj_32))
        {
            o.push_back(obj_32);
        }
        f32.close();
G:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Third_Year Second_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.GPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_32(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto G;
        }
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 GPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<o[i].total_credit_32;
            gotoxy(55,10+i);
            cout<<o[i].complete_credit_32;
            gotoxy(75,10+i);
            cout<<o[i].gpa_32;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 7:{
        four_one obj_41;
        vector<four_one>o;
        fstream f41("f41.txt",ios_base::in|ios_base::binary);
        while(f41.read((char *) &obj_41, sizeof obj_41))
        {
            o.push_back(obj_41);
        }
        f41.close();
H:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Forth_Year First_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.GPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_41(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto H;
        }one_one obj_11;
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 GPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<setprecision(2)<<o[i].total_credit_41;
            gotoxy(55,10+i);
            cout<<setprecision(2)<<o[i].complete_credit_41;
            gotoxy(75,10+i);
            cout<<setprecision(2)<<o[i].gpa_41;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 8:{
        four_two obj_42;
        vector<four_two>o;
        fstream f42("f42.txt",ios_base::in|ios_base::binary);
        while(f42.read((char *) &obj_42, sizeof obj_42))
        {
            o.push_back(obj_42);
        }
        f42.close();
I:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Forth_Year Second_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.GPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_42(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto I;
        }
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 GPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<setprecision(2)<<o[i].total_credit_42;
            gotoxy(55,10+i);
            cout<<setprecision(2)<<o[i].complete_credit_42;
            gotoxy(75,10+i);
            cout<<setprecision(2)<<o[i].gpa_42;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 9:{
        CGPA<double> obj_cgpa;
        vector< CGPA<double> >o;
        fstream fcgpa("fcgpa.txt",ios_base::in|ios_base::binary);
        while(fcgpa.read((char *) &obj_cgpa, sizeof obj_cgpa))
        {
            o.push_back(obj_cgpa);
        }
        fcgpa.close();
J:
        int a;
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 CGPA   Result   \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Which Way(Oder) You Want to See?";
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 1.Student ID      \xdb\xb2\xb1 2.CGPA: ";
        cin>>a;
        if(a==1||a==2){
            sort(o.begin(),o.end(),com_cgpa(a));
        }
        else{
            gotoxy(10,10);
            cout<<"\a\xdb\xb2\xb1 Wrong Entry!!Please re-entered correct option";
            goto J;
        }
        gotoxy(10,8);
        cout<<"\xdb\xb2\xb1 Student ID";
        gotoxy(30,8);
        cout<<"\xdb\xb2\xb1 Total Credit";
        gotoxy(50,8);
        cout<<"\xdb\xb2\xb1 Complete Credit";
        gotoxy(70,8);
        cout<<"\xdb\xb2\xb1 CGPA";

        gotoxy(10,9);
        cout<<"------------";
        gotoxy(30,9);
        cout<<"--------------";
        gotoxy(50,9);
        cout<<"---------------";
        gotoxy(70,9);
        cout<<"---------";
        for(int i=0; i<o.size(); i++)
        {
            gotoxy(10,10+i);
            cout<<o[i].s_id;
            gotoxy(35,10+i);
            cout<<setprecision(2)<<o[i].total_credit;
            gotoxy(55,10+i);
            cout<<setprecision(2)<<o[i].complete_credit;
            gotoxy(75,10+i);
            cout<<setprecision(2)<<o[i].cgpa;
        }
        gotoxy(60,23);
        cout<<"\xdb\xb2\xb1 Goto back......[Enter]";
        getch();
        goto A;
        break;
    }
    case 10:
        homePage();
        break;
    default:
    {
        gotoxy(10,19);
        cout<<"\aWrong Entry!!Please re-entered correct option";
        getch();
        result_update();
    }
    }
}

template<typename T>
void res::One_One(T obj_11,int id)
{
    fstream f11("f11.txt",ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
    while(f11.read((char*)&obj_11,sizeof obj_11))
    {
        if(obj_11.s_id==id)
        {
            obj_11.show();
            i=1;
            break;
        }
        rec++;
    }
    pos= rec*sizeof obj_11;
    gotoxy(50,23);
    cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Update Result(y/n):";
    char ch=getch();
    if(ch=='y')
    {
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add Grate Point of Each Subject(11) \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 Course";
        gotoxy(50,6);
        cout<<"\xdb\xb2\xb1 Grate Point ";
        gotoxy(30,7);
        cout<<"-----------";
        gotoxy(50,7);
        cout<<"--------------";
        int i;
        double gp=0;
        double c=0;
        for(i=0; i<obj_11.total_course_11; i++)
        {
            gotoxy(35,8+i);
            cout<<obj_11.course_11[i];
            gotoxy(50,8+i);
            cout<<":";
            gotoxy(55,8+i);
            cin>>obj_11.course_gp_11[i];
            gp=gp+obj_11.course_gp_11[i]*obj_11.course_credit_11[i];
            if(obj_11.course_gp_11[i]!=0)
            {
                c=c+obj_11.course_credit_11[i];
            }
        }
        obj_11.total_gp_11=gp;
        obj_11.complete_credit_11=c;
        obj_11.gpa_11=(gp/c);

        gotoxy(20,11+i);
        cout<<"\xdb\xdb\xb2\xb1...............[Save]";
        getch();
        f11.seekp(pos);
        f11.write((char*)&obj_11,sizeof obj_11)<<flush;
        f11.close();


        CGPA<double> obj_cgpa;
        fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::binary);
        streampos pos;
        long rec=0;
        while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
        {
            if(obj_cgpa.s_id==id)
            {
                break;
            }
            rec++;
        }
        pos= rec*sizeof obj_cgpa;

        obj_cgpa.total_gp_11=gp;
        obj_cgpa.total_gp=(obj_cgpa.total_gp_11+obj_cgpa.total_gp_12+obj_cgpa.total_gp_21+obj_cgpa.total_gp_22+obj_cgpa.total_gp_31+obj_cgpa.total_gp_32+obj_cgpa.total_gp_41+obj_cgpa.total_gp_42);

        obj_cgpa.complete_credit_11=c;
        obj_cgpa.complete_credit=(obj_cgpa.complete_credit_11+obj_cgpa.complete_credit_12+obj_cgpa.complete_credit_21+obj_cgpa.complete_credit_22+obj_cgpa.complete_credit_31+obj_cgpa.complete_credit_32+obj_cgpa.complete_credit_41+obj_cgpa.complete_credit_42);

        obj_cgpa.gpa_11=gp/c;

        obj_cgpa.cgpa=(obj_cgpa.total_gp/obj_cgpa.complete_credit);

        fcgpa.seekp(pos);
        fcgpa.write((char*)&obj_cgpa,sizeof obj_cgpa)<<flush;
        fcgpa.close();


        gotoxy(30,22);
        cout<<"\xdb\xdb\xb2\xb1 The Result is successfully saved";
        gotoxy(60,22);
        /*cout<<"\xdb\xb2\xb1 Goto Result Page .....[Enter]";
        getch();
        res::result();*/
    }
    gotoxy(60,25);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}
void res::One_Two(int id)
{
    one_two obj_12;
    fstream f12("f12.txt",ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
    while(f12.read((char*)&obj_12,sizeof obj_12))
    {
        if(obj_12.s_id==id)
        {
            obj_12.show();
            i=1;
            break;
        }
        rec++;
    }
    pos= rec*sizeof obj_12;
    gotoxy(50,23);
    cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Update Result(y/n):";
    char ch=getch();
    if(ch=='y')
    {
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add Grate Point of Each Subject(12) \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 Course";
        gotoxy(50,6);
        cout<<"\xdb\xb2\xb1 Grate Point ";
        gotoxy(30,7);
        cout<<"-----------";
        gotoxy(50,7);
        cout<<"--------------";
        int i;
        double gp=0;
        double c=0;
        for(i=0; i<obj_12.total_course_12; i++)
        {
            gotoxy(35,8+i);
            cout<<obj_12.course_12[i];
            gotoxy(50,8+i);
            cout<<":";
            gotoxy(55,8+i);
            cin>>obj_12.course_gp_12[i];
            gp=gp+obj_12.course_gp_12[i]*obj_12.course_credit_12[i];
            if(obj_12.course_gp_12[i]!=0)
            {
                c=c+obj_12.course_credit_12[i];
            }
        }
        obj_12.total_gp_12=gp;
        obj_12.complete_credit_12=c;
        obj_12.gpa_12=(gp/c);

        gotoxy(20,11+i);
        cout<<"\xdb\xdb\xb2\xb1...............[Save]";
        getch();
        f12.seekp(pos);
        f12.write((char*)&obj_12,sizeof obj_12)<<flush;
        f12.close();


        CGPA<double> obj_cgpa;
        fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::binary);
        streampos pos;
        long rec=0;
        while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
        {
            if(obj_cgpa.s_id==id)
            {
                break;
            }
            rec++;
        }
        pos= rec*sizeof obj_cgpa;

        obj_cgpa.total_gp_12=gp;
        obj_cgpa.total_gp=(obj_cgpa.total_gp_11+obj_cgpa.total_gp_12+obj_cgpa.total_gp_21+obj_cgpa.total_gp_22+obj_cgpa.total_gp_31+obj_cgpa.total_gp_32+obj_cgpa.total_gp_41+obj_cgpa.total_gp_42);

        obj_cgpa.complete_credit_12=c;
        obj_cgpa.complete_credit=(obj_cgpa.complete_credit_11+obj_cgpa.complete_credit_12+obj_cgpa.complete_credit_21+obj_cgpa.complete_credit_22+obj_cgpa.complete_credit_31+obj_cgpa.complete_credit_32+obj_cgpa.complete_credit_41+obj_cgpa.complete_credit_42);

        obj_cgpa.gpa_12=gp/c;

        obj_cgpa.cgpa=(obj_cgpa.total_gp/obj_cgpa.complete_credit);

        fcgpa.seekp(pos);
        fcgpa.write((char*)&obj_cgpa,sizeof obj_cgpa)<<flush;
        fcgpa.close();


        gotoxy(30,22);
        cout<<"\xdb\xdb\xb2\xb1 The Result is successfully saved";
        gotoxy(60,22);
        /*cout<<"\xdb\xb2\xb1 Goto Result Page .....[Enter]";
        getch();
        res::result();*/
    }
    gotoxy(60,25);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}
void res::Two_One(int id)
{
    two_one obj_21;
    fstream f21("f21.txt",ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
    while(f21.read((char*)&obj_21,sizeof obj_21))
    {
        if(obj_21.s_id==id)
        {
            obj_21.show();
            i=1;
            break;
        }
        rec++;
    }
    pos= rec*sizeof obj_21;
    gotoxy(50,23);
    cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Update Result(y/n):";
    char ch=getch();
    if(ch=='y')
    {
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add Grate Point of Each Subject(21) \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 Course";
        gotoxy(50,6);
        cout<<"\xdb\xb2\xb1 Grate Point ";
        gotoxy(30,7);
        cout<<"-----------";
        gotoxy(50,7);
        cout<<"--------------";
        int i;
        double gp=0;
        double c=0;
        for(i=0; i<obj_21.total_course_21; i++)
        {
            gotoxy(35,8+i);
            cout<<obj_21.course_21[i];
            gotoxy(50,8+i);
            cout<<":";
            gotoxy(55,8+i);
            cin>>obj_21.course_gp_21[i];
            gp=gp+obj_21.course_gp_21[i]*obj_21.course_credit_21[i];
            if(obj_21.course_gp_21[i]!=0)
            {
                c=c+obj_21.course_credit_21[i];
            }
        }
        obj_21.total_gp_21=gp;
        obj_21.complete_credit_21=c;
        obj_21.gpa_21=(gp/c);

        gotoxy(20,11+i);
        cout<<"\xdb\xdb\xb2\xb1...............[Save]";
        getch();
        f21.seekp(pos);
        f21.write((char*)&obj_21,sizeof obj_21)<<flush;
        f21.close();


        CGPA<double> obj_cgpa;
        fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::binary);
        streampos pos;
        long rec=0;
        while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
        {
            if(obj_cgpa.s_id==id)
            {
                break;
            }
            rec++;
        }
        pos= rec*sizeof obj_cgpa;

        obj_cgpa.total_gp_21=gp;
        obj_cgpa.total_gp=(obj_cgpa.total_gp_11+obj_cgpa.total_gp_12+obj_cgpa.total_gp_21+obj_cgpa.total_gp_22+obj_cgpa.total_gp_31+obj_cgpa.total_gp_32+obj_cgpa.total_gp_41+obj_cgpa.total_gp_42);

        obj_cgpa.complete_credit_21=c;
        obj_cgpa.complete_credit=(obj_cgpa.complete_credit_11+obj_cgpa.complete_credit_12+obj_cgpa.complete_credit_21+obj_cgpa.complete_credit_22+obj_cgpa.complete_credit_31+obj_cgpa.complete_credit_32+obj_cgpa.complete_credit_41+obj_cgpa.complete_credit_42);

        obj_cgpa.gpa_21=gp/c;

        obj_cgpa.cgpa=(obj_cgpa.total_gp/obj_cgpa.complete_credit);

        fcgpa.seekp(pos);
        fcgpa.write((char*)&obj_cgpa,sizeof obj_cgpa)<<flush;
        fcgpa.close();


        gotoxy(30,22);
        cout<<"\xdb\xdb\xb2\xb1 The Result is successfully saved";
        gotoxy(60,22);
        /*cout<<"\xdb\xb2\xb1 Goto Result Page .....[Enter]";
        getch();
        res::result();*/
    }
    gotoxy(60,25);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void res::Two_Two(int id)
{
    two_two obj_22;
    fstream f22("f22.txt",ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
    while(f22.read((char*)&obj_22,sizeof obj_22))
    {
        if(obj_22.s_id==id)
        {
            obj_22.show();
            i=1;
            break;
        }
        rec++;
    }
    pos= rec*sizeof obj_22;
    gotoxy(50,23);
    cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Update Result(y/n):";
    char ch=getch();
    if(ch=='y')
    {
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add Grate Point of Each Subject(22) \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 Course";
        gotoxy(50,6);
        cout<<"\xdb\xb2\xb1 Grate Point ";
        gotoxy(30,7);
        cout<<"-----------";
        gotoxy(50,7);
        cout<<"--------------";
        int i;
        double gp=0;
        double c=0;
        for(i=0; i<obj_22.total_course_22; i++)
        {
            gotoxy(35,8+i);
            cout<<obj_22.course_22[i];
            gotoxy(50,8+i);
            cout<<":";
            gotoxy(55,8+i);
            cin>>obj_22.course_gp_22[i];
            gp=gp+obj_22.course_gp_22[i]*obj_22.course_credit_22[i];
            if(obj_22.course_gp_22[i]!=0)
            {
                c=c+obj_22.course_credit_22[i];
            }
        }
        obj_22.total_gp_22=gp;
        obj_22.complete_credit_22=c;
        obj_22.gpa_22=(gp/c);

        gotoxy(20,11+i);
        cout<<"\xdb\xdb\xb2\xb1...............[Save]";
        getch();
        f22.seekp(pos);
        f22.write((char*)&obj_22,sizeof obj_22)<<flush;
        f22.close();


        CGPA<double> obj_cgpa;
        fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::binary);
        streampos pos;
        long rec=0;
        while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
        {
            if(obj_cgpa.s_id==id)
            {
                break;
            }
            rec++;
        }
        pos= rec*sizeof obj_cgpa;

        obj_cgpa.total_gp_22=gp;
        obj_cgpa.total_gp=(obj_cgpa.total_gp_11+obj_cgpa.total_gp_12+obj_cgpa.total_gp_21+obj_cgpa.total_gp_22+obj_cgpa.total_gp_31+obj_cgpa.total_gp_32+obj_cgpa.total_gp_41+obj_cgpa.total_gp_42);

        obj_cgpa.complete_credit_22=c;
        obj_cgpa.complete_credit=(obj_cgpa.complete_credit_11+obj_cgpa.complete_credit_12+obj_cgpa.complete_credit_21+obj_cgpa.complete_credit_22+obj_cgpa.complete_credit_31+obj_cgpa.complete_credit_32+obj_cgpa.complete_credit_41+obj_cgpa.complete_credit_42);

        obj_cgpa.gpa_22=gp/c;

        obj_cgpa.cgpa=(obj_cgpa.total_gp/obj_cgpa.complete_credit);

        fcgpa.seekp(pos);
        fcgpa.write((char*)&obj_cgpa,sizeof obj_cgpa)<<flush;
        fcgpa.close();


        gotoxy(30,22);
        cout<<"\xdb\xdb\xb2\xb1 The Result is successfully saved";
        gotoxy(60,22);
        /*cout<<"\xdb\xb2\xb1 Goto Result Page .....[Enter]";
        getch();
        res::result();*/
    }
    gotoxy(60,25);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void res::Three_One(int id)
{
    three_one obj_31;
    fstream f31("f31.txt",ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
    while(f31.read((char*)&obj_31,sizeof obj_31))
    {
        if(obj_31.s_id==id)
        {
            obj_31.show();
            i=1;
            break;
        }
        rec++;
    }
    pos= rec*sizeof obj_31;
    gotoxy(50,23);
    cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Update Result(y/n):";
    char ch=getch();
    if(ch=='y')
    {
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add Grate Point of Each Subject(31) \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 Course";
        gotoxy(50,6);
        cout<<"\xdb\xb2\xb1 Grate Point ";
        gotoxy(30,7);
        cout<<"-----------";
        gotoxy(50,7);
        cout<<"--------------";
        int i;
        double gp=0;
        double c=0;
        for(i=0; i<obj_31.total_course_31; i++)
        {
            gotoxy(35,8+i);
            cout<<obj_31.course_31[i];
            gotoxy(50,8+i);
            cout<<":";
            gotoxy(55,8+i);
            cin>>obj_31.course_gp_31[i];
            gp=gp+obj_31.course_gp_31[i]*obj_31.course_credit_31[i];
            if(obj_31.course_gp_31[i]!=0)
            {
                c=c+obj_31.course_credit_31[i];
            }
        }
        obj_31.total_gp_31=gp;
        obj_31.complete_credit_31=c;
        obj_31.gpa_31=(gp/c);

        gotoxy(20,11+i);
        cout<<"\xdb\xdb\xb2\xb1...............[Save]";
        getch();
        f31.seekp(pos);
        f31.write((char*)&obj_31,sizeof obj_31)<<flush;
        f31.close();


        CGPA<double> obj_cgpa;
        fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::binary);
        streampos pos;
        long rec=0;
        while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
        {
            if(obj_cgpa.s_id==id)
            {
                break;
            }
            rec++;
        }
        pos= rec*sizeof obj_cgpa;

        obj_cgpa.total_gp_31=gp;
        obj_cgpa.total_gp=(obj_cgpa.total_gp_11+obj_cgpa.total_gp_12+obj_cgpa.total_gp_21+obj_cgpa.total_gp_22+obj_cgpa.total_gp_31+obj_cgpa.total_gp_32+obj_cgpa.total_gp_41+obj_cgpa.total_gp_42);

        obj_cgpa.complete_credit_31=c;
        obj_cgpa.complete_credit=(obj_cgpa.complete_credit_11+obj_cgpa.complete_credit_12+obj_cgpa.complete_credit_21+obj_cgpa.complete_credit_22+obj_cgpa.complete_credit_31+obj_cgpa.complete_credit_32+obj_cgpa.complete_credit_41+obj_cgpa.complete_credit_42);

        obj_cgpa.gpa_31=gp/c;

        obj_cgpa.cgpa=(obj_cgpa.total_gp/obj_cgpa.complete_credit);

        fcgpa.seekp(pos);
        fcgpa.write((char*)&obj_cgpa,sizeof obj_cgpa)<<flush;
        fcgpa.close();


        gotoxy(30,22);
        cout<<"\xdb\xdb\xb2\xb1 The Result is successfully saved";
        gotoxy(60,22);
        /*cout<<"\xdb\xb2\xb1 Goto Result Page .....[Enter]";
        getch();
        res::result();*/
    }
    gotoxy(60,25);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void res::Three_Two(int id)
{
    three_two obj_32;
    fstream f32("f32.txt",ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
    while(f32.read((char*)&obj_32,sizeof obj_32))
    {
        if(obj_32.s_id==id)
        {
            obj_32.show();
            i=1;
            break;
        }
        rec++;
    }
    pos= rec*sizeof obj_32;
    gotoxy(50,23);
    cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Update Result(y/n):";
    char ch=getch();
    if(ch=='y')
    {
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add Grate Point of Each Subject(32) \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 Course";
        gotoxy(50,6);
        cout<<"\xdb\xb2\xb1 Grate Point ";
        gotoxy(30,7);
        cout<<"-----------";
        gotoxy(50,7);
        cout<<"--------------";
        int i;
        double gp=0;
        double c=0;
        for(i=0; i<obj_32.total_course_32; i++)
        {
            gotoxy(35,8+i);
            cout<<obj_32.course_32[i];
            gotoxy(50,8+i);
            cout<<":";
            gotoxy(55,8+i);
            cin>>obj_32.course_gp_32[i];
            gp=gp+obj_32.course_gp_32[i]*obj_32.course_credit_32[i];
            if(obj_32.course_gp_32[i]!=0)
            {
                c=c+obj_32.course_credit_32[i];
            }
        }
        obj_32.total_gp_32=gp;
        obj_32.complete_credit_32=c;
        obj_32.gpa_32=(gp/c);

        gotoxy(20,11+i);
        cout<<"\xdb\xdb\xb2\xb1...............[Save]";
        getch();
        f32.seekp(pos);
        f32.write((char*)&obj_32,sizeof obj_32)<<flush;
        f32.close();


        CGPA<double> obj_cgpa;
        fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::binary);
        streampos pos;
        long rec=0;
        while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
        {
            if(obj_cgpa.s_id==id)
            {
                break;
            }
            rec++;
        }
        pos= rec*sizeof obj_cgpa;

        obj_cgpa.total_gp_32=gp;
        obj_cgpa.total_gp=(obj_cgpa.total_gp_11+obj_cgpa.total_gp_12+obj_cgpa.total_gp_21+obj_cgpa.total_gp_22+obj_cgpa.total_gp_31+obj_cgpa.total_gp_32+obj_cgpa.total_gp_41+obj_cgpa.total_gp_42);

        obj_cgpa.complete_credit_32=c;
        obj_cgpa.complete_credit=(obj_cgpa.complete_credit_11+obj_cgpa.complete_credit_12+obj_cgpa.complete_credit_21+obj_cgpa.complete_credit_22+obj_cgpa.complete_credit_31+obj_cgpa.complete_credit_32+obj_cgpa.complete_credit_41+obj_cgpa.complete_credit_42);

        obj_cgpa.gpa_32=(gp/c);

        obj_cgpa.cgpa=(obj_cgpa.total_gp/obj_cgpa.complete_credit);

        fcgpa.seekp(pos);
        fcgpa.write((char*)&obj_cgpa,sizeof obj_cgpa)<<flush;
        fcgpa.close();


        gotoxy(30,22);
        cout<<"\xdb\xdb\xb2\xb1 The Result is successfully saved";
        gotoxy(60,22);
        /*cout<<"\xdb\xb2\xb1 Goto Result Page .....[Enter]";
        getch();
        res::result();*/
    }
    gotoxy(60,25);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void res::Four_One(int id)
{
    four_one obj_41;
    fstream f41("f41.txt",ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
    while(f41.read((char*)&obj_41,sizeof obj_41))
    {
        if(obj_41.s_id==id)
        {
            obj_41.show();
            i=1;
            break;
        }
        rec++;
    }
    pos= rec*sizeof obj_41;
    gotoxy(50,23);
    cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Update Result(y/n):";
    char ch=getch();
    if(ch=='y')
    {
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add Grate Point of Each Subject(41) \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 Course";
        gotoxy(50,6);
        cout<<"\xdb\xb2\xb1 Grate Point ";
        gotoxy(30,7);
        cout<<"-----------";
        gotoxy(50,7);
        cout<<"--------------";
        int i;
        double gp=0;
        double c=0;
        for(i=0; i<obj_41.total_course_41; i++)
        {
            gotoxy(35,8+i);
            cout<<obj_41.course_41[i];
            gotoxy(50,8+i);
            cout<<":";
            gotoxy(55,8+i);
            cin>>obj_41.course_gp_41[i];
            gp=gp+obj_41.course_gp_41[i]*obj_41.course_credit_41[i];
            if(obj_41.course_gp_41[i]!=0)
            {
                c=c+obj_41.course_credit_41[i];
            }
        }
        obj_41.total_gp_41=gp;
        obj_41.complete_credit_41=c;
        obj_41.gpa_41=(gp/c);

        gotoxy(20,11+i);
        cout<<"\xdb\xdb\xb2\xb1...............[Save]";
        getch();
        f41.seekp(pos);
        f41.write((char*)&obj_41,sizeof obj_41)<<flush;
        f41.close();


        CGPA<double> obj_cgpa;
        fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::binary);
        streampos pos;
        long rec=0;
        while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
        {
            if(obj_cgpa.s_id==id)
            {
                break;
            }
            rec++;
        }
        pos= rec*sizeof obj_cgpa;

        obj_cgpa.total_gp_41=gp;
        obj_cgpa.total_gp=(obj_cgpa.total_gp_11+obj_cgpa.total_gp_12+obj_cgpa.total_gp_21+obj_cgpa.total_gp_22+obj_cgpa.total_gp_31+obj_cgpa.total_gp_32+obj_cgpa.total_gp_41+obj_cgpa.total_gp_42);

        obj_cgpa.complete_credit_41=c;
        obj_cgpa.complete_credit=(obj_cgpa.complete_credit_11+obj_cgpa.complete_credit_12+obj_cgpa.complete_credit_21+obj_cgpa.complete_credit_22+obj_cgpa.complete_credit_31+obj_cgpa.complete_credit_32+obj_cgpa.complete_credit_41+obj_cgpa.complete_credit_42);

        obj_cgpa.gpa_41=(gp/c);

        obj_cgpa.cgpa=(obj_cgpa.total_gp/obj_cgpa.complete_credit);

        fcgpa.seekp(pos);
        fcgpa.write((char*)&obj_cgpa,sizeof obj_cgpa)<<flush;
        fcgpa.close();


        gotoxy(30,22);
        cout<<"\xdb\xdb\xb2\xb1 The Result is successfully saved";
        gotoxy(60,22);
        /*cout<<"\xdb\xb2\xb1 Goto Result Page .....[Enter]";
        getch();
        res::result();*/
    }
    gotoxy(60,25);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void res::Four_Two(int id)
{
    four_two obj_42;
    fstream f42("f42.txt",ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
    while(f42.read((char*)&obj_42,sizeof obj_42))
    {
        if(obj_42.s_id==id)
        {
            obj_42.show();
            i=1;
            break;
        }
        rec++;
    }
    pos= rec*sizeof obj_42;
    gotoxy(50,23);
    cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Update Result(y/n):";
    char ch=getch();
    if(ch=='y')
    {
        system("cls");
        design();
        gotoxy(23,3);
        cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add Grate Point of Each Subject(42) \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
        gotoxy(20,5);
        cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
        gotoxy(30,6);
        cout<<"\xdb\xb2\xb1 Course";
        gotoxy(50,6);
        cout<<"\xdb\xb2\xb1 Grate Point ";
        gotoxy(30,7);
        cout<<"-----------";
        gotoxy(50,7);
        cout<<"--------------";
        int i;
        double gp=0;
        double c=0;
        for(i=0; i<obj_42.total_course_42; i++)
        {
            gotoxy(35,8+i);
            cout<<obj_42.course_42[i];
            gotoxy(50,8+i);
            cout<<":";
            gotoxy(55,8+i);
            cin>>obj_42.course_gp_42[i];
            gp=gp+obj_42.course_gp_42[i]*obj_42.course_credit_42[i];
            if(obj_42.course_gp_42[i]!=0)
            {
                c=c+obj_42.course_credit_42[i];
            }
        }
        obj_42.total_gp_42=gp;
        obj_42.complete_credit_42=c;
        obj_42.gpa_42=(gp/c);

        gotoxy(20,11+i);
        cout<<"\xdb\xdb\xb2\xb1...............[Save]";
        getch();
        f42.seekp(pos);
        f42.write((char*)&obj_42,sizeof obj_42)<<flush;
        f42.close();


        CGPA<double> obj_cgpa;
        fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::binary);
        streampos pos;
        long rec=0;
        while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
        {
            if(obj_cgpa.s_id==id)
            {
                break;
            }
            rec++;
        }
        pos= rec*sizeof obj_cgpa;

        obj_cgpa.total_gp_42=gp;
        obj_cgpa.total_gp=(obj_cgpa.total_gp_11+obj_cgpa.total_gp_12+obj_cgpa.total_gp_21+obj_cgpa.total_gp_22+obj_cgpa.total_gp_31+obj_cgpa.total_gp_32+obj_cgpa.total_gp_41+obj_cgpa.total_gp_42);

        obj_cgpa.complete_credit_42=c;
        obj_cgpa.complete_credit=(obj_cgpa.complete_credit_11+obj_cgpa.complete_credit_12+obj_cgpa.complete_credit_21+obj_cgpa.complete_credit_22+obj_cgpa.complete_credit_31+obj_cgpa.complete_credit_32+obj_cgpa.complete_credit_41+obj_cgpa.complete_credit_42);

        obj_cgpa.gpa_42=(gp/c);

        obj_cgpa.cgpa=(obj_cgpa.total_gp/obj_cgpa.complete_credit);

        fcgpa.seekp(pos);
        fcgpa.write((char*)&obj_cgpa,sizeof obj_cgpa)<<flush;
        fcgpa.close();


        gotoxy(30,22);
        cout<<"\xdb\xdb\xb2\xb1 The Result is successfully saved";
        gotoxy(60,22);
        /*cout<<"\xdb\xb2\xb1 Goto Result Page .....[Enter]";
        getch();
        res::result();*/
    }
    gotoxy(60,25);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}


