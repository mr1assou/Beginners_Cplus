#include <iostream>

using namespace std;
class rectangle
{
private:
    float length;
    float width;
public:
    void setlength(float len)
    {
        if(len>=0)
            length=len;
        else
            cout<<"error your number is inferior a zero";
    }
    float getlength()
    {
        return length;
    }
    void setwidth(float wid)
    {
        if(wid>=0)
            width=wid;
        else
            cout<<"error your number is inferior a zero";
    }
    float getwidth()
    {
        return width;
    }
    float getarea()
    {
        return length*width;
    }
};
int main()
{
    rectangle box;
    box.setlength(40.5);
    box.setwidth(30.6);
    cout<<"the rectangle isarea is:"<<box.getarea()<<endl;
    return 0;
}
