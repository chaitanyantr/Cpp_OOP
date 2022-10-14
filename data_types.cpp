#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    const int DAAAM = 45;
    const float DEEM = 56;
    
    string  ck  = "hare krishna";
    char    f   = 'a';
    float   g   = 9.999;
    int     gg  = 45;
    
    cout << int(g) <<endl;

    double short_var = 15667.123456789876;

    cout <<DAAAM    <<endl;
    cout <<DEEM     <<endl;
    cout <<gg       <<endl;
    cout <<ck       <<endl;
    cout<< f        <<endl;
    cout<< short_var <<endl;
    cout << float(short_var) <<endl;


    int luckynumbers[6] = {0,1,2,3,4,5};
    cout << luckynumbers[0] <<endl;


    int numberGrid[2][3];
    numberGrid[0][1] = 99;

    cout << numberGrid[0][1] << endl;

    vector<string> friends;

    friends.push_back("oscar");
    
    friends.push_back("angel");

    friends.push_back("jacckk");

    friends.insert(friends.begin() + 1, "Jim");

    cout << friends.size() <<endl;

    cout << friends.at(3) <<endl;

    string ss = "ghty";

    string fff = "ghty";

    if(ss.compare(fff) == 0) 
    {
        cout<< "im inside its true" <<endl;

    } 

    int index = 1;

    while(index <= 5){
        index++;
        cout << index <<endl;

    }


    int  i;

    for(i=0; i <5; i++)
    {
        cout << i <<endl;
    }

    return 0 ;
}