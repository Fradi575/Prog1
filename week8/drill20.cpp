#include "std_lib_facilities.h"

template<typename Iter1, typename Iter2>
Iter2 IterCopy(Iter1 f1, Iter1 e1, Iter2 f2)
{
	if (f1==e1) cout<< "The container is empty" <<endl;
	while (f1 != e1)
	{
		*f2 = *f1;
		++f1;
		++f2;
	}

	return f2;
}



int main(){

array<int, 10> a = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };


vector<int> v {0,1,2,3,4,5,6,7,8,9};


list<int> l {0,1,2,3,4,5,6,7,8,9};

array<int, 10> a2 = a;
	
vector<int> v2 = v;

list<int> l2 = l;

for (int& i : a) i += 2;

for (int& i : v) i += 3;

for (int& i : l) i += 5;

IterCopy(a.begin(), a.end(), v.begin());
IterCopy(l.begin(), l.end(), a.begin());

auto indexv_mutato = find(v.begin(), v.end(), 3);
	if (indexv_mutato  != v.end())
		cout << "position 3 in v: " << distance(v.begin(), indexv_mutato) << endl;
	else
		cout << "v doesn't contain 3" << endl;

	
auto indexl_mutato = find(l.begin(), l.end(), 27);
	if (indexl_mutato != l.end())
		cout << "position 27 in l: "<< distance(l.begin(), indexl_mutato) <<endl;
	else
		cout << "l doesn't contain 27" << endl;

return 0;

}





















