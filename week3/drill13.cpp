#include "Simple_window.h"
#include "Graph.h"



int main()
{
    using namespace Graph_lib;

    int xmax = 1280;
    int ymax = 720;

    int x_orig = xmax/2;
    int y_orig = ymax/2;

    int rmin = -11;
    int rmax = 11;
    
    int n_points = 400;

    Simple_window win {Point{0,0}, 800, 1000, "Canvas"};
    
    Vector_ref<Rectangle> vr;
for (int i = 0; i<8; ++i)
for (int j = 0; j<8; ++j) {
vr.push_back(new Rectangle{Point{i*100,j*100},100,100});
if(j==i) vr[vr.size()-1].set_fill_color(Color::red);

win.attach(vr[vr.size()-1]);
}
Image cal1 {Point{500,0},"badge.jpg"};       
cal1.set_mask(Point{40,40},200,200);    

Image cal2 {Point{600,300},"badge.jpg"};       
cal2.set_mask(Point{40,40},200,200);  

Image cal3 {Point{0,600},"badge.jpg"};       
cal3.set_mask(Point{40,40},200,200);  



for (int i = 0; i<8; ++i)
for (int j = 0; j<8; ++j){
Image cal4 {Point{i*100,j*100},"badge.jpg"};       
cal4.set_mask(Point{100,100},100,100); 
win.attach(cal4);
win.wait_for_button();

}

win.attach(cal1);
win.attach(cal2);
win.attach(cal3);
win.wait_for_button();	

}



