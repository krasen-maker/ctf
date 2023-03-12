#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

void find(int dvd[], int rmn[],int index[]){
    vector<unsigned int> vec;
    unsigned int min = '!'|('!'<<8)|('!'<<16);
    unsigned int max  = 'z'|('z'<<8)|('z'<<16);
    unsigned int a = min+2;
    // (a % dvd) == rmn :==> dvd*i+rmn=a and min=<a=<max
    int i = (a-(a%dvd[0]))/dvd[0]+1;
    while (i*dvd[0] <= max){
        vec.push_back(i*dvd[0]+rmn[0]);
        i++;
    }
    for (unsigned int i: vec){
        if ((i % dvd[1]) == rmn[1] && (i % dvd[2]) == rmn[2]){
            a = i;
            break;
        }
    }
    cout << "min: " << min << "\t number: " << a << "\tmax: " << max << endl;
    cout << index[0] <<": " << char(a) << '\n'
        << index[1] <<": " << char(a>>8) << '\n'
        << index[2] <<": " << char(a>>16) << endl;
    
}

int main()
{
    cout << (8026746-4276545) << endl;
    // 1 условие:
    int dvd1[] = {3571,2843,30243};
    int rmn1[] = {2963,215,13059};
    int index1[] = {0,4,8};
    //2 условие:
    int dvd2[] = {80735,8681,40624};
    int rmn2[] = {51964,2552,30931};
    int index2[] = {1,5,9};
    //3 условие
    int dvd3[] = {99892,45629,24497};
    int rmn3[] = {92228,1080,12651};
    int index3[] = {2,6,10};
    //4 условие
    int dvd4[] = {54750,99627,84339};
    int rmn4[] = {26981,79040,77510};
    int index4[] = {3,7,11};
    
    find(dvd1,rmn1,index1);
    find(dvd2,rmn2,index2);
    find(dvd3,rmn3,index3);
    find(dvd4,rmn4,index4);
    return 0;
}
