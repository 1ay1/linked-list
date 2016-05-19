#include <iostream>

using namespace std;

class node
{
	public:
	int a;
    node* b;
};

node* fst;

int main()
{
	int c = 0;
	node* nn;
	node* t;
	int n;
	cout << "Enter the number of elements you wanna have in the linked list: ";
	cin >> n;
	cout << "Keep entering " << n << " numbers: " ;
	while(c < n)
	{
		if (c == 0)
	    {
		    fst = new node ;
		    cin >> fst -> a;
		    fst ->b = 0;
		    t = fst;
		    c++;		
	    }
	    else
	    {
			nn = new node ;
			cin >> nn ->a ;
			t -> b = nn ;
			nn -> b = 0 ;
			t = nn;
			c++;
		}
	}
	cout << "Now I (This computer) am gonna show you what you entered and what i stored:  " ;
	t = fst;
	while (t-> b != 0)
	{
		cout << t -> a << endl;
		t = t->b ;
	}
	return 0;
}
