//============================================================================
// Name        : treeAssignment.cpp
// Author      : Kristian
// Version     :
// Copyright   : Copyright-Jan-8-2016
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main(int, char **)
   {
	//Use the project exampleRay.cpp if we need to make this an options based system,
	//Do this after the actual program itself has been implemented (which will still
	//require the parts from previously mentioned program

	//Trees have structures from the left to the right that are pointers expecting the
	//index to incremented, node pointing to another node in the parent, and the node it
	//points to is the child
	//leafs - no children
	//(why is the log function from a calculator used in a lot of these algorithms?)
	//http://math.hws.edu/eck/cs225/s03/binary_trees/
	//left lower value, right higher or equal
	//root node top of the upsidedown tree
	//The code that searches for free spots needs to find the next free node to store in data in either direction
	//

	//(This is what I want to do with mine, search a name and insert where my expression determines it could go
	//Binary are useful due to the fact they
	//each create another tree at each node
	//where there is a lower and greater node on each side
	//(this is why we are using them)

	//From a node there in more than one potential node that will occur? (traversing a tree for
	//data has something to do with this here)

	//Keep the code commented out below, I have to teach myself to implement this
	//with the same time used to build it (probably incomplete)

	//http://logbase2.blogspot.ca/2007/12/log-base-2.html
   /*
    *
    * I'm not using this one, build one from the logic from this buddy - http://www.cprogramming.com/tutorial/lesson18.html
   tree<string> tr;
   tree<string>::iterator top, one, two, loc, banana;

   top=tr.begin();
   one=tr.insert(top, "one");
   two=tr.append_child(one, "two");
   tr.append_child(two, "apple");
   banana=tr.append_child(two, "banana");
   tr.append_child(banana,"cherry");
   tr.append_child(two, "peach");
   tr.append_child(one,"three");

   loc=find(tr.begin(), tr.end(), "two");
   if(loc!=tr.end()) {
   tree<string>::sibling_iterator sib=tr.begin(loc);
   while(sib!=tr.end(loc)) {
     cout << (*sib) << endl;
     ++sib;
     }
   cout << endl;
   tree<string>::iterator sib2=tr.begin(loc);
   tree<string>::iterator end2=tr.end(loc);
   while(sib2!=end2) {
     for(int i=0; i<tr.depth(sib2)-2; ++i)
        cout << " ";
     cout << (*sib2) << endl;
     ++sib2;
     }
   }
   */
}
