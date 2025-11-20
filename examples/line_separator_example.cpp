
#include "json.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

using json::JSON;
using namespace std;

int main()
{
    JSON array;

    array[0] = "Test0";
    array[1] = "Test1";
    array[2][0] = "Sub0";
    array[2][1] = "Sub0";
    array[2][2] = "Sub0";
    cout << array << endl;

	// same array with line separators disabled
    array[2].SetLineSeperator(false);
    cout << array << endl;
}
