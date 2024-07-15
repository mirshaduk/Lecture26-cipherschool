#include<iostream>
using namespace std;

int main()

{


    char name[1000];

    cout<<"Enter your name : (Note: Enter #after the end of your name: )";


    
    // int i;
    // for(i=0;i<5;i++)
    // {
    //     cout<<name[1];
    // }
    
    
    
    // cout<<"the name you just endered is "<<endl;
    
    // for(i=0;i<5;i++)
    // {
    //    cout<<name[i]; 

    // }

    int i=0;

    while(1)
    {
        cin>>name[1];
        if(name[i] == '#') break;
        i++;
    }   
     i=0;
   cout<< "The name you have just entered is"<<endl;
        while(name[1]!='#')
{
    cout<<name[i];
    i++;
}


}