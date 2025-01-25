#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair <int,int> p = {1,3};
    cout << p.first << " " << p.second<<endl;
    //nested pair
    pair <int,pair <int,int>> p1 = {1,{2,3}};
    cout << p1.first << " " << p1.second.first<< " " << p1.second.second<<endl;
    //pair array
    pair <int,int> arr[3] = {{1,2},{1,3},{1,4}};
    cout << arr[0].first << " " << arr[0].second<<endl;
    cout << arr[1].first << " " << arr[1].second<<endl;
    cout << arr[2].first << " " << arr[2].second<<endl;

    return 0;
}