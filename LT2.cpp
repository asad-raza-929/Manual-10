#include<iostream>
#include<string>
#include<vector>
using namespace std;

void sort(vector<int> v, float a){
	for(int i=0; i<a; i++){
    	for(int j=0; j<a-1; j++){
    		if(v[j]>v[j+1]){
    			int temp; 
    			temp = v[j];
    			v[j] = v[j+1];
    			v[j+1] = temp;
			}
		}
	}

	if(int(a)%2==!0){         //static-casting
		cout<<"Median of the Grades is :"<<v[(a)/2]<<endl;
	}
	else
	cout<<"Median of the Grades is :"<<v[(a+1)/2]<<" "<<v[(a+3)/2]<<endl;
}


int main(){
	vector<int> v;
    vector<string> vc;
    string name;
    float n , G , sum;
    cout<<"Enter the number of students :";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Enter the name and grade of the student :";
    cin>>name>>G;
    vc.push_back(name);
    v.push_back(G);
	sum+=G;	
	}
    cout<<"\nThe mean of grades is :"<<sum/n<<endl;

    sort(v , n);

	int mostRepeated = -1; // Initialize with an invalid value
    int maxFrequency = 0; // Initialize frequency count

    for (size_t i = 0; i < v.size(); ++i) {
        int count = 0; // Initialize the count for the current element

        // Count occurrences of the current element in the vector
        for (size_t j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                ++count;
            }
        }

        // Update mostRepeated and maxFrequency if a higher frequency is found
        if (count > maxFrequency) {
            maxFrequency = count;
            mostRepeated = v[i];
        }
    }

    if (mostRepeated != -1) {
        std::cout << "Mode of Grades : " << mostRepeated << std::endl;
    } else {
        std::cout << "Grades do not have a mode value." << std::endl;
    }
    
    for(int i=0; i<n; i++){
    	cout<<"Student "<<vc[i]<<" has grade "<<v[i]<<endl;
	}
	
	return 0;
}
