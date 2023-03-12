#include <iostream>
#include <algorithm>
#include <vector>

int decr(int message[],char secret_key[]){
    vector<int> msg,newmsg;
    vector<char> key;
    vector<int>::iterator it;
    int i = 0;
    msg.resize(6);
    key.resize(6);
    newmsg.resize(6);
    copy ( message, message+6, msg.begin() );
    copy ( secret_key, secret_key+6, key.begin() );
    for(int i=0; i<6;i++)
    newmsg[i]=msg[p5[i]-1]^key[i];
    msg = newmsg;
    for(int i=0; i<6;i++)
    newmsg[i]=msg[p4[i]-1]^key[i];
    msg = newmsg;
    for(int i=0; i<6;i++)
    newmsg[i]=msg[p3[i]-1]^key[i];
    msg = newmsg;
    for(int i=0; i<6;i++)
    newmsg[i]=msg[p2[i]-1]^key[i];
    msg = newmsg;
    for(int i=0; i<6;i++)
    newmsg[i]=msg[p1[i]-1]^key[i];
    msg = newmsg;
    for (it=msg.begin(); it!=msg.end(); ++it)
    cout <<" " << char(*it);
    return 0;
}

int main()
{
  // Your code :)
  return 0;
}
