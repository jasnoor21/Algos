#include<stdio.h>
int arr[6][6];

int max(int a, int b){
    if(a<=b)return b;
    return a;
}
int minPalindrome(char str[]){
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            if(str[i-1]==str[5-j])arr[i][j]=1+ arr[i-1][j-1];
            else{arr[i][j]=max(arr[i-1][j], arr[i][j-1]);}
        }
    }
    return (5-arr[5][5]);


}

int main(){
char str[5];
scanf("%s",str);

for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        arr[i][j]=0;
    }
}
int n=minPalindrome(str);
printf("%d",n);

return 0;
}
