
#include "Simple_window.h"
#include "Graph.h"


int main()
{
    using namespace Graph_lib;

   
    
    //1920*1080-as a képernyőm
    int szelesseg=1920;
    int magassag=1080;
    int teglalap_szelesseg=(szelesseg/3)*2;
    int teglalap_magassag=(magassag/4)*3;

    Simple_window win {Point{0,0},szelesseg, magassag, "Canvas"};
    
   
	
	Rectangle r {Point{0,0},teglalap_szelesseg ,teglalap_magassag};
	r.set_color(Color::red);
	r.set_fill_color(Color::green);
	r.set_style(Line_style{Line_style::solid, 24}); //1/4 inch az 24 pixelnek felel meg



	win.attach(r);
    win.wait_for_button();

}
