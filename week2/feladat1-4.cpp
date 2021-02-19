//c.set_color(Color::blue);
/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"



int main()
{
    using namespace Graph_lib;

    int xmax = 1280;
    int ymax = 720;

   

    Simple_window win {Point{100,100}, xmax, ymax, "Canvas"};

	Text b {Point{540,360}, "B"};
	b.set_font(Font::times_bold);
	b.set_color(Color::green);
	b.set_font_size(150);
	
	Text a {Point{740,360}, "A"};
	a.set_font(Font::times_bold);
	a.set_color(Color::blue);
	a.set_font_size(150);

	
	Rectangle r {Point{200,200}, 100, 30};

	r.set_color(Color::blue);
	r.set_style(Line_style{Line_style::solid, 6}); 
	
	Closed_polyline poly;
	poly.add(Point{100,50});
	poly.add(Point{200,50});
	poly.add(Point{200,100});
	poly.add(Point{100,100});
	
	
	poly.set_color(Color::red);
	poly.set_style(Line_style{Line_style::solid, 6}); 
	
	Text t {Point{210,220}, "Howdy!"};
	t.set_font(Font::times_bold);
	t.set_font_size(20);
	
	Rectangle egy {Point{100,500}, 50, 50};
	egy.set_fill_color(Color::red);
	egy.set_color(Color::red);
	egy.set_style(Line_style(Line_style::solid, 4));
	
	Rectangle ketto {Point{150,500}, 50, 50};
	ketto.set_fill_color(Color::white);
	ketto.set_color(Color::white);
	ketto.set_style(Line_style(Line_style::solid, 4));
	
	Rectangle harom {Point{200,500}, 50, 50};
	harom.set_fill_color(Color::red);
	harom.set_color(Color::red);
	harom.set_style(Line_style(Line_style::solid, 4));
	
	Rectangle negy {Point{100,450}, 50, 50};
	negy.set_fill_color(Color::white);
	negy.set_color(Color::white);
	negy.set_style(Line_style(Line_style::solid, 4));
	
	Rectangle ot {Point{150,450}, 50, 50};
	ot.set_fill_color(Color::red);
	ot.set_color(Color::red);
	ot.set_style(Line_style(Line_style::solid, 4));
	
	Rectangle hat {Point{200,450}, 50, 50};
	hat.set_fill_color(Color::white);
	hat.set_color(Color::white);
	hat.set_style(Line_style(Line_style::solid, 4));
	
	Rectangle het {Point{100,400}, 50, 50};
	het.set_fill_color(Color::red);
	het.set_color(Color::red);
	het.set_style(Line_style(Line_style::solid, 4));
	
	Rectangle nyolc {Point{150,400}, 50, 50};
	nyolc.set_fill_color(Color::white);
	nyolc.set_color(Color::white);
	nyolc.set_style(Line_style(Line_style::solid, 4));
	
	Rectangle kilenc {Point{200,400}, 50, 50};
	kilenc.set_fill_color(Color::red);
	kilenc.set_color(Color::red);
	kilenc.set_style(Line_style(Line_style::solid, 4));
	
	win.attach(r);
	win.attach(poly);
	win.attach(t);
	win.attach(b);
	win.attach(a);
	win.attach(egy);
	win.attach(ketto);
	win.attach(harom);
	win.attach(negy);
	win.attach(ot);
	win.attach(hat);
	win.attach(het);
	win.attach(nyolc);
	win.attach(kilenc);
    win.wait_for_button();

}
