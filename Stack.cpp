



//-- Reverse the string , sentences using stack------



/*
#include <iostream>
#include <stack>
using namespace std;




int main()
{
	
	string st="Waqar";
	
	stack<char> s;


     for(int i=0; i<st.length(); i++)
	 {
	 	char ch=st[i];
	 	s.push(ch);
	 	
		 }	
		 
		 string ans="";
		 
	while(!s.empty())
	{
		char ch=s.top();
		ans.push_back(ch);
		
		s.pop();
	}
	
	cout<<ans;
}



*/









/*----------- Stack Push And Pop -------------

#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int n;

public:
    Stack(int size) {
        n = size;
        arr = new int[n];
        top = -1;
    }

    void push(int x) {
        if (top == n - 1) {
            cout << "Stack is overflow" << endl;
        } else {
            top++;
            arr[top] = x;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "No element to pop" << endl;
        } else {
            top--;
        }
    }

    int Top() {
        if (top == -1) {
            cout << "No element in stack" << endl;
            return -1;  // Return a default value
        } else {
            return arr[top];
        }
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    int n;
    cin >> n;
    Stack st(n);
    st.push(1);
    st.push(3);
    st.push(5);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;

    return 0;
}




*/










/* -------------DELETE THE MIDDLE ELEMENT OF STACK--------


#include <bits/stdc++.h>
using namespace std;

void solvestackrecursive(stack<int> &inputStack, int count, int size) {
    if (count == size) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solvestackrecursive(inputStack, count + 1, size);

    inputStack.push(num);
}

void deletemiddleelement(stack<int> &inputStack, int count, int n) {
    if (inputStack.empty() || count == n / 2) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    deletemiddleelement(inputStack, count + 1, n);

    inputStack.push(num);
}

int main() 
{
    stack<int> inputStack;

    int n;
    cout << "Enter the number of elements in the stack: ";
    cin >> n;

    cout << "Enter the elements of the stack: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        inputStack.push(num);
    }
    

    cout << "Original stack: ";
    stack<int> tempStack = inputStack;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Delete the middle element
    deletemiddleelement(inputStack, 0, n);

    cout << "Stack after deleting the middle element: ";
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;

    return 0;
}



Output:

Enter the number of elements in the stack: 5
Enter the elements of the stack: 1
2
3
4
5
Original stack: 5 4 3 2 1
Stack after deleting the middle element: 5 4 2 1





*/







/*-----the code for checking valid parentheses-- using stack..





#include <bits/stdc++.h>
using namespace std;



bool isValidParenthesis(string expression)
{
    stack<char> inputStack;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            inputStack.push(ch);
        }
        else
        {
            if (!inputStack.empty())
            {
                char top = inputStack.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    inputStack.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    // Check if the stack is empty at the end
    return inputStack.empty();
}

int main()
{
    string expression1 = "{[()]}";
    string expression2 = "{[()]";
    string expression3 = "{[()]}}";

    cout << isValidParenthesis(expression1) << endl; // Output: 1 (true)
    cout << isValidParenthesis(expression2) << endl; // Output: 0 (false)
    cout << isValidParenthesis(expression3) << endl; // Output: 0 (false)

    return 0;
}



// OUTPUT 

1  (True)
0  (false)
0  false

*/









/* ---------- Insert Element At Bottom  Using Stack---------


#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

void solvestackrecursive(stack<int>& inputStack, int x) {
    if (inputStack.empty()) {
        inputStack.push(x);
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solvestackrecursive(inputStack, x);

    inputStack.push(num);
}

stack<int> PushElementAtBottom(stack<int>& inputStack, int x) {
    solvestackrecursive(inputStack, x);
    return inputStack;
}

void printStack(stack<int> stk) {
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Original Stack: ";
    printStack(st);

    int x = 5;
    st = PushElementAtBottom(st, x);

    cout << "Updated Stack: ";
    printStack(st);

    return 0;
}


Output:
Original Stack: 4 3 2 1
Updated Stack: 5 4 3 2 1

*/













/*------------Reverse the Stack using recursion-------



#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int>& inputStack, int x) {
    if (inputStack.empty()) {
        inputStack.push(x);
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    InsertAtBottom(inputStack, x);

    inputStack.push(num);
}

void ReverseStack(stack<int>& inputStack) {
    if (inputStack.empty()) {
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    ReverseStack(inputStack);

    InsertAtBottom(inputStack, num);
}

void PrintStack(stack<int> inputStack) {
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;
}

int main() {
    stack<int> inputStack;

    inputStack.push(1);
    inputStack.push(4);
    inputStack.push(8);
    inputStack.push(3);
    inputStack.push(5);

    cout << "Original Stack: ";
    PrintStack(inputStack);

    ReverseStack(inputStack);

    cout << "Reversed Stack: ";
    PrintStack(inputStack);

    return 0;
}




Output:

Original Stack: 5 3 8 4 1
Reversed Stack: 1 4 8 3 5

--------------------------------
Process exited after 0.09231 seconds with return value 0
Press any key to continue . . .




*/











/*--------Sort The Stack using recursion-------





#include <iostream>
#include <stack>

using namespace std;

void InsertSort(stack<int>& inputStack, int num) {
    if (inputStack.empty() || inputStack.top() < num) {
        inputStack.push(num);
        return;
    }

    int storedNum = inputStack.top();
    inputStack.pop();

    InsertSort(inputStack, num);

    inputStack.push(storedNum);
}

void SortStack(stack<int>& inputStack) {
    if (inputStack.empty()) {
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    SortStack(inputStack);

    InsertSort(inputStack, num);
}

void PrintStack(stack<int> inputStack) {
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;
}

int main() {
    stack<int> inputStack;
    inputStack.push(1);
    inputStack.push(4);
    inputStack.push(7);
    inputStack.push(-3);
    inputStack.push(9);
    inputStack.push(16);
    inputStack.push(19);

    cout << "Original Stack: ";
    PrintStack(inputStack);

    SortStack(inputStack);

    cout << "Sorted Stack: ";
    PrintStack(inputStack);

    return 0;
}



Output:
Original Stack: 19 16 9 -3 7 4 1
Sorted Stack: 19 16 9 7 4 1 -3

--------------------------------
Process exited after 0.05742 seconds with return value 0
Press any key to continue . . .




*/










/*  ----Check for redundant brackets in a Stack---




#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool CheckRedundantBracket(string& s) {
    stack<char> inputStack;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*') {
            inputStack.push(ch);
        } else if (ch == ')') {
            bool redundant = true;

            while (inputStack.top() != '(') {
                char top = inputStack.top();

                if (top == '+' || top == '-' || top == '/' || top == '*') {
                    redundant = false;
                }
                inputStack.pop();
            }

            // Pop the opening bracket
            inputStack.pop();

            if (redundant) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    string expression1 = "(a+b)";
    string expression2 = "((a+b))";
    string expression3 = "((a+b)*c)";
    string expression4 = "(a+(b+c))";

    cout << "Expression 1 has redundant brackets: " << (CheckRedundantBracket(expression1) ? "Yes" : "No") << endl;
    cout << "Expression 2 has redundant brackets: " << (CheckRedundantBracket(expression2) ? "Yes" : "No") << endl;
    cout << "Expression 3 has redundant brackets: " << (CheckRedundantBracket(expression3) ? "Yes" : "No") << endl;
    cout << "Expression 4 has redundant brackets: " << (CheckRedundantBracket(expression3) ? "Yes" : "No") << endl;


return 0;

}


Output:
Expression 1 has redundant brackets: No
Expression 2 has redundant brackets: Yes
Expression 3 has redundant brackets: No
Expression 4 has redundant brackets: No

--------------------------------
Process exited after 7.043 seconds with return value 0
Press any key to continue . . .



*/
