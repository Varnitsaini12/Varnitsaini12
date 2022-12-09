#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string>m;
	m[1] = "varnit";
	m[2] = "Saini";
	m[13] = "Noliyan"; // In case of map the key are sorted and in case of unordered_map the keys are in random manner

	m.insert({4,"Mujhe"});
	cout<<"Before Erase"<<endl;
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	m.erase(13);
	cout<<"After Erase"<<endl;
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<"finding 13 --> "<<m.count(13)<<endl;

	auto it = m.find(4);
	for(auto i = it; i!=m.end(); i++){
		cout<<(*i).first<<" "<<(*i).second<<endl;
	}

	 
   return 0;
}

// Complexity of map here is O(logn)
// In unordered_map complexity is O(1)