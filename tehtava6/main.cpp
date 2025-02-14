#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;
    //luodaan opiskelijoita
    Student a("Aa", 30);
    Student b("Bee", 26);
    Student c("Cee", 28);
    Student d("Dee", 22);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    vector<Student>::iterator it  = studentList.begin();
    string etsittavanimi;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:

            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout<<"Opiskelijoiden nimet "<<endl;
            for(Student s: studentList) {
                cout<<s.getName()<<" ";
            }
            cout<<endl;
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan

            sort(studentList.begin(), studentList.end(),[](Student& a,Student& b){
                return a.getName()<b.getName();
            });
            cout << endl << "Lajiteltu nimen perusteella" << endl;
            for (auto &s: studentList) {
                //cout<<s.printStudentInfo()<<endl;
                s.printStudentInfo();
            }
            break;


        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan

            sort(studentList.begin(), studentList.end(),[](Student& a,Student& b){
              return a.getAge()<b.getAge();
             });

            cout << endl << "Lajiteltu ian perusteella" << endl;
            for (Student s: studentList) {
                s.printStudentInfo();
            }
            break;
        case 4:
            // Kysy käyttäjältä opiskelijan nimi ja etsi opiskelija

            cout<<"Give name: "<<endl;


            cin>>etsittavanimi;

            it = find_if(studentList.begin(), studentList.end(),
                              [&etsittavanimi](Student& m) -> bool {return m.getName() == etsittavanimi;});
            if(it !=studentList.end()) {
                cout<<"found\n";
                it->printStudentInfo();
            } else {
                cout << "not found\n";
            }
            break;


        default:
              cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    } while(selection < 5);
return 0;
}
