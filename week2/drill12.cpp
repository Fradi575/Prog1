/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"



int main()
{
    using namespace Graph_lib;
    
    Simple_window win {Point{0,0}, 600, 400, "My window"};
    
	Axis xa {Axis::x, Point{40,300}, 3000, 10, "x axis"};  
	win.attach(xa);                              
	win.set_label("Canvas #2");       
	
	Function sine {sin,0,100,Point{20,150},1024,50,50};
	win.attach(sine);
	win.set_label("Canvas #4");
	sine.set_color(Color::green); 
	
	Polygon poly;                              
	poly.add(Point{300,200});
	poly.add(Point{350,100});
  	poly.add(Point{400,200});
  	poly.set_color(Color::yellow);
  	poly.set_style(Line_style::solid);
  	win.attach(poly);
  	win.set_label("Canvas #5");
  	
  	Rectangle r {Point{100,100}, 100, 80};
  	win.attach(r);
  	win.set_label("Canvas #6");
  	win.wait_for_button();
  	
  	Closed_polyline poly_rect;
  	poly_rect.add(Point{100,50});
  	poly_rect.add(Point{200,50});
  	poly_rect.add(Point{200,100});
  	poly_rect.add(Point{100,100}); 
  	win.attach(poly_rect);
	
	r.set_fill_color(Color::red);
	poly.set_style(Line_style(Line_style::dash,5));
	poly_rect.set_style(Line_style(Line_style::dash,39));
	poly_rect.set_fill_color(Color::green);
	win.set_label("Canvas #7");
	
	Text t {Point{150,150}, "Hello, graphical world!"};
	win.attach(t);
	win.set_label("Canvas #8");
	t.set_font(Font::times_bold);
	t.set_font_size(20);
	win.set_label("Canvas #9");
	
	Image ii {Point(200,50),"badge.jpg"};  
	win.attach(ii);
	win.set_label("Canvas #10");
	
	ii.move(100,200);
	win.set_label("Canvas #11");
	
	
	Mark m {Point(300,400),'x'};

	ostringstream oss;
	oss << "screen size: " << x_max() << "*" << y_max()
	<< "; window size: " << win.x_max() << "*" << win.y_max();
	Text sizes {Point{100,20},oss.str()};	
	
	Image cal {Point{225,225},"TOKYO.jpg"}; 
	cal.set_mask(Point{40,40},200,150);
	win.attach(m);
	
		
	win.attach(sizes);
	win.attach(cal);
	win.set_label("Canvas #12");
	
    win.wait_for_button();

}
