// ------- Hash -Code --------




//-----------Unordered Map------------
/*

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

    // One way to printing the element of Map
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
 


   // Lets use the Iterator  to Traverse one by one in map
   cout<<" "<<endl;
   unordered_map<string, int> :: iterator it = m.begin();
   
   while(it!=m.end())
   {
    cout<<it->first<<" "<<it->second<<endl;
    it++;
   }

   //NOTE  If we are using unordered map then the output also print in unordered format..

    return 0;
}




*/






// -----------Ordered Map-------------




#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;      // Creating a map (ordered map)

    m["waqar"] = 4;   // Direct insertion in map
    m["farooqui"] = 3;
    m["jimmy"] = 2;

    // Search and print the value associated with the key "farooqui"
    cout << m["farooqui"] << endl;
    cout << m["waqar"] << endl;
    cout << m["jimmy"] << endl;

    cout << m["invalid"] << endl;  // It will create an entry of Zero.

    cout << m.size() << endl;  // It will return the size of the map

    cout << m.count("waqar") << endl;  // It will count how many times "waqar" has occurred

    m.erase("jimmy");  // Erase the entry with key "jimmy"

    cout << m["jimmy"] << endl;  // Check whether successfully erased or not (output should be 0)

    // Printing the elements of the map using range-based for loop
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // Using iterator to traverse the map
    cout << " " << endl;
    map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // Output will be sorted based on keys since we are using std::map.

    return 0;
}
