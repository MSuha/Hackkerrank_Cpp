#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
protected:
    int cur_id;
    int age;
    string name;
public:
    Person():name(""), cur_id(0), age(0){}
    virtual void getdata() = 0;
    virtual void putdata() = 0;

};

class Professor: public Person{
    int publications;
    static int id;
public:
    Professor():publications(0){cur_id = ++id;}
    void getdata(){
        cin >> name >> age >> publications;
    }
    void putdata(){
        cout << " " << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
int Professor::id = 0;

class Student: public Person{
    int marks[6];
    static int id;
    int marksum;
public:
    Student():marksum(0),marks{0}{cur_id=++id;};
    void getdata(){
        cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
    }
    void putdata(){
        for(int i = 0; i < 6; i++)
            marksum += marks[i];
        cout <<  name << " " << age << " " << marksum << " " << cur_id << endl;
    }
};
int Student::id = 0;

int main(){#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
    using namespace std;

    class Person{
    protected:
        int cur_id;
        int age;
        string name;
    public:
        Person():name(""), cur_id(0), age(0){}
        virtual void getdata() = 0;
        virtual void putdata() = 0;

    };

    class Professor: public Person{
        int publications;
        static int id;
    public:
        Professor():publications(0){cur_id = ++id;}
        void getdata(){
            cin >> name >> age >> publications;
        }
        void putdata(){
            cout << " " << name << " " << age << " " << publications << " " << cur_id << endl;
        }
    };
    int Professor::id = 0;

    class Student: public Person{
        int marks[6];
        static int id;
        int marksum;
    public:
        Student():marksum(0),marks{0}{cur_id=++id;};
        void getdata(){
            cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
        }
        void putdata(){
            for(int i = 0; i < 6; i++)
                marksum += marks[i];
            cout <<  name << " " << age << " " << marksum << " " << cur_id << endl;
        }
    };
    int Student::id = 0;

    int main(){