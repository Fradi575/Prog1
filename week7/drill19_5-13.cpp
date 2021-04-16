#include "std_lib_facilities.h"


template<typename T>
struct S
{
	
	S() {}
	
	S(T t) : val(t) {}

	
	S& operator=(const T& newValue) { val = newValue; return val; }
	

	void set(T t) { val = t; }
	const T& get() const { return val; }


	T& get() {return val;}	

private:
	
	T val;
};



template<typename T>
const T& get(S<T>& s)
{
	return s.get();
}



template<typename T>
void read_val(T& v)
{
	cin >> v;
}



int main()
{
	S<int> si;
	cout << "Adj meg egy egesz szamot: "; read_val(si.get());
	cout << si.get() << endl;

	S<char> sc;
	cout << "Adj meg egy karaktert: "; read_val(sc.get());
	cout << sc.get() << endl;

	S<double> sd;
	cout << "Adj meg egy valos szamot: "; read_val(sd.get());
	cout << sd.get() << endl;

	S<string> ss;
	cout << "Adj meg egy szot: "; read_val(ss.get());
	cout << ss.get() << endl;

	S<vector<int>> svi(vector<int>(10));
	cout << "Adj meg 10 db egesz szamot: ";
	for (int i = 0; i < 10; ++i)
		read_val(svi.get()[i]);
	for (int i : svi.get())
		cout << i << endl;

	
	return 0;
}
