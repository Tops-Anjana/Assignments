#include<iostream>
class shape{
    public:
    virtual int getArea()=0;
    void setwidth(int w){
        width=w;
    }
    void setheight(int h){
        height=h;
    }
    protected:
    int width;
    int height;
};
class rectangle:public shape{
    public:
    int getArea(){
        return (width*height);
    }
};
class triangle:public shape{
    public:
    int getArea(){
        return (width*height)/2;
    }
};
int main(){
   rectangle rect;
   triangle tri;
   rect.setwidth(12);
   rect.setheight(7);
   std::cout<<rect.getArea()<<std::endl;
   tri.setwidth(14);
   tri.setheight(7);
   std::cout<<tri.getArea()<<std::endl;

}