#include "std_lib_facilities.h"



template<typename T>
struct S
{
	S() {}
	
	S(T t): val(t)
	{}

	

	T val;
};


int main()
{
	S<int> si;
	cout << "Adj meg egy egesz szamot: "; cin >> si.val;
	cout << si.val << endl;

	S<char> sc;
	cout << "Adj meg egy karaktert: "; cin >> sc.val;
	cout << sc.val << endl;

	S<double> sd;
	cout << "Adj meg egy valos szamot: "; cin >> sd.val;
	cout << sd.val << endl;

	S<string> ss;
	cout << "Adj meg egy szot: "; cin >> ss.val;
	cout << ss.val << endl;

	S<vector<int>> svi(vector<int>(10));
	cout << "Adj meg 10 db egesz szamot: ";
	for(int i = 0; i < 10; ++i)
		cin >> svi.val[i];
	for(int i : svi.val)
		cout << i << endl;

	

	return 0;
}
