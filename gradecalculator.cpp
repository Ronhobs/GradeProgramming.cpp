//Computer Programming Calculator
//This program is a grade calculator for Computer Programming implemented in C++
#include<iostream>

void readGrades(float&,float&,float&,float&);
void calcWeights(float&,float&,float&,float&,float,float,float,float);
float calcFind(float,float,float,float);
void displayResults(float);

int main(){
    const int ASSIGN_PERCENT=15,
    TEST__PERCENT=50,
    EXAM_PERCENT=30,
    PARTIC_PERCENT=5;
    float assign,test,exam,partic,finalGrade;

    std::cout<<"Grade Calculator for Computer Programming Using C++"<<std::endl;
    
    std::cout<<"\nThe weight of each deliverable on their final grade\n\n";
    std::cout<<"\t Programming Assignments:"<<ASSIGN_PERCENT<<"%\n";
    std::cout<<"\t Chapter Tests:"<<TEST__PERCENT<<"%\n";
    std::cout<<"\tFinal Exam:"<<EXAM_PERCENT<<"%\n";
    std::cout<<"\tClass Participation:"<<PARTIC_PERCENT<<"%"<<std::endl;

    readGrades(assign,test,exam,partic);
    calcWeights(assign,test,exam,partic,ASSIGN_PERCENT,TEST__PERCENT,EXAM_PERCENT,PARTIC_PERCENT);

    finalGrade=calcFind(assign,test,exam,partic);
      
    std::cout<<"\n\t"<<assign<<"% in Programming Assignments";
    std::cout<<"\n\t"<<test<<"% in Chapter Tests";
    std::cout<<"\n\t"<<exam<<"% in Final Exam";
    std::cout<<"\n\t"<<partic<<"% in Class Participation"<<std::endl;

    displayResults(finalGrade);

    return 0;

}

void readGrades(float &assign,float &test,float &exam,float &partic){
std::cout<<"\n What is the graded percentage (out of 100%) for Programming Assignments?";
std::cin>>assign;

std::cout<<"\n What is the graded percentage (out of 100%) for Chapter Tests?";
std::cin>>test;

std::cout<<"\n What is the graded percentage (out of 100%) for Final Exam?";
std::cin>>exam;

std::cout<<"\n What is the graded percentage (out of 100%) for Class Participation?";
std::cin>>partic;

}
void calcWeights(float &assign,float&test,float&exam,float&partic,float ASSIGN_PERCENT,
float TEST_PERCENT,float EXAM_PERCENT,float PARTIC_PERCENT){
    assign=(assign*ASSIGN_PERCENT)/100;
    test=(test*TEST_PERCENT)/100;
    exam=(exam*EXAM_PERCENT)/100;
    partic=(partic*PARTIC_PERCENT)/100;
}
float calcFind(float assign,float test,float exam,float partic){
    return (assign +test+exam+partic);

}
void displayResults(float finalGrade){
    std::cout<<"\nFinal Grade:"<<finalGrade<<"%"<<std::endl;
}
