// ------- Hash -Code --------

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






// -----------Unordered Map-------------




/*
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;      // Creating a map (ordered map)

    m["waqar"] = 4;   // Direct insertion in map
    m["farooqui"] = 3;
    m["jimmy"] = 1;

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


*/





// -----------Print the number that have maximum Frequency ----------


/*
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int Max_freq(int arr[], int n) {
    int maxfr = 0;
    int maxans = 0;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
        maxfr = max(maxfr, m[arr[i]]);
    }

    for (int i = 0; i < n; i++) {
        if (m[arr[i]] == maxfr) {
            maxans = arr[i];
            break;
        }
    }

    return maxans;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << Max_freq(arr, n);
}


*/






//  ---------------Checking the Subset array inside the Array--------------


/*
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Suset_Array(int n, int arr[], int n1, int arr1[])
{

    unordered_map<int,int> mp;

    for(int i=0; i<n; i++)
    {
        mp[arr[i]]=i;
    }

    int subsetArr[n1];
    int subsetIndex = 0;

    for(int i=0; i<n1; i++)
    {
        if(mp.find(arr1[i])==mp.end())
        {
            return -1;
        }
        subsetArr[subsetIndex++] = arr1[i];
    }
  
    cout << "Subset array: ";
    PrintArray(subsetArr, n1);
   
    return 1;

}





int main()
{

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int n1;
    cin>>n1;

    int arr1[n1];

    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }

    cout<<Suset_Array(n,arr,n1,arr1);
}


*/






//---------Maximum Distance of same element in an array---------

/*
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;


int Max_Distance_element(int n , int arr[])
{ 

    unordered_map<int,int> mp;

    int max_dis=0;

    for(int i=0; i<n; i++)
    {
       if(mp.find(arr[i])==mp.end())
       {
        mp[arr[i]]=i;
       }

       else{
        max_dis=i-mp[arr[i]];
       }
    }

    return max_dis;

}

int main()
{

    int n;
    cin>>n;
    int arr[n]; 

    for(int i=0; i<n; i++)
    {

        cin>>arr[i];
    }

    cout<<Max_Distance_element(n,arr);

    return 0;

}


*/

//Output

// 5
// 1 2 2 3 1
// 4



//----------- Remove the minimum number of count---------

//-----Basically this code will checks the minimum occurence in both the array then it wil Print the minimum occurence number....


#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int Removeminimum_number(int n, int arr[], int n1, int arr1[] )
{
    unordered_map<int,int> mp,mp1;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }

        for(int i=0; i<n1; i++)
    {
        mp1[arr1[i]]++;
    }

    int ans=0;

    for(auto it:mp)
    {
        if(mp1.find(it.first)!=mp1.end())
        {
            ans+=min(it.second,mp1[it.first]);

        }
    }
    return ans;
}


int main()
{

 int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int n1;
    cin>>n1;

    int arr1[n1];

    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }

    cout<<Removeminimum_number(n,arr,n1,arr1);
}




