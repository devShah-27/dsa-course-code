#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Simplest Vector:

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // Dynamically increases size and adds 2 to the vector. Faster than push_back

    /*------------------------------------------------------------------------------------------------*/

    // Making a vector of pairs:

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});  // push_back here needs the curly braces {} in order to insert a particular pair
    vec.emplace_back(3, 4); // emplace_back does not need the curly braces {}

    /*------------------------------------------------------------------------------------------------*/

    // Creating a container already filled with some value:

    vector<int> vec2(5, 100); // creates a pre-filled continer with five instances of 100 {100, 100, 100, 100, 100}

    vector<int> vec3(5); // creates a pre-filled container with 0 or garbage value (depending upon compiler)

    /*------------------------------------------------------------------------------------------------*/

    // Copying a vector into another:

    vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v2(v1);    // another container with copy of v1, i.e., {20, 20, 20, 20, 20}

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Accessing elements of vector:

    vector<int> vexamp;
    vexamp.emplace_back(1);
    vexamp.emplace_back(2);
    vexamp.emplace_back(3);
    vexamp.emplace_back(4);
    vexamp.emplace_back(5);

    // cout << vexamp[4] << " "; // basic way of accessing vector elements using their indexes

    vector<int>::iterator it_1 = vexamp.begin(); // iterator "it_1" stores the ADDRESS of the first element of vector v
    cout << *(it_1) << " ";                      // index 0

    it_1++; // index 1
    cout << *(it_1) << " ";

    it_1 = it_1 + 3; // index 4
    cout << *(it_1) << " ";

    it_1++;                 // index 5 which does not exist in our case
    cout << *(it_1) << " "; // prints garbage value
    cout << endl
         << "---------------------------------------------------" << endl;

    // Apart from begin, we have some other iterators as well

    vector<int>::iterator it_2 = vexamp.end(); // This will not point to last element of vector. Iterator "it_2" points to JUST AFTER the last element of vector v
    it_2--;                                    // necessary to point to last element of vector

    /* The following two vectors are not used often but they work in reverse fashion

    vector<int>::iterator it_3 = vexamp.rend();
    vector<int>::iterator it_4 = vexamp.rbegin(); */

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Printing vectors:

    cout << "Print using normal syntax: ";
    for (vector<int>::iterator it = vexamp.begin(); it != vexamp.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;

    cout << "Print using shortcut syntax: ";
    for (auto it = vexamp.begin(); it != vexamp.end(); it++) // STL provides "auto" to refer to the datatype automatically based on the value assigned
    {
        cout << *(it) << " ";
    }

    cout << endl;

    cout << "Print using for-each loop: ";
    for (auto it : vexamp) // here, auto assignes int datatype to "it" as the elements are integers rather than iterators
    {
        cout << it << " ";
    }

    cout << endl
         << "---------------------------------------------------" << endl;

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Deletion in a vector:

    vector<int> vexamp_2;
    vexamp_2.emplace_back(10);
    vexamp_2.emplace_back(20);
    vexamp_2.emplace_back(30);
    vexamp_2.emplace_back(40);
    vexamp_2.emplace_back(50);
    vexamp_2.emplace_back(60);
    vexamp_2.emplace_back(70);

    vexamp_2.erase(vexamp_2.begin() + 1); // deletes 20
    cout << "After deleting 2nd element: ";
    for (auto it : vexamp_2)
    {
        cout << it << " ";
    }

    cout << endl;

    cout << "After deleting elements from 1 to 3: ";
    vexamp_2.erase(vexamp_2.begin() + 1, vexamp_2.begin() + 4); // Deletes elements in a range [1,4), i.e., 1 to 3 . [start, end). We give address of element after the element we want to delete. So, end is not inclusive
    for (auto it : vexamp_2)
    {
        cout << it << " ";
    }

    cout << endl
         << "---------------------------------------------------" << endl;

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Insertion in a vector:

    vector<int> vexamp_3(2, 100); //{100, 100}

    vexamp_3.insert(vexamp_3.begin(), 300); //{300, 100, 100}

    vexamp_3.insert(vexamp_3.begin() + 2, 200); //{300, 100, 200, 100}

    vexamp_3.insert(vexamp_3.begin() + 3, 3, 150); //{300, 100, 200, 150, 150, 150, 100}

    vector<int> insVector(2, 50);                                              //{50,50}
    vexamp_3.insert(vexamp_3.begin() + 2, insVector.begin(), insVector.end()); //{300, 100, 50, 50, 200, 150, 150, 150, 100}

    cout << "After inserting elements: ";
    for (auto it : vexamp_3)
    {
        cout << it << " ";
    }

    cout << endl
         << "---------------------------------------------------" << endl;

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Checking size of a vector:

    cout << "Vector 3 size: ";
    cout << vexamp_3.size(); // 9
    cout << endl
         << "---------------------------------------------------" << endl;

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Popping out last element of vector:

    vexamp_3.pop_back(); // removes last element

    cout << "Vector 3 after popping: ";
    for (auto it : vexamp_3)
    {
        cout << it << " ";
    }
    cout << endl
         << "---------------------------------------------------" << endl;

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Swapping two vectors:
    vector<int> vect1(2, 10);
    vector<int> vect2(2, 20);

    cout << "Before Swapping: ";
    cout << "Vector 1: ";
    for (auto it : vect1)
    {
        cout << it << " ";
    }
    cout << ", ";

    cout << "Vector 2: ";
    for (auto it : vect2)
    {
        cout << it << " ";
    }
    cout << endl;

    vect1.swap(vect2);

    cout << "After Swapping: ";
    cout << "Vector 1: ";
    for (auto it : vect1)
    {
        cout << it << " ";
    }
    cout << ", ";

    cout << "Vector 2: ";
    for (auto it : vect2)
    {
        cout << it << " ";
    }
    cout << endl
         << "---------------------------------------------------" << endl;

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Clearing entire vector:
    vector<int> vexamp_4;
    vexamp_4.emplace_back(100);
    vexamp_4.emplace_back(200);
    vexamp_4.emplace_back(300);
    vexamp_4.emplace_back(400);
    vexamp_4.emplace_back(500);
    vexamp_4.emplace_back(600);
    vexamp_4.emplace_back(700);

    cout << "Vector before clearing: ";
    for (auto it : vexamp_4)
    {
        cout << it << " ";
    }
    cout << endl;

    vexamp_4.clear();

    cout << "Empty Vector after clearing: ";
    for (auto it : vexamp_4)
    {
        cout << it << " ";
    }

    cout << endl
         << "---------------------------------------------------" << endl;

    /*------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------*/

    // Checking if vector is empty or not

    vector<int> vEmpty(1, 5);
    cout << "Is vector empty?: ";
    cout << vEmpty.empty(); // 1 if true, 0 if false

    return 0;
}
