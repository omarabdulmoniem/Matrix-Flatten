#include <iostream>
#include <vector>
#include <string>
using namespace std;


// specifying the dimensions of the matrix
const int height = 3;
const int width = 4;
const int depth = 3;

// using template to make the function generic for any data type

template<typename Type>

vector<Type> flatten(Type arr[height][width][depth]) {
    
    vector<Type> flat;

    Type* oneD;
    oneD = new Type[height * width * depth];


    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < depth; k++) {
                oneD[i + height * (j + width * k)] = arr[i][j][k];
            }
        }
    }

    for (int y = 0; y < height * width * depth; y++) {
        flat.push_back(oneD[y]);
    }


    return flat;
}


// Testing

int main()
{
    // test for integer array

    int a[height][width][depth];

    int count = 0;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < depth; k++) {
                a[i][j][k] = count;
                count++;
            }
        }
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < depth; k++) {
                cout << a[i][j][k] << " ";
            }
        }
    }
    
    vector<int> flattend = flatten(a);
    cout << endl;
    
    for (int y = 0; y < flattend.size(); y++) {
        cout << flattend[y] << " ";
    }
    cout << endl << endl;
 


    // test for string array

    string s[height][width][depth];

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < depth; k++) {
                s[i][j][k] = to_string(i) + to_string(j) + to_string(k);
            }
        }
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < depth; k++) {
                cout << s[i][j][k] << " ";
            }
        }
    }

    vector<string> flatte = flatten(s);
    cout << endl;

    for (int y = 0; y < flatte.size(); y++) {
        cout << flatte[y] << " ";
    }
    cout << endl << endl;


}
