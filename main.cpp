#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee
{
    public:
        string getFname() {
            return fname;
        }

        string getLname() {
            return lname;
        }

        string getGender() {
            return gender;
        }

        string getAddress() {
            return address;
        }

        string getJob_desc() {
            return job_desc;
        }

        
    private:
        string fname;
        string lname;
        string gender;
        string address;
        string job_desc;
    protected:
}

int main() 
{
    return 0;
}