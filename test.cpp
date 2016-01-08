#include <iostream>
#include "string.h"
#include "sdt.h"

using namespace std;
struct student
{
    char name[15];
    int year;
    double mean;
    bool sex;
    uint8_t curs;
    student* starost;
};

int main()
{
    student Group[2];
    //староста
    strcpy(Group[0].name,"Borodin");
    Group[0].year=2006;
    Group[0].mean=3.4;
    Group[0].sex=true;//man
    Group[0].curs=22;
    Group[0].starost=NULL;
    // первый студент
    strcpy(Group[1].name,"Butkova");
    Group[1].year=2006;
    Group[1].mean=4.2;
    Group[1].sex=false;//woman
    Group[1].curs=22;
    Group[1].starost=Group[0].starost;
    //второй студент
    strcpy(Group[2].name,"Ivanov");
    Group[2].year=2008;
    Group[2].mean=1.9;
    Group[2].sex=true;//третий студент
    Group[2].curs=24;
    Group[2].starost=Group[0].starost;
    //
    cout<<"Array adress="<<Group<<"  "<<"size="<<sizeof(Group)<<"\n";
    cout<<"Group[0] adress="<<Group<<"  "<<"size="<<sizeof(Group[0])<<"\n";
    cout<<"Group[1] adress="<<Group+1<<"  "<<"size="<<sizeof(Group[1])<<"\n";
    cout<<"Group[2] adress="<<Group+2<<"  "<<"size="<<sizeof(Group[2])<<"\n";

}
