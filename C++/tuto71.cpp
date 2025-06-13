#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{

    

    // //Way to create a vector
    vector<int> vec1; // zero length intger vector
    // vector<char> vec2(4);//4-length charaater vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2);//4-length charater vector from vector 1
    // vector<int> vec4(6,13);//6-element vector of 23s
    // display(vec4);

    int element, size;
    cout << "Enter the size of your vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an elemnt to add to htis vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 566);
    display(vec1);

    return 0;
}