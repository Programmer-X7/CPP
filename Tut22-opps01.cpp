#include <iostream>
using namespace std;

class binary
{
private:
    string number;

public:
    void setData(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary::setData(void)
{
    cout << "Enter a binary number :" << endl;
    cin >> number;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < number.length(); i++)
    {
        if (number.at(i) != '0' && number.at(i) != '1')
        {
            cout << "This is not a valid binary number" << endl;
            exit(0);  // if you use break then if you enter a non-binary number that will also be ones_compliment and produce wrong output.
        }
    }
}

void binary::ones_compliment(void)
{
    for (int i = 0; i < number.length(); i++)
    {
        if (number.at(i) == '0')
        {
            number.at(i) = '1';
        }
        else
            number.at(i) = '0';
    }
}

void binary::display(void)
{
    cout<<"One's compliment of "<<number<<" is :"<<endl;
    for (int i = 0; i < number.length(); i++)
    {
        cout<<number.at(i);
    }
    cout<<endl;
}

int main()
{

    binary obj1;
    obj1.setData();
    obj1.chk_bin();
    // obj1.display();
    obj1.ones_compliment();
    obj1.display();

    return 0;
}