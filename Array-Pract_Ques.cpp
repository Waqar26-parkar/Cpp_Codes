

/*   --check Prime number  source code----
#include <bits/stdc++.h>
using namespace std;

int main()
{


    int n;
    cin>>n;
   
    int check=0;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            check++;
        }
        i++;

    }

    if(check==2)
    {
        cout<<"this is prime num:"<<n<<endl;

    }
    else
    {
        cout<<"this is not prime num:"<<n<<endl;
    }

    return 0;
}



TC = O(n)
SC= O(1)

*/



//----Fibbonaci   Using recursion Source code---- 
/*
#include <bits/stdc++.h>
using namespace std;

void printFibonacci(int n, int a = 0, int b = 1)
{
    if (n <= 0)
        return;

    cout << a << " ";

    printFibonacci(n - 1, b, a + b);
}

int main()
{
    int n;
    cin >> n;
    printFibonacci(n);

    return 0;
}


TC = O(n)
SC= O(n)


*/






//---Largest element in the array  Source code---


/*
#include <bits/stdc++.h>
using namespace std;

int largest_ele(int n, int arr[])
{

    int ele=0;
    
        for(int i=0; i<n; i++)
        {

            if(arr[i]>ele)
            {
               ele=arr[i];
            }
            
        }
    return ele;

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

    cout<<largest_ele(n,arr);

}



TC = O(n)
SC= O(n)



*/



// Reversed the string source code----------


/*
#include <bits/stdc++.h>
using namespace std;

string ReversedtheString(const string& str)
{
    string Revstr = str; // Create a copy of the input string

    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        swap(Revstr[start], Revstr[end]);
        start++;
        end--;
    }

    return Revstr;
}



int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed = ReversedtheString(str);
    cout << "Reversed string: " << reversed << endl;
    //cout << reverseString(str);

    return 0;
}


TC = O(1)
SC= O(n)



*/






// ----Checking string is Plaindrome or not



/*

#include <bits/stdc++.h>
using namespace std;


int palindrome(int n)
{
    int rev=0;
    int orig=n;

    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    
    return orig=rev;

}

int main()
{


    
    int n;
    cin>>n;

    if (palindrome(n)) // Call the function and check its return value
    {
        cout << "The number is a palindrome: " << n << endl;
    }
    else
    {
        cout << "It's not a palindrome: " << n << endl;
    }


}


*/


#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n;
    cin>>n;

    int arr[i];

   for(int i=0; i<n; i++)
       {

           cin>>arr[i];
       }

    int k;
    cin>>k;



    sort(arr,arr+n);
    

       
       }
