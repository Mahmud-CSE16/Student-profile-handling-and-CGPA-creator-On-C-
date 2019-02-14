#include<bits/stdc++.h>
#include<iostream>
#include<windows.h>
#include<conio.h>
#include <iomanip>
#include"my.h"
#include"homePage.h"
#include"s_admission.h"
#include"view.h"
#include"student_profile.h"
#include"result.h"

const char *student_file="student.txt";
fstream fout;
using namespace std;


void s_admission()
{
    system("cls");
    design();
    gotoxy(20,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Student Admission \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(20,5);
    cout<<"\xDB\xb2\xB1 1. New Student";
    gotoxy(20,7);
    cout<<"\xDB\xb2\xb1 2. View Student";
    gotoxy(20,9);
    cout<<"\xDB\xb2\xb1 3. Cancel Admission";
    gotoxy(20,11);
    cout<<"\xDB\xb2\xb1 4. Edit Student Profile";
    gotoxy(20,13);
    cout<<"\xDB\xb2\xb1 5. Back to Homepage";
    gotoxy(20,15);
    cout<<"------------------------------------------";
    gotoxy(20,16);
    cout<<"Enter your choice:";
    int c;
    cin>>c;
    switch (c)
    {
    case 1:
        new_student();
        break;
    case 2:
        view_student();
        break;
    case 3:
        cancel_admission();
        break;
    case 4:
        edit_profile();
        break;
    case 5:
        homePage();
        break;
    default:
    {
        gotoxy(10,19);
        cout<<"\aWrong Entry!!Please re-entered correct option";
        getch();
        s_admission();
    }
    }
}


void new_student()
{
    system("cls");
    design();
    student obj;
    gotoxy(10,4);
    cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add New student: \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
    cin>>obj;
    fout.open(student_file,ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    fout.write((char*) &obj,sizeof(obj));
    fout.close();

    one_one obj_11(obj.s_id);
    fstream f11("f11.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    f11.write((char*) &obj_11,sizeof(obj_11));
    f11.close();

    one_two obj_12(obj.s_id);
    fstream f12("f12.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    f12.write((char*) &obj_12,sizeof(obj_12));
    f12.close();

    two_one obj_21(obj.s_id);
    fstream f21("f21.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    f21.write((char*) &obj_21,sizeof(obj_21));
    f21.close();

    two_two obj_22(obj.s_id);
    fstream f22("f22.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    f22.write((char*) &obj_22,sizeof(obj_22));
    f22.close();

    three_one obj_31(obj.s_id);
    fstream f31("f31.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    f31.write((char*) &obj_31,sizeof(obj_31));
    f31.close();

    three_two obj_32(obj.s_id);
    fstream f32("f32.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    f32.write((char*) &obj_32,sizeof(obj_32));
    f32.close();

    four_one obj_41(obj.s_id);
    fstream f41("f41.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    f41.write((char*) &obj_41,sizeof(obj_41));
    f41.close();

    four_two obj_42(obj.s_id);
    fstream f42("f42.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    f42.write((char*) &obj_42,sizeof(obj_42));
    f42.close();

    CGPA<double> obj_cgpa(obj.s_id,obj_11.total_credit_11,obj_12.total_credit_12,obj_21.total_credit_21,obj_22.total_credit_22,obj_31.total_credit_31,obj_32.total_credit_32,obj_41.total_credit_41,obj_42.total_credit_42);
    fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    fcgpa.write((char*) &obj_cgpa,sizeof(obj_cgpa));
    fcgpa.close();

    gotoxy(20,13);
    cout<<"-----------------------------------";
    gotoxy(20,15);
    cout<<"\xdb\xb2\xb1 The Record is successfully saved \xb1\xb2\xdb";
    gotoxy(60,22);
    cout<<"\xdb\xb2\xb1 Goto Admission Page.....[Enter]";
    getch();
    s_admission();
}

void cancel_admission()
{
    system("cls");
    design();
    student obj;
    int id;
    gotoxy(23,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Cancel Admission \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,5);
    cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Search by Student ID:";
    gotoxy(20,7);
    cout<<"\xdb\xdb\xb2\xb1 Enter Student ID:";
    cin>>id;
    fout.open(student_file,ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
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

    if(i==0)
    {
        gotoxy(30,11);
        cout<<"\xdb\xb2\xb1 Record is Not Found \xb1\xb2\xdb";
        gotoxy(60,20);
        cout<<"\xdb\xb2\xb1 Goto Admission Page .....[Enter]";
        getch();
        s_admission();
    }
    else
    {
        gotoxy(20,15);
        cout<<"----------------------------------";
        gotoxy(20,17);
        cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to cancel admission(y/n):";
        char ch=getch();
        if(ch=='y')
        {
            fstream dx("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            fout.seekg(0);
            while(fout.read((char*)&obj,sizeof obj))
            {
                if(obj.s_id!=id)
                {
                    dx.write((char*)&obj,sizeof obj);
                }
            }
            fout.close();
            dx.close();
            remove("student.txt");
            rename("text.txt","student.txt");

            one_one obj_11;
            fstream f11("f11.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            fstream file("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(f11.read((char*)&obj_11,sizeof obj_11))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_11,sizeof obj_11);
                }
            }
            f11.close();
            file.close();
            remove("f11.txt");
            rename("text.txt","f11.txt");


            one_two obj_12;
            fstream f12("f12.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            file.open("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(f12.read((char*)&obj_12,sizeof obj_12))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_12,sizeof obj_12);
                }
            }
            f12.close();
            file.close();
            remove("f12.txt");
            rename("text.txt","f12.txt");

            two_one obj_21;
            fstream f21("f21.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            file.open("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(f21.read((char*)&obj_21,sizeof obj_21))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_21,sizeof obj_21);
                }
            }
            f21.close();
            file.close();
            remove("f21.txt");
            rename("text.txt","f21.txt");

            two_two obj_22;
            fstream f22("f22.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
             file.open("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(f22.read((char*)&obj_22,sizeof obj_22))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_22,sizeof obj_22);
                }
            }
            f22.close();
            file.close();
            remove("f22.txt");
            rename("text.txt","f22.txt");


            three_one obj_31;
            fstream f31("f31.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            file.open("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(f31.read((char*)&obj_31,sizeof obj_31))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_31,sizeof obj_31);
                }
            }
            f31.close();
            file.close();
            remove("f31.txt");
            rename("text.txt","f31.txt");


            three_two obj_32;
            fstream f32("f32.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            file.open("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(f32.read((char*)&obj_32,sizeof obj_32))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_32,sizeof obj_32);
                }
            }
            f32.close();
            file.close();
            remove("f32.txt");
            rename("text.txt","f32.txt");

            four_one obj_41;
            fstream f41("f41.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            file.open("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(f41.read((char*)&obj_41,sizeof obj_41))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_41,sizeof obj_41);
                }
            }
            f41.close();
            file.close();
            remove("f41.txt");
            rename("text.txt","f41.txt");


            four_two obj_42;
            fstream f42("f42.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            file.open("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(f42.read((char*)&obj_42,sizeof obj_42))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_42,sizeof obj_42);
                }
            }
            f42.close();
            file.close();
            remove("f42.txt");
            rename("text.txt","f42.txt");


            CGPA<double> obj_cgpa;
            fstream fcgpa("fcgpa.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            file.open("text.txt",ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
            while(fcgpa.read((char*)&obj_cgpa,sizeof obj_cgpa))
            {
                if(obj.s_id!=id)
                {
                    file.write((char*)&obj_cgpa,sizeof obj_cgpa);
                }
            }
            fcgpa.close();
            file.close();
            remove("fcgpa.txt");
            rename("text.txt","fcgpa.txt");


            gotoxy(30,19);
            cout<<"\xdb\xdb\xb2\xb1 The Record is successfully deleted";
            gotoxy(60,22);
            cout<<"\xdb\xb2\xb1 Goto Admission Page .....[Enter]";
            getch();
            s_admission();
        }
        else
        {
            gotoxy(60,22);
            cout<<"\xdb\xb2\xb1 Goto Admission Page .....[Enter]";
            getch();
            s_admission();
        }
    }

}

void edit_profile()
{
    system("cls");
    design();
    student obj;
    int id;
    gotoxy(23,3);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Edit Student Profile \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,5);
    cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Search by Student ID:";
    gotoxy(20,7);
    cout<<"\xdb\xdb\xb2\xb1 Enter Student ID:";
    cin>>id;
    fout.open(student_file,ios_base::out|ios_base::in|ios_base::binary);
    int i=0;
    streampos pos;
    long rec=0;
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
        rec++;
    }
    pos=rec*sizeof obj;
    if(i==0)
    {
        gotoxy(30,11);
        cout<<"\xdb\xb2\xb1 Record is Not Found \xb1\xb2\xdb";
        gotoxy(60,20);
        cout<<"\xdb\xb2\xb1 Goto Admission Page .....[Enter]";
        fout.close();
        getch();
        s_admission();
    }
    else
    {
        gotoxy(20,15);
        cout<<"----------------------------------";
        gotoxy(20,17);
        cout<<"\xdb\xdb\xb2\xb2\xb1 Do you want to Edit Profile(y/n):";
        char ch=getch();
        if(ch=='y')
        {
            system("cls");
            design();
            gotoxy(23,3);
            cout<<"\xdb\xdb\xdb\xb2\xb2\xb2\xb1 Add New Document of student: \xb1\xb2\xb2\xb2\xdb\xdb\xdb"<<endl;
            gotoxy(20,6);
            cout<<"\xdb\xdb\xb2\xb1 Student ID: "<<id;
            obj.s_id=id;
            gotoxy(20,8);
            cout<<"\xdb\xdb\xb2\xb1 Enter Student Name: ";
            scanf(" %[^\n]s",obj.name);
            gotoxy(20,10);
            cout<<"\xdb\xdb\xb2\xb1 Enter Department: ";
            scanf(" %[^\n]s",obj.department);
            gotoxy(20,12);
            cout<<"\xdb\xdb\xb2\xb1 Enter Varsity: ";
            scanf(" %[^\n]s",obj.varsity);
            gotoxy(20,15);
            cout<<"----------------------------------";
            gotoxy(20,17);
            cout<<"\xdb\xdb\xb2\xb1...............[Save]";
            getch();
            fout.seekp(pos);
            fout.write((char*)&obj,sizeof obj)<<flush;
            fout.close();
            gotoxy(30,19);
            cout<<"\xdb\xdb\xb2\xb1 The Record is successfully saved";
            gotoxy(60,22);
            cout<<"\xdb\xb2\xb1 Goto Admission Page .....[Enter]";
            getch();
            s_admission();
        }
        else{
            gotoxy(60,22);
            cout<<"\xdb\xb2\xb1 Goto Admission Page .....[Enter]";
            fout.close();
            getch();
            s_admission();
        }
    }
}

int check_id(int t)  ///check whether the book is exist in library or not
{
    fout.open(student_file,ios_base::out|ios_base::in|ios_base::app|ios_base::binary);
    student obj;
    while(fout.read((char*)&obj,sizeof obj))
    {
        if(obj.s_id==t)
        {
            fout.close();
            return 0;
        }
    }
    fout.close();
    return 1;
}


istream &operator >>(istream& in,student& obj)
{
    gotoxy(20,6);
    cout<<"\xdb\xdb\xb2\xb1 Enter Student Name: ";
    scanf(" %[^\n]s",obj.name);
    gotoxy(20,8);
    cout<<"\xdb\xdb\xb2\xb1 Enter Student ID: ";
    in>>obj.s_id;
    if(check_id(obj.s_id)==0)
    {
        gotoxy(25,13);
        cout<<"\xdb\xdb\xb1 The student already exist.\a";
        gotoxy(60,20);
        cout<<"\xdb\xb2\xb1 Goto Admission Page.......[Enter]";
        getch();
        s_admission();
    }
    gotoxy(20,10);
    cout<<"\xdb\xdb\xb2\xb1 Enter Department: ";
    scanf(" %[^\n]s",obj.department);
    gotoxy(20,12);
    cout<<"\xdb\xdb\xb2\xb1 Enter Varsity: ";
    scanf(" %[^\n]s",obj.varsity);
}
ostream &operator <<(ostream& out,student& obj)
{
    gotoxy(20,11);
    out<<"\xdb\xdb\xb2\xb1 Student Name: "<<obj.name<<endl;
    gotoxy(20,12);
    out<<"\xdb\xdb\xb2\xb1 Student ID: "<<obj.s_id<<endl;
    gotoxy(20,13);
    out<<"\xdb\xdb\xb2\xb1 Department: "<<obj.department<<endl;
    gotoxy(20,14);
    out<<"\xdb\xdb\xb2\xb1 Varsity: "<<obj.varsity<<endl<<endl;
}

void one_one::show(){
    cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 First_Year First_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 SI No:";
    gotoxy(25,9);cout<<"\xdb\xb2 Course Name";
    gotoxy(45,9);cout<<"\xdb\xb2 Course Credit";
    gotoxy(65,9);cout<<"\xdb\xb2 Course gp";
    //gotoxy(80,9);cout<<"\xdb\xb2 varsity";

    gotoxy(10,10);cout<<"---------";
    gotoxy(25,10);cout<<"--------";
    gotoxy(45,10);cout<<"---------------";
    gotoxy(65,10);cout<<"--------------";
   // gotoxy(80,10);cout<<"-----------";
    int i;
    for(i=0;i<total_course_11;i++){
        gotoxy(10,10+i+1);cout<<i+1<<".";
        gotoxy(25,10+i+1);cout<<course_11[i];
        gotoxy(50,10+i+1);cout<<setprecision(2)<<course_credit_11[i];
        gotoxy(70,10+i+1);cout<<setprecision(2)<<course_gp_11[i];
    }
    gotoxy(10,10+i+1);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,10+i+2);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<total_credit_11;
    gotoxy(35,10+i+2);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<complete_credit_11;
    gotoxy(65,10+i+2);cout<<"\xdb\xb1 GPA: "<<setprecision(2)<<gpa_11;
}

void one_two::show(){
    cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 First_Year Second_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 SI No:";
    gotoxy(25,9);cout<<"\xdb\xb2 Course Name";
    gotoxy(45,9);cout<<"\xdb\xb2 Course Credit";
    gotoxy(65,9);cout<<"\xdb\xb2 Course gp";
    //gotoxy(80,9);cout<<"\xdb\xb2 varsity";

    gotoxy(10,10);cout<<"---------";
    gotoxy(25,10);cout<<"--------";
    gotoxy(45,10);cout<<"---------------";
    gotoxy(65,10);cout<<"--------------";
   // gotoxy(80,10);cout<<"-----------";
    int i;
    for(i=0;i<total_course_12;i++){
        gotoxy(10,10+i+1);cout<<i+1<<".";
        gotoxy(25,10+i+1);cout<<course_12[i];
        gotoxy(50,10+i+1);cout<<setprecision(2)<<course_credit_12[i];
        gotoxy(70,10+i+1);cout<<setprecision(2)<<course_gp_12[i];
    }
    gotoxy(10,10+i+1);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,10+i+2);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<total_credit_12;
    gotoxy(35,10+i+2);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<complete_credit_12;
    gotoxy(65,10+i+2);cout<<"\xdb\xb1 GPA: "<<setprecision(2)<<gpa_12;
}

void two_one::show(){
    cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Second_Year First_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 SI No:";
    gotoxy(25,9);cout<<"\xdb\xb2 Course Name";
    gotoxy(45,9);cout<<"\xdb\xb2 Course Credit";
    gotoxy(65,9);cout<<"\xdb\xb2 Course gp";
    //gotoxy(80,9);cout<<"\xdb\xb2 varsity";

    gotoxy(10,10);cout<<"---------";
    gotoxy(25,10);cout<<"--------";
    gotoxy(45,10);cout<<"---------------";
    gotoxy(65,10);cout<<"--------------";
   // gotoxy(80,10);cout<<"-----------";
    int i;
    for(i=0;i<total_course_21;i++){
        gotoxy(10,10+i+1);cout<<i+1<<".";
        gotoxy(25,10+i+1);cout<<course_21[i];
        gotoxy(50,10+i+1);cout<<setprecision(2)<<course_credit_21[i];
        gotoxy(70,10+i+1);cout<<setprecision(2)<<course_gp_21[i];
    }
    gotoxy(10,10+i+1);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,10+i+2);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<total_credit_21;
    gotoxy(35,10+i+2);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<complete_credit_21;
    gotoxy(65,10+i+2);cout<<"\xdb\xb1 GPA: "<<setprecision(2)<<gpa_21;
}

void two_two::show(){
    cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Second_Year Second_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 SI No:";
    gotoxy(25,9);cout<<"\xdb\xb2 Course Name";
    gotoxy(45,9);cout<<"\xdb\xb2 Course Credit";
    gotoxy(65,9);cout<<"\xdb\xb2 Course gp";
    //gotoxy(80,9);cout<<"\xdb\xb2 varsity";

    gotoxy(10,10);cout<<"---------";
    gotoxy(25,10);cout<<"--------";
    gotoxy(45,10);cout<<"---------------";
    gotoxy(65,10);cout<<"--------------";
   // gotoxy(80,10);cout<<"-----------";
    int i;
    for(i=0;i<total_course_22;i++){
        gotoxy(10,10+i+1);cout<<i+1<<".";
        gotoxy(25,10+i+1);cout<<course_22[i];
        gotoxy(50,10+i+1);cout<<setprecision(2)<<course_credit_22[i];
        gotoxy(70,10+i+1);cout<<setprecision(2)<<course_gp_22[i];
    }
    gotoxy(10,10+i+1);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,10+i+2);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<total_credit_22;
    gotoxy(35,10+i+2);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<complete_credit_22;
    gotoxy(65,10+i+2);cout<<"\xdb\xb1 GPA: "<<setprecision(2)<<gpa_22;
}

void three_one::show(){
    cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Third_Year First_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 SI No:";
    gotoxy(25,9);cout<<"\xdb\xb2 Course Name";
    gotoxy(45,9);cout<<"\xdb\xb2 Course Credit";
    gotoxy(65,9);cout<<"\xdb\xb2 Course gp";
    //gotoxy(80,9);cout<<"\xdb\xb2 varsity";

    gotoxy(10,10);cout<<"---------";
    gotoxy(25,10);cout<<"--------";
    gotoxy(45,10);cout<<"---------------";
    gotoxy(65,10);cout<<"--------------";
   // gotoxy(80,10);cout<<"-----------";
    int i;
    for(i=0;i<total_course_31;i++){
        gotoxy(10,10+i+1);cout<<i+1<<".";
        gotoxy(25,10+i+1);cout<<course_31[i];
        gotoxy(50,10+i+1);cout<<setprecision(2)<<course_credit_31[i];
        gotoxy(70,10+i+1);cout<<setprecision(2)<<course_gp_31[i];
    }
    gotoxy(10,10+i+1);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,10+i+2);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<total_credit_31;
    gotoxy(35,10+i+2);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<complete_credit_31;
    gotoxy(65,10+i+2);cout<<"\xdb\xb1 GPA: "<<setprecision(2)<<gpa_31;
}

void three_two::show(){
    cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Third_Year Second_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 SI No:";
    gotoxy(25,9);cout<<"\xdb\xb2 Course Name";
    gotoxy(45,9);cout<<"\xdb\xb2 Course Credit";
    gotoxy(65,9);cout<<"\xdb\xb2 Course gp";
    //gotoxy(80,9);cout<<"\xdb\xb2 varsity";

    gotoxy(10,10);cout<<"---------";
    gotoxy(25,10);cout<<"--------";
    gotoxy(45,10);cout<<"---------------";
    gotoxy(65,10);cout<<"--------------";
   // gotoxy(80,10);cout<<"-----------";
    int i;
    for(i=0;i<total_course_32;i++){
        gotoxy(10,10+i+1);cout<<i+1<<".";
        gotoxy(25,10+i+1);cout<<course_32[i];
        gotoxy(50,10+i+1);cout<<setprecision(2)<<course_credit_32[i];
        gotoxy(70,10+i+1);cout<<setprecision(2)<<course_gp_32[i];
    }
    gotoxy(10,10+i+1);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,10+i+2);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<total_credit_32;
    gotoxy(35,10+i+2);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<complete_credit_32;
    gotoxy(65,10+i+2);cout<<"\xdb\xb1 GPA: "<<setprecision(2)<<gpa_32;
}

void four_one::show(){
    cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Forth_Year First_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 SI No:";
    gotoxy(25,9);cout<<"\xdb\xb2 Course Name";
    gotoxy(45,9);cout<<"\xdb\xb2 Course Credit";
    gotoxy(65,9);cout<<"\xdb\xb2 Course gp";
    //gotoxy(80,9);cout<<"\xdb\xb2 varsity";

    gotoxy(10,10);cout<<"---------";
    gotoxy(25,10);cout<<"--------";
    gotoxy(45,10);cout<<"---------------";
    gotoxy(65,10);cout<<"--------------";
   // gotoxy(80,10);cout<<"-----------";
    int i;
    for(i=0;i<total_course_41;i++){
        gotoxy(10,10+i+1);cout<<i+1<<".";
        gotoxy(25,10+i+1);cout<<course_41[i];
        gotoxy(50,10+i+1);cout<<setprecision(2)<<course_credit_41[i];
        gotoxy(70,10+i+1);cout<<setprecision(2)<<course_gp_41[i];
    }
    gotoxy(10,10+i+1);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,10+i+2);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<total_credit_41;
    gotoxy(35,10+i+2);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<complete_credit_41;
    gotoxy(65,10+i+2);cout<<"\xdb\xb1 GPA: "<<setprecision(2)<<gpa_41;
}

void four_two::show(){
    cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Forth_Year Second_Term Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 SI No:";
    gotoxy(25,9);cout<<"\xdb\xb2 Course Name";
    gotoxy(45,9);cout<<"\xdb\xb2 Course Credit";
    gotoxy(65,9);cout<<"\xdb\xb2 Course gp";
    //gotoxy(80,9);cout<<"\xdb\xb2 varsity";

    gotoxy(10,10);cout<<"---------";
    gotoxy(25,10);cout<<"--------";
    gotoxy(45,10);cout<<"--------------";
    gotoxy(65,10);cout<<"-------------";
   // gotoxy(80,10);cout<<"-----------";
    int i;
    for(i=0;i<total_course_42;i++){
        gotoxy(10,10+i+1);cout<<i+1<<".";
        gotoxy(25,10+i+1);cout<<course_42[i];
        gotoxy(50,10+i+1);cout<<setprecision(2)<<course_credit_42[i];
        gotoxy(70,10+i+1);cout<<setprecision(2)<<course_gp_42[i];
    }
    gotoxy(10,10+i+1);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,10+i+2);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<total_credit_42;
    gotoxy(35,10+i+2);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<complete_credit_42;
    gotoxy(65,10+i+2);cout<<"\xdb\xb1 GPA: "<<setprecision(2)<<gpa_42;
}

void show_cgpa(CGPA<double> &obj_cgpa){
        cout << fixed << right;
    gotoxy(23,8);
    cout<<"\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb2\xb2\xb2\xb2\xb1\xb1 Over All Semester Result \xb1\xb1\xb2\xb2\xb2\xb2\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
    gotoxy(10,9);cout<<"\xdb\xb2 Semester";
    gotoxy(25,9);cout<<"\xdb\xb2 Total Credit";
    gotoxy(45,9);cout<<"\xdb\xb2 Complete Credit";
    gotoxy(68,9);cout<<"\xdb\xb2 GPA";

    gotoxy(10,10);cout<<setfill('-')<<setw(11)<<"-----------";
    gotoxy(25,10);cout<<setfill('-')<<setw(14)<<"---------------";
    gotoxy(45,10);cout<<setfill('-')<<setw(17)<<"------------------";
    gotoxy(68,10);cout<<setfill('-')<<setw(8)<<"--------";
   // gotoxy(80,10);cout<<"-----------";
    gotoxy(10,11);cout<<"\xdb One One";
    gotoxy(30,11);cout<<setprecision(2)<<obj_cgpa.total_credit_11;
    gotoxy(50,11);cout<<setprecision(2)<<obj_cgpa.complete_credit_11;
    gotoxy(70,11);cout<<setprecision(2)<<obj_cgpa.gpa_11;

    gotoxy(10,12);cout<<"\xdb One Two";
    gotoxy(30,12);cout<<setprecision(2)<<obj_cgpa.total_credit_12;
    gotoxy(50,12);cout<<setprecision(2)<<obj_cgpa.complete_credit_12;
    gotoxy(70,12);cout<<setprecision(2)<<obj_cgpa.gpa_12;

    gotoxy(10,13);cout<<"\xdb Two One";
    gotoxy(30,13);cout<<setprecision(2)<<obj_cgpa.total_credit_21;
    gotoxy(50,13);cout<<setprecision(2)<<obj_cgpa.complete_credit_21;
    gotoxy(70,13);cout<<setprecision(2)<<obj_cgpa.gpa_21;

    gotoxy(10,14);cout<<"\xdb Two Two";
    gotoxy(30,14);cout<<setprecision(2)<<obj_cgpa.total_credit_22;
    gotoxy(50,14);cout<<setprecision(2)<<obj_cgpa.complete_credit_22;
    gotoxy(70,14);cout<<setprecision(2)<<obj_cgpa.gpa_22;

    gotoxy(10,15);cout<<"\xdb Three One";
    gotoxy(30,15);cout<<setprecision(2)<<obj_cgpa.total_credit_31;
    gotoxy(50,15);cout<<setprecision(2)<<obj_cgpa.complete_credit_31;
    gotoxy(70,15);cout<<setprecision(2)<<obj_cgpa.gpa_31;

    gotoxy(10,16);cout<<"\xdb Three Two";
    gotoxy(30,16);cout<<setprecision(2)<<obj_cgpa.total_credit_32;
    gotoxy(50,16);cout<<setprecision(2)<<obj_cgpa.complete_credit_32;
    gotoxy(70,16);cout<<setprecision(2)<<obj_cgpa.gpa_32;

    gotoxy(10,17);cout<<"\xdb Four One";
    gotoxy(30,17);cout<<setprecision(2)<<obj_cgpa.total_credit_41;
    gotoxy(50,17);cout<<setprecision(2)<<obj_cgpa.complete_credit_41;
    gotoxy(70,17);cout<<setprecision(2)<<obj_cgpa.gpa_41;

    gotoxy(10,18);cout<<"\xdb Four Two";
    gotoxy(30,18);cout<<setprecision(2)<<obj_cgpa.total_credit_42;
    gotoxy(50,18);cout<<setprecision(2)<<obj_cgpa.complete_credit_42;
    gotoxy(70,18);cout<<setprecision(2)<<obj_cgpa.gpa_42;

    gotoxy(10,19);
    cout<<"-------------------------------------------------------------------";
    gotoxy(10,20);cout<<"\xdb\xb1 Total Credit: "<<setprecision(2)<<obj_cgpa.total_credit;
    gotoxy(35,20);cout<<"\xdb\xb1 Complete Credit: "<<setprecision(2)<<obj_cgpa.complete_credit;
    gotoxy(65,20);cout<<"\xdb\xb1 CGPA: "<<setprecision(2)<<obj_cgpa.cgpa;
}
