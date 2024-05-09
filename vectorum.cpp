#include <iostream>
#include <vector>
using namespace std;

int main()
{
           int num;
    cout << "Enter the number: ";
    cin >> num;

vector<int>vec;
int val;
    for (int i = 0; i < num; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> val;
        vec.push_back(val);
    }

    int sum = 0;
    cout<< "Sum:- ";
    for (int i = 0; i < num; i++) {
        
        if(i<num- 1){
            cout<<vec[i]<<" + ";
        }
            else{
                 cout<<vec[i]<<" = ";
            }
        sum += vec[i];
    }

    cout  << sum << endl;


}

