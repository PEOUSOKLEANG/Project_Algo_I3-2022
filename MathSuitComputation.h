

int summation1ton(int n){//summation 1 to n
    if(n==1){
        return 1;
    }else {
        return n+summation1ton(n-1);
    }

}
int summation2n1(int n){//summation of 2n-1 to n*n-1 number
    if(n==1){
        return 1;
    }else{
        return (2*n-1)+summation2n1(n-1);//2n-1 if n=3==> 1+3+5
    }

}
int sumsqare(int n){
    if(n==1){
        return 1;
    }else{
        return (n*n)+sumsqare(n-1);
    }
}
void sumPrime(){
    int n, sum=0, j, i, prime;
    cout<<"\t\t>>>Enter your N primary number: ";  cin>>n;
    cout<<"\t\t==>Summation from 1 to "<<n<<" : ";
    cout<<"1 + ";
    for(i=2; i<=n; i++){
        prime =1;
        for(j=2; j<= i/2; j++){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime==1){

            cout<<i<<" + ";
            sum = sum + i;

        }
    }
    cout<<"\b\b";
    cout<<" = "<<sum+1;

}

