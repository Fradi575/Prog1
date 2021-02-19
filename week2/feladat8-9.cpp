#include "Simple_window.h"
#include "Graph.h"



int main()
{
    using namespace Graph_lib;

   int xmax = 1280;
    int ymax = 720;

   int x_orig = xmax/2;
    int y_orig = ymax/2;

  

    Simple_window win {Point{100,100}, xmax, ymax, "Tokyo 2020"};

	
	Text t {Point{300,100}, "Tokyo 2020"};
	t.set_font(Font::times_bold);
	t.set_font_size(100);

	
	Image tokyo {Point{0,0}, "TOKYO.jpg"};
	Circle c {Point{x_orig,y_orig-50},100};
	Circle d {Point{x_orig-220,y_orig-50},100};
	Circle e {Point{x_orig+220,y_orig-50},100};
	Circle f {Point{x_orig-110,y_orig+50},100};
	Circle g {Point{x_orig+110,y_orig+50},100};
	
	c.set_color(Color::blue);
	c.set_style(Line_style{Line_style::solid, 6}); 
	d.set_color(Color::black);
	d.set_style(Line_style{Line_style::solid, 6}); 
	e.set_color(Color::red);
	e.set_style(Line_style{Line_style::solid, 6}); 
	f.set_color(Color::yellow);
	f.set_style(Line_style{Line_style::solid, 6}); 
	g.set_color(Color::green);
	g.set_style(Line_style{Line_style::solid, 6}); 
	win.attach(tokyo);
	win.attach(c);
	win.attach(d);
	win.attach(e);
	win.attach(f);
	win.attach(g);
	win.attach(t);
	

    win.wait_for_button();

}
