#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> vector1 {};
    vector <int> vector2 {};

    // vector 1
    vector1.push_back(10);
    vector1.push_back(20);

    cout << "size of vector 1 is " << vector1.size() << endl;
    cout << "first element is " << vector1.at(0) << endl;
    cout << "second element is " << vector1.at(1) << endl;

    // vector 2
    vector2.push_back(10);
    vector2.push_back(20);

    cout << "size of vector 2 is " << vector2.size() << endl;
    cout << "first element is " << vector2.at(0) << endl;
    cout << "second element is " << vector2.at(1) << endl;

    // declare a 2D vector and add vector1 and vector2 using push_bac
    vector <vector <int> > vector3;

    // add vector1 and vector2 to vector 3
    vector3.push_back(vector1);
    vector3.push_back(vector2);

    // display the elements in vector3
    cout << vector3.at(0).at(0) << endl;
    cout << vector3.at(1).at(0) << endl;

    // change vector1 first element to 1000
    vector1[0] = 1000;

    cout << "vector1 " << vector1 << endl;

    return 0;
}