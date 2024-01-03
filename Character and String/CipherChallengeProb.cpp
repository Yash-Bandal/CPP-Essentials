// Section 10
// Challenge - Solution
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string alphabet={" [abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key={"[ XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secret_msg;
    string encrypted_msg;
    string decrypted_msg;
    
    
    //get message
    cout<<"Enter Message secretely.." ;
    getline(cin,secret_msg);   
    cout<<"Your secret Message is: "<<secret_msg<<endl;
    
    //access
    cout<<endl;
    cout<<"Encrypting.........."<<endl;
    cout<<endl;
    
    //ENCRYPTION
    for(char c:secret_msg)
    {
      size_t position=alphabet.find(c);
      //cout<<position<<endl;
      if(position!=string::npos)
      {
          char new_char=key.at(position);
          encrypted_msg+=new_char;
          
      }
      else
      {
          encrypted_msg+=c; //if no key..return same character in encrypted
      }
    }
    cout<<"Yout Message Encrypted is: "<<encrypted_msg<<endl;
    
    
    cout<<endl;
    cout<<"Decrypting.........."<<endl;
    cout<<endl;
    
    
    //DECRYPTION
    for(char c:encrypted_msg) //iterate through encrypted msg
    {
      size_t position=key.find(c);
      //cout<<position<<endl;
      if(position!=string::npos)
      {
          char new_char=alphabet.at(position);
          decrypted_msg+=new_char;
          
      }
      else
      {
          decrypted_msg+=c; //if no key..return same character in encrypted
      }
    }
    cout<<"Yout Message Decrypted  is: "<<decrypted_msg<<endl;
    
    
    return 0;
}



//Logic  Use of .find to get positon and .at to retrive character from position 
/*
1 Initialize dictionary for each alphabet ..which key ,also space
2 First take in input string to encrypt
3 acces each character in the "string" using for loop
4 initialize position and get position using alphabet.find(character)
5 if not string::npos gives final size..that is ..verify if string not reached to final 
6.else store the key of the alphabet in string in new variable using key.at(positon)
7 repeat ulta for decrypt
*/
