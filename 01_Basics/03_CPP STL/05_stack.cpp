#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /*

    Elements of stack CANNOT be accessed in index manner. So st[2] is invalid
    Stack has only 3 generic functions:
    1) push
    2) pop
    3) top

    */

    stack<int> st;

    st.push(1);    //{1}
    st.push(2);    //{1,2}
    st.push(3);    //{1,2,3}
    st.push(4);    //{1,2,3,4}
    st.push(5);    //{1,2,3,4,5}
    st.emplace(6); //{1,2,3,4,5,6}
    st.emplace(7); //{1,2,3,4,5,6,7}

    cout << "Size of stack: " << st.size() << endl;

    cout << "Top of stack: " << st.top(); // prints top element (7 in this case).

    cout << endl;

    cout << "--------------------------------------------------------" << endl;

    st.pop(); // pops the top element (7 in this case). {1,2,3,4,5,6}

    cout << "Size of stack: " << st.size() << endl;

    cout << "Top of stack: " << st.top() << endl;

    cout << "--------------------------------------------------------" << endl;

    cout << "Is stack empty?: " << st.empty() << endl;

    st.pop(); // {1,2,3,4,5}
    st.pop(); // {1,2,3,4}
    st.pop(); // {1,2,3}
    st.pop(); // {1,2}
    st.pop(); // {1}
    st.pop(); // {}

    cout << "Is stack empty?: " << st.empty() << endl;

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Swapping two stacks:

    stack<int> st_1;

    st_1.push(1);
    st_1.push(2);
    st_1.push(3);
    st_1.push(4);
    st_1.push(5);
    st_1.emplace(6);
    st_1.emplace(7);

    stack<int> st_2;

    st_2.push(7);
    st_2.push(6);
    st_2.push(5);
    st_2.push(4);
    st_2.push(3);
    st_2.emplace(2);
    st_2.emplace(1);

    cout << "--------------------------------------------------------" << endl;
    cout << "Before Swap" << endl;
    cout << "Top of Stack1: " << st_1.top() << endl;
    cout << "Top of Stack2: " << st_2.top() << endl;

    st_1.swap(st_2);

    cout << "________________________________________________________" << endl;
    cout << "After Swap" << endl;
    cout << "Top of Stack1: " << st_1.top() << endl;
    cout << "Top of Stack2: " << st_2.top() << endl;

    return 0;
}
