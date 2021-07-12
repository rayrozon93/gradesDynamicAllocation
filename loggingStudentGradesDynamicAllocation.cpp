#include <iostream>
#include <string>

using namespace std;

int main()
{
    int size;
    int *ptr;
    
    cout << "How many students do you have? " << endl;
    cin >> size;
    
    ptr = new int [size];
    cout << "What are the grades of the students? " <<endl;
    for (int i=0;i<size;i++)
    {
     cin >> ptr[i];
    }
    
    cout << "The grades are:"<< endl;
    for (int i=0;i<size;i++)
    {
        cout << ptr[i] << endl;
    }
    
    return 0;
    
}