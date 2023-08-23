// ------- Hash -Code --------

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;      // Creating an Unordered_map

    pair<string, int> p1 = make_pair("waqar", 4);   // Type1 Inserting in the map using pair
    m.insert(p1);

    pair<string, int> p2("farooqui", 3);  // Type 2 of Inserting an map    
    m.insert(p2);

    pair<string, int> p3("farooqui", 5); 
    m.insert(p2);

    m["jimmy"] = 2;     // Type3   Direct insertion in map


    // Search and print the value associated with the key "farooqui"
    cout << m.at("farooqui") << endl;
    cout << m.at("waqar") << endl;
    cout << m["jimmy"] << endl;

    cout<<m["invalid"]<<endl;  // It will create an entry of Zero..
    cout << m.at("invalid") << endl; /// Note if you  ONLY  run this  line you will get error beacuse you have not created such an eelemnt before..
    // If you run both above two line  then you will get zero as an outptut because now this time its created that entry if in future it will add the entry ...
 
    cout<<m.size()<<endl;  // It will retrun the size of map

    cout<<m.count("waqar")<<endl;  // It will  count that how many times waqar has come

    cout<<m.erase("jimmy")<<endl;  // It will erase the jimmy entry 

    cout<<m["jimmy"]<<endl;  // --check wheather successfully earse or not-----
    return 0;
}
