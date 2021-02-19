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

	

	
/*
	Rectangle ajto {Point{590,ymax}, 100, 170};

	ajto.set_color(Color::green);
	ajto.set_style(Line_style{Line_style::solid, 6}); */
	
	Closed_polyline alap;
	alap.add(Point{350,ymax});
	alap.add(Point{930,ymax});
	alap.add(Point{930,ymax-400});
	alap.add(Point{350,ymax-400});
	alap.set_color(Color::blue);
	alap.set_style(Line_style{Line_style::solid, 6}); 
	
	Closed_polyline teto;
	teto.add(Point{350,ymax-400});
	teto.add(Point{xmax/2-55,140});
	teto.add(Point{xmax/2+55,140});
	teto.add(Point{930,ymax-400});
	teto.set_color(Color::red);
	teto.set_style(Line_style{Line_style::solid, 6}); 
	
	Closed_polyline kemeny;
	kemeny.add(Point{xmax/2-45,60});
	kemeny.add(Point{xmax/2+45,60});
	kemeny.add(Point{xmax/2+45,140});
	kemeny.add(Point{xmax/2-45,140});
	kemeny.set_color(Color::red);
	kemeny.set_style(Line_style{Line_style::solid, 6});
	
	Closed_polyline ablak1;
	ablak1.add(Point{440,ymax-135});
	ablak1.add(Point{xmax/2-90,ymax-135});
	ablak1.add(Point{xmax/2-90,ymax-245});
	ablak1.add(Point{440,ymax-245});
	ablak1.set_color(Color::yellow);
	ablak1.set_style(Line_style{Line_style::solid, 6}); 
	
	Closed_polyline ablak2;
	ablak2.add(Point{840,ymax-135});
	ablak2.add(Point{xmax/2+90,ymax-135});
	ablak2.add(Point{xmax/2+90,ymax-245});
	ablak2.add(Point{840,ymax-245});
	ablak2.set_color(Color::yellow);
	ablak2.set_style(Line_style{Line_style::solid, 6}); 
	
	Closed_polyline ajto;
	ajto.add(Point{590,ymax});
	ajto.add(Point{690,ymax});
	ajto.add(Point{690,ymax-220});
	ajto.add(Point{590,ymax-220});
	ajto.set_color(Color::black);
	ajto.set_style(Line_style{Line_style::solid, 6}); 
	
	Line fust={Point{xmax/2,50},Point{xmax/2+45,10}};
	fust.set_color(Color::black);
	fust.set_style(Line_style{Line_style::solid, 6});	
	
	win.attach(alap);
	win.attach(teto);
	win.attach(ablak1);	
	win.attach(ablak2);
	win.attach(ajto);
	win.attach(kemeny);
	win.attach(fust);
	
    win.wait_for_button();

}
