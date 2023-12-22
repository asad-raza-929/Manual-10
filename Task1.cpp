#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> V;
	int element , s, index ;
	cout<<"Enter Length of Vector :";
	cin>>s;
	cout<<"Enter Elements in the VEctor:";
	for(int i=0; i<s; i++){
		cin>>element;
		V.push_back(element);
	}
   	cout<<"Vector :";
	for(int i=0; i<V.size(); i++){
		cout<<V[i]<<" ";
	}	
	vector<int> :: iterator itr = V.begin() ;
	cout<<"\nEnter the index from where the element is to be replaced with 5.";
	cin>>index;
	if(index<s){     
	V.erase(itr+index);
	V.insert(itr +index, 5);
    for(int i=0; i<V.size(); i++){
		cout<<V[i]<<" ";
	    }
	}
    else    
         cout<<"Index greator than Length of vector.";
         
return 0;
}
