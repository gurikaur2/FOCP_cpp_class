#include <iostream>

using namespace std;

class Candy
{
    string colour;
    int points;
    public:
    Candy();//default constructor
    Candy(string colour, int points);//paramerterised constructor
    Candy(const Candy &r);//copy constructor
    void displayCandy();
    ~Candy()
    {
        cout<<"\n Destructor called";
    }
};

Candy::Candy()
{
    cout<<"\n Default constructor called";
}
Candy::Candy(string colour, int points)
{
    cout<<"\n Parametarised constructor called";
    this ->colour=colour;
    this -> points=points;
}

Candy::Candy(const Candy &r)
{
    cout<<"\n Copy constructor called";
    colour=r.colour;
    points=r.points;
}

void Candy::displayCandy()
{
    cout<<"\n Colour is:"<<colour;
    cout<<"\n Points are:"<<points;
}

int main ()
{
    Candy c1("Green",4),c2("Red",7),c3,c4(c1);
    c1.displayCandy();
    c2.displayCandy();
    c3.displayCandy();
    c4.displayCandy();

    return 0;
}