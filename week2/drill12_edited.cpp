 
/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"

double sine(double x){return sin(x); }

int main()
{
    using namespace Graph_lib;
    
    Simple_window win {Point{0,0}, 700, 500, "My window"};
    
	Axis xa {Axis::x, Point{15,350}, 280, 10, "x axis"};  
	win.attach(xa);                              
	win.set_label("Canvas #2");
	win.wait_for_button();
	
	Axis ya {Axis::y, Point{15,350}, 280, 10, "y axis"};
	ya.set_color(Color::cyan);                       
	ya.label.set_color(Color::blue);     
	win.attach(ya);
	win.set_label("Canvas #3");
	win.wait_for_button();         
	
	Function sine {sin,0,100,Point{20,150},1024,50,50};
	win.attach(sine);
	win.set_label("Canvas #4");
	sine.set_color(Color::green);
	win.wait_for_button(); 
	
	Polygon poly;                              
	poly.add(Point{300,200});
	poly.add(Point{350,100});
  	poly.add(Point{400,200});
  	poly.set_color(Color::yellow);
  	poly.set_style(Line_style::solid);
  	win.attach(poly);
  	win.set_label("Canvas #5");
  	win.wait_for_button();
  	
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
	win.wait_for_button();
	
	Text t {Point{150,150}, "Hello, graphical world!"};
	win.attach(t);
	win.set_label("Canvas #8");
	t.set_font(Font::times_bold);
	t.set_font_size(20);
	win.wait_for_button();
	
	win.set_label("Canvas #9");
	win.wait_for_button();
	
	Image ii {Point(200,50),"badge.jpg"};  
	win.attach(ii);
	win.set_label("Canvas #10");
	win.wait_for_button();
	
	ii.move(100,200);
	win.set_label("Canvas #11");
	win.wait_for_button();
	
	Circle c {Point{300,400},50};
	Ellipse e {Point{300,400}, 75,25};
	e.set_color(Color::dark_red);
	Mark m {Point(300,400),'x'};

	ostringstream oss;
	oss << "screen size: " << x_max() << "*" << y_max()
	<< "; window size: " << win.x_max() << "*" << win.y_max();
	Text sizes {Point{100,20},oss.str()};	
	
	Image cal {Point{225,225},"TOKYO.jpg"}; 
	cal.set_mask(Point{40,40},200,150);
	win.attach(c);
	win.attach(m);
	win.attach(e);
			
	win.attach(sizes);
	win.attach(cal);
	win.set_label("Canvas #12");
	
    win.wait_for_button();

}
