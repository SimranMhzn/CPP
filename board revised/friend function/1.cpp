/* Create a class representing circle with private data members for radius. Implement a friend function calculateArea 
that calculates and returns the area of the circle*/
#include<iostream>
using namespace std;
class Circle{
    private:
        int radius;
    public:
        void setradius(){
            cout<<"Enter radius for circle: "<<endl;
            cin>>radius;
        }
        friend float calculateArea(Circle a);
};
float calculateArea(Circle temp){
    float calculate;
    calculate=(22/7)*temp.radius*temp.radius;
    return calculate;
}
int main()
{
    Circle obj;
    int result=0;
    obj.setradius();
    result=calculateArea(obj);
    return 0;
}

