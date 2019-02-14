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
using namespace student_prof;
void student_profile()
{
    system("cls");
    design();
    student obj;
    int id;
    gotoxy(23,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
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
        cout<<"Which Semester Result You Want to See.";
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
        cout<<"9.CGPA";
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
            Cgpa( id);
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
            student_profile();
        }
        }
    }
}

template<typename T>
void student_prof::One_One(T obj_11,int id)
{
    //T obj_11;
    fstream f11("f11.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(f11.read((char*)&obj_11,sizeof obj_11))
    {
        if(obj_11.s_id==id)
        {
            student *a;
            a=&obj_11;
            a->show();
            i=1;
            break;
        }
    }
    f11.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}
void student_prof::One_Two(int id)
{
    one_two obj_12;
    fstream f12("f12.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(f12.read((char*)&obj_12,sizeof obj_12))
    {
        if(obj_12.s_id==id)
        {
            student *a;
            a=&obj_12;
            a->show();
            i=1;
            break;
        }
    }
    f12.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void student_prof::Two_One(int id)
{
    two_one obj_21;
    fstream f21("f21.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(f21.read((char*)&obj_21,sizeof obj_21))
    {
        if(obj_21.s_id==id)
        {
            student *a;
            a=&obj_21;
            a->show();
            i=1;
            break;
        }
    }
    f21.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void student_prof::Two_Two(int id)
{
    two_two obj_22;
    fstream f22("f22.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(f22.read((char*)&obj_22,sizeof obj_22))
    {
        if(obj_22.s_id==id)
        {
            student *a;
            a=&obj_22;
            a->show();
            i=1;
            break;
        }
    }
    f22.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void student_prof::Three_One(int id)
{
    three_one obj_31;
    fstream f31("f31.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(f31.read((char*)&obj_31,sizeof obj_31))
    {
        if(obj_31.s_id==id)
        {
            student *a;
            a=&obj_31;
            a->show();
            i=1;
            break;
        }
    }
    f31.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void student_prof::Three_Two(int id)
{
    three_two obj_32;
    fstream f32("f32.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(f32.read((char*)&obj_32,sizeof obj_32))
    {
        if(obj_32.s_id==id)
        {
            student *a;
            a=&obj_32;
            a->show();
            i=1;
            break;
        }
    }
    f32.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void student_prof::Four_One(int id)
{
    four_one obj_41;
    fstream f41("f41.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(f41.read((char*)&obj_41,sizeof obj_41))
    {
        if(obj_41.s_id==id)
        {
            student *a;
            a=&obj_41;
            a->show();
            i=1;
            break;
        }
    }
    f41.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void student_prof::Four_Two(int id)
{
    four_two obj_42;
    fstream f42("f42.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(f42.read((char*)&obj_42,sizeof obj_42))
    {
        if(obj_42.s_id==id)
        {
            student *a;
            a=&obj_42;
            a->show();
            i=1;
            break;
        }
    }
    f42.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}

void student_prof::Cgpa(int id){
    CGPA<double> obj_cgpa;
    fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    int i=0;
    while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
    {
        if(obj_cgpa.s_id==id)
        {
            show_cgpa(obj_cgpa);
            i=1;
            break;
        }
    }
    fcgpa.close();
    gotoxy(60,23);
    cout<<"\xdb\xb2\xb1 Go back....[Enter]";
    getch();
}


