using namespace std;

 void checkPrimary(int num){
    bool primary= true;
    if(num==1){
        cout<<"1 is primary number.";
    }else {
        for(int i=2 ; i<=(num/2);i++){//i=disvion
            if((num%i)==0){
                primary=false;
                break;

            }
        }
        if(primary){
           cout<<"\t\t==> "<<num<<" is primary number.";
        }else{
            cout<<"\t\t==> "<<num<<" is not primary number.";
        }

    }
 }
 void checkPerfect(int num){
     bool perfect= true;
     int sum=0;
     if(sum==num) perfect=true;

     for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;

        }

     }
     if(perfect){
            cout<<"\t\t==> "<<num<<" is a perfect number."<<endl;
    }else{
            cout<<"\t\t==> "<<num<<" is not a perfect number"<<endl;
    }
 }
void checkPolindrome(int num){
    int r,sum=0;


    int n;
    num=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;

    }
    if(sum==num){
        cout<<"\t\t==>It is a palindrome number"<<endl;
    }else{
        cout<<"\t\t==>It is not a palindrome number"<<endl;
    }
}


