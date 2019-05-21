int main(){
    int number,total,original;
    printf("輸入人數:");
    scanf("%d",&number);
    original=number*300;
    if(original<3000){
        total=original;
    }
    if(original>=3000){
        total=original*0.8;
    }
    printf("total: %d\n",total);
    return 0;
}