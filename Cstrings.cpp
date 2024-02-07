//working with strings and character of c in cpp
#include<iostream>
#include<cstring>  //for c strings
#include<cctype>   //character functions

using namespace std;
int main()
{
    char fname[50];
    char lname[50];
    char fullname[50];
    char temp[50];
    // //basic and length
    // cout<<"Enter First name:"<<endl;
    // cin>>fname;

    // cout<<"Enter Last name:"<<endl;
    // cin>>lname;

    // cout<<"Hello "<<fname<<" Your last name is "<<lname<<" With length "<<strlen(lname)<<endl;

    // //copy and concat
    // strcpy(fullname,fname);  //Yash
    // strcat(fullname," ");    //Yash" "
    // strcat(fullname,lname);      //Yash" "Lende

    // cout<<"Your Full name is "<<fullname<<endl;    
    cout<<"--------------------------------------------------"<<endl;    

    // cout<<"Enter Your Full name"<<endl;    
    // cin>>fullname;
    // cout<<"Full name is "<<fullname<<endl;

    //if you enter Yash lende..only yash displayed..as " " acts as extraction..to conquer this use getline

   
    cout<<"Enter Your Full name"<<endl;    
    cin.getline(fullname,50);//stops at size 50..and copy full line upto it  ans yash lende
    cout<<"Full name is "<<fullname<<endl; 

    //comparison

    strcpy(temp,fullname);
    if((strcmp(temp,fullname))==0)
    cout<<temp<<" and "<<fullname<<" are the same "<<endl;
    else
     cout<<temp<<" and "<<fullname<<" are Different "<<endl;

//note size_t is unsigned integer like int 

for(size_t i=0;i<strlen(fullname);i++)
{
    if( isalpha(fullname[i]) )
    fullname[i]=toupper(fullname[i]);
}
 cout<<"Full name is "<<fullname<<endl; 

 cout<<"------------------"<<endl;
     if((strcmp(temp,fullname))==0)
    cout<<temp<<" and "<<fullname<<" are the same "<<endl;
    else
     cout<<temp<<" and "<<fullname<<" are Different "<<endl;


     cout<<"Result of comparingv"<<temp<<" and "<<fullname<<" is :"<<strcmp(temp,fullname)<<endl; //compared small with big so +1
     cout<<"Result of comparingv"<<fullname<<" and "<<temp<<" is :"<<strcmp(fullname,temp)<<endl;  //cmpared big with small so -1
    return 0;
}
