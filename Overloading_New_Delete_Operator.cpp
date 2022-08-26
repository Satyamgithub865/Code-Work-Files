#include<iostream>
using namespace std;

class Engineer
{
    string name;
    int id;
    public:
    Engineer(string name,int id)
    {
        this->name=name;
        this->id=id;
    }
    void* operator new(size_t size)
    {
        cout<< "Overloading new operator with size: " << size << endl;
        void *p = malloc(size);

        return p;
    }
    void operator delete(void * p)
    {
        cout<< "Overloading delete operator " << endl;
        free(p);
    }
    void display()
    {
        cout<<"Engineer Name : "<<name<<endl;
        cout<<"Engineer id : "<<id<<endl;
    }


};

int main() 
{
    Engineer *p = new Engineer("Satyam",2040120);
    string c="gcs";
    cout<<sizeof(c)<<endl;
    p->display();
    delete p;
    
   return 0;
}