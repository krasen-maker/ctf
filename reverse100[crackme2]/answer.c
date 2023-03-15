#include <stdio.h>
#include <math.h>

int hex_to_int(char i){
    int num;
    if ((i>=48) && (i<=57))
        num=i-48;
    else if((i>=65) && (i<=70))
        num=10+i-65;
    else if((i>=97) && (i<=102))
        num=10+i-97;
    else{
        return -1;
    }

    return num;
    
}

int dec(char hex[]){ 
    char c0 = hex[1];
    char c1 = hex[0];
    int n0 = hex_to_int(c0);
    int n1 = hex_to_int(c1);
    return (n0 + n1*16);
    
    
}

int main()
{
    char text[] = "464c41477b32653135356238376435383234653835656634313039346165633761383364637d";
    char out[2];
    int l = sizeof(text);
    for (int i = 0; i+1 < l; i+=2){
        out[0]=text[i];
        out[1]=text[i+1];
        printf("%c",dec(out));
    }
    
    return 0;
}
