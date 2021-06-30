/*
This is a practice program for implementating selection sort on vectors
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//find the index of the least element in a vector
int least(vector<string> strs, int start) {
    if (strs.size() == 1) return start; //if vector only have 1 element, return starting point
    int leastindex = start;
    unsigned int i = start;

    //loop through each element to find the least index
    for (; i < strs.size(); i++) {
        if (strs[i] < strs[leastindex]) leastindex = i;
    }
    return leastindex;
}

//place vector elements in alphabetical order
void selsort(vector<string>& strs) {
    int currentindex = 0; //current index tracker

    //loop through element and swap least element in front
    for (auto i = strs.begin(); i != strs.end(); i++) {
        //find index of least element
        int leastindex = least(strs, currentindex);
        //swap function call
        swap(strs[leastindex], strs[currentindex]);
        currentindex++;
    }

}

int main()
{
    vector<string> teststr = { "lion","tiger" };
    vector<string> teststr2 = { "lion", "tiger", "zebra", "bear" };
    cout << "Before: ";
    for (unsigned int i = 0; i < teststr.size(); i++) {
        cout << teststr[i] << " ";
    }
    //sort teststr
    selsort(teststr);
    cout << endl << "After: ";
    for (unsigned int i = 0; i < teststr.size(); i++) {
        cout << teststr[i] << " ";
    }
    cout << endl << "Before: ";
    for (unsigned int i = 0; i < teststr2.size(); i++) {
        cout << teststr2[i] << " ";
    }
    //sort teststr2
    selsort(teststr2);
    cout << endl << "After: ";
    for (unsigned int i = 0; i < teststr2.size(); i++) {
        cout << teststr2[i] << " ";
    }
}