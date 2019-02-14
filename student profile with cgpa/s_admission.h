#include<iostream>
#include<string>
using namespace std;

class student{
public:
    char name[30];
    int  s_id;
    char department[50];
    char varsity[50];
    virtual void show(){}  ///empty virtual function
    friend istream &operator >>(istream& in,student& obj);
    friend ostream &operator <<(ostream& out,student& obj);
};

class one_one:virtual public student{
public:
    int total_course_11=9;
    char course_11[10][10]={"CSE1100","CSE1107","EEE1107","EEE1108","HUM1107","HUM1108","MATH1107","PHY1107","PHY1108"};
    double course_credit_11[10]={1.5,3.0,3.0,1.5,3.0,0.75,3.0,3.0,1.5};
    double course_gp_11[10];
    double total_gp_11;
    double total_credit_11=20.25;
    double complete_credit_11;
    double gpa_11;
    one_one(){
        for(int i=0;i<9;i++){
            course_gp_11[i]=0;
        }
        total_gp_11=0;
        complete_credit_11=0;
        gpa_11=0;
    }
    one_one(int id){
        s_id=id;
        for(int i=0;i<9;i++){
            course_gp_11[i]=0;
        }
        total_gp_11=0;
        complete_credit_11=0;
        gpa_11=0;
    }
    void show();
    ~one_one(){}
};
class com_11{
public:
    int flag;
    com_11(int a){
        flag=a;
    }
    bool operator()(one_one e1, one_one e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.gpa_11<e2.gpa_11;
    }
};


class one_two:virtual public student{
public:
    int total_course_12=10;
    char course_12[10][10]={"CSE1201","CSE1202","CSE1203","CSE1204","CHEM1207","CHEM1208","EEE1217","EEE1218","MATH1207","ME1270"};
    double course_credit_12[10]={3.0,1.5,3.0,1.5,3.0,0.75,3.0,0.75,3.0,0.75};
    double course_gp_12[10];
    double total_gp_12;
    double total_credit_12=20.25;
    double complete_credit_12;
    double gpa_12;
    one_two(){
        for(int i=0;i<10;i++){
            course_gp_12[i]=0;
        }
        total_gp_12=0;
        complete_credit_12=0;
        gpa_12=0;
    }
    one_two(int id){
        s_id=id;
        for(int i=0;i<10;i++){
            course_gp_12[i]=0;
        }
        total_gp_12=0;
        complete_credit_12=0;
        gpa_12=0;
    }
    void show();
    ~one_two(){}
};
class com_12{
public:
    int flag;
    com_12(int a){
        flag=a;
    }
    bool operator()(one_two e1, one_two e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.gpa_12<e2.gpa_12;
    }
};


class two_one:virtual public student{
public:
    int total_course_21=8;
    char course_21[10][10]={"CSE2101","CSE2102","CSE2105","CSE2106","CSE2113","EEE2113","EEE2114","MATH2107"};
    double course_credit_21[10]={3.0,1.5,3.0,1.5,3.0,3.0,1.5,3.0};
    double course_gp_21[10];
    double total_gp_21;
    double total_credit_21=19.50;
    double complete_credit_21;
    double gpa_21;
    two_one(){
        for(int i=0;i<10;i++){
            course_gp_21[i]=0;
        }
        total_gp_21=0;
        complete_credit_21=0;
        gpa_21=0;
    }
    two_one(int id){
        s_id=id;
        for(int i=0;i<10;i++){
            course_gp_21[i]=0;
        }
        total_gp_21=0;
        complete_credit_21=0;
        gpa_21=0;
    }
    void show();
    ~two_one(){}
};
class com_21{
public:
    int flag;
    com_21(int a){
        flag=a;
    }
    bool operator()(two_one e1, two_one e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.gpa_21<e2.gpa_21;
    }
};


class two_two:virtual public student{
public:
    int total_course_22=9;
    char course_22[10][10]={"CSE2200","CSE2201","CSE2202","CSE2203","CSE2204","CSE2207","CSE2208","HUM2207","MATH2207"};
    double course_credit_22[10]={1.5,3.0,1.5,3.0,1.5,3.0,0.75,3.0,3.0};
    double course_gp_22[10];
    double total_gp_22;
    double total_credit_22=20.25;
    double complete_credit_22;
    double gpa_22;
    two_two(){
        for(int i=0;i<10;i++){
            course_gp_22[i]=0;
        }
        total_gp_22=0;
        complete_credit_22=0;
        gpa_22=0;
    }
    two_two(int id){
        s_id=id;
        for(int i=0;i<10;i++){
            course_gp_22[i]=0;
        }
        total_gp_22=0;
        complete_credit_22=0;
        gpa_22=0;
    }
    void show();
    ~two_two(){}
};
class com_22{
public:
    int flag;
    com_22(int a){
        flag=a;
    }
    bool operator()(two_two e1, two_two e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.gpa_22<e2.gpa_22;
    }
};

class three_one:virtual public student{
public:
    int total_course_31=10;
    char course_31[10][10]={"CSE1300","CSE3101","CSE3103","CSE3104","CSE3109","CSE3110","CSE3119","CSE3120","ECE3115","ECE3116"};
    double course_credit_31[10]={1.5,3.0,3.0,0.75,3.0,1.5,3.0,1.5,3.0,0.75};
    double course_gp_31[10];
    double total_gp_31;
    double total_credit_31=21;
    double complete_credit_31;
    double gpa_31;
    three_one(){
        for(int i=0;i<10;i++){
            course_gp_31[i]=0;
        }
        total_gp_31=0;
        complete_credit_31=0;
        gpa_31=0;
    }
    three_one(int id){
        s_id=id;
        for(int i=0;i<10;i++){
            course_gp_31[i]=0;
        }
        total_gp_31=0;
        complete_credit_31=0;
        gpa_31=0;
    }
    void show();
    ~three_one(){}
};
class com_31{
public:
    int flag;
    com_31(int a){
        flag=a;
    }
    bool operator()(three_one e1, three_one e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.gpa_31<e2.gpa_31;
    }
};


class three_two:virtual public student{
public:
    int total_course_32=9;
    char course_32[10][10]={"CSE3200","CSE3201","CSE3202","CSE3207","CSE3211","CSE3212","CSE3217","CSE3218","HUM3207"};
    double course_credit_32[10]={1.5,3.0,1.5,3.0,3.0,0.75,3.0,0.75,3.0};
    double course_gp_32[10];
    double total_gp_32;
    double total_credit_32=19.50;
    double complete_credit_32;
    double gpa_32;
    three_two(){
        for(int i=0;i<10;i++){
            course_gp_32[i]=0;
        }
        total_gp_32=0;
        complete_credit_32=0;
        gpa_32=0;
    }
    three_two(int id){
        s_id=id;
        for(int i=0;i<10;i++){
            course_gp_32[i]=0;
        }
        total_gp_32=0;
        complete_credit_32=0;
        gpa_32=0;
    }
    void show();
    ~three_two(){}
};
class com_32{
public:
    int flag;
    com_32(int a){
        flag=a;
    }
    bool operator()(three_two e1, three_two e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.gpa_32<e2.gpa_32;
    }
};


class four_one:virtual public student{
public:
    int total_course_41=9;
    char course_41[10][10]={"CSE4000","CSE4105","CSE4106","CSE4109","CSE4110","CSE4120","CSE4107","CSE4108","IEM4127"};
    double course_credit_41[10]={1.5,3.0,1.5,3.0,0.75,0.75,3.75,3.75,3.0};
    double course_gp_41[10];
    double total_gp_41;
    double total_credit_41=21;
    double complete_credit_41;
    double gpa_41;
    four_one(){
        for(int i=0;i<10;i++){
            course_gp_41[i]=0;
        }
        total_gp_41=0;
        complete_credit_41=0;
        gpa_41=0;
    }
    four_one(int id){
        s_id=id;
        for(int i=0;i<10;i++){
            course_gp_41[i]=0;
        }
        total_gp_41=0;
        complete_credit_41=0;
        gpa_41=0;
    }
    void show();
    ~four_one(){}
};
class com_41{
public:
    int flag;
    com_41(int a){
        flag=a;
    }
    bool operator()(four_one e1, four_one e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.gpa_41<e2.gpa_41;
    }
};


class four_two:virtual public student{
public:
    int total_course_42=8;
    char course_42[10][10]={"CSE4000","CSE4207","CSE4208","CSE4223","CSE4224","CSE4211","CSE4213","CSE4215"};
    double course_credit_42[10]={3.0,3.0,0.75,3.0,0.75,3.0,3.0,3.0};
    double course_gp_42[10];
    double total_gp_42;
    double total_credit_42=19.50;
    double complete_credit_42;
    double gpa_42;
    four_two(){
        for(int i=0;i<10;i++){
            course_gp_42[i]=0;
        }
        total_gp_42=0;
        complete_credit_42=0;
        gpa_42=0;
    }
    four_two(int id){
        s_id=id;
        for(int i=0;i<10;i++){
            course_gp_42[i]=0;
        }
        total_gp_42=0;
        complete_credit_42=0;
        gpa_42=0;
    }
    void show();
    ~four_two(){}
};
class com_42{
public:
    int flag;
    com_42(int a){
        flag=a;
    }
    bool operator()(four_two e1, four_two e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.gpa_42<e2.gpa_42;
    }
};

template<typename T>
class CGPA:public one_one,public one_two,public two_one,public two_two,public three_one,public three_two,public four_one,public four_two{
public:
    T total_gp;
    T total_credit;
    T complete_credit;
    T cgpa;
    CGPA(){
             total_credit_11=0;
        total_credit_12=0;
        total_credit_21=0;
        total_credit_22=0;
        total_credit_31=0;
        total_credit_32=0;
        total_credit_41=0;
        total_credit_42=0;

        complete_credit_11=0;
        complete_credit_12=0;
        complete_credit_21=0;
        complete_credit_22=0;
        complete_credit_31=0;
        complete_credit_32=0;
        complete_credit_41=0;
        complete_credit_42=0;

        gpa_11=0;
        gpa_12=0;
        gpa_21=0;
        gpa_22=0;
        gpa_31=0;
        gpa_32=0;
        gpa_41=0;
        gpa_42=0;

        total_credit=0;
        total_gp=0;
        complete_credit=0;
        cgpa=0;
    }
    CGPA(int id,double a,double b,double c, double d, double e, double f,double g,double h){
        s_id=id;
        total_credit_11=a;
        total_credit_12=b;
        total_credit_21=c;
        total_credit_22=d;
        total_credit_31=e;
        total_credit_32=f;
        total_credit_41=g;
        total_credit_42=h;

        complete_credit_11=0;
        complete_credit_12=0;
        complete_credit_21=0;
        complete_credit_22=0;
        complete_credit_31=0;
        complete_credit_32=0;
        complete_credit_41=0;
        complete_credit_42=0;

        gpa_11=0;
        gpa_12=0;
        gpa_21=0;
        gpa_22=0;
        gpa_31=0;
        gpa_32=0;
        gpa_41=0;
        gpa_42=0;

        total_credit=(a+b+c+d+e+f+g+h);
        total_gp=0;
        complete_credit=0;
        cgpa=0;
    }
    void show(){}
    ~CGPA(){}
    friend void show_cgpa(CGPA &obj_cgpa);
};
class com_cgpa{
public:
    int flag;
    com_cgpa(int a){
        flag=a;
    }
    bool operator()(CGPA<double> e1, CGPA<double> e2){
        if(flag==1) return e1.s_id<e2.s_id;
        else if(flag==2)return e1.cgpa<e2.cgpa;
    }
};


int check_id(int t);
void s_admission();
void new_student();
void cancel_admission();
void edit_profile();
//void view_student();
