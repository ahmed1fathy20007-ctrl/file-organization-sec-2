#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string first,second,third;
    ifstream in("fruit.txt");
    in>>first>>second>>third;
    in.close();
    cout<<"first:"<<first<<endl;
    cout<<"second :"<<second<<endl;
    cout<<"third :"<<third<<endl;
    ofstream x("fruit.txt",ios::app);
    cout<<" "<<endl;
    x<<"Fresh Fruits"<<endl;
    x.close();
    return 0;
}
