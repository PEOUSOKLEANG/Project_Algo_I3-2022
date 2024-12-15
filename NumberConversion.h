

struct Element{
    int data;
    Element * next;
};
struct Stack{
    int n;
    Element *top;
};
Stack * CreateEmptyStack(){
    Stack *s;
    s = new Stack;
    s->n=0;
    s->top=NULL;

    return s;
}
void push(Stack *s, int newdata){
    Element*e;
    e=new Element;
    e->data = newdata;
    e->next = NULL;
    if(s->n == 0 ){
        s->top=e;
        s->top->next = NULL;
        s->n = s->n + 1;
    }else {
        e->next = s->top;
        s->top =e;
        s->n = s->n+1;

    }
}
void pop(Stack *s){
    if(s->n!=0){
        Element *e;
        e=s->top;
        s->top = s->top->next;
        delete e;
        s->n = s->n-1;
    }

}
void displayStack(Stack *s){
    Element *t;
    t = s->top;
    while(t!=NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
}
void Base10To2 (Stack *s){//base 10 to base 2
    int num,r;//r stand for remainder
    cout<<"\n\tPlease input decimal number to convert to binary number : ";
    cin>>num;
    cout<<"\t\t==>The binary number of "<<num<<" is: ";
    while(num!=0){
        r = num%2;
        push(s,r);
        num = num/2;
    }
}
void Base10TO8 (Stack *s){//base 10 to base 8
    int num,r;//r stand for remainder
    cout<<"\n\tPlease input decimal number to convert to octal number: ";
    cin>>num;
    cout<<"\t\t==>The octal number of "<<num<<" is: ";
    while(num!=0){
        r = num%8;
        push(s,r);
        num = num/8;
    }
}

void Base2TO10 (Stack *s){//base 2 to base 10
    int num,r;//r stand for remainder
    int dec=0;
    int i=0;
    cout<<"\n\tPlease input binary number to convert to decimal number : ";
    cin>>num;
    cout<<"\t\t==>The decimal number of "<<num<<" is: ";
    while(num!=0){
        r = num%10;
        num = num/10;
        dec=dec+r * pow(2,i);
        ++i;
    }

    push(s,dec);
}
void Base8TO10 (Stack *s){//base 8 to base 10
    int num,r;//r stand for remainder
    int dec=0;
    int i=0;
    cout<<"\n\tPlease input octal number to convert to decimal number : ";
    cin>>num;
    cout<<"\t\t==>The decimal number of  "<<num<<" is: ";
    while(num!=0){
        r = num%10;
        num = num/10;
        dec=dec+r * pow(8,i);
        ++i;
    }
    push(s,dec);
}
void base10to16(){
string dec= "0123456789ABCDEF";
    int num ;
    cout<<"\n\tPlease input decimal number to convert to hexadecimal number : "; cin>>num;
    int i =num;
    string rem;

    while(num > 0){
        rem = dec[num % 16] + rem;
        num /= 16;
    }
    cout<<"\t\t==>The hexadecimal number of  "<<i<<" is: "<<rem<<endl;

}
