//book have processing as product but some option aren't complex
//File: File name(Store name book)and file ID (store data book)

#include<fstream>
fstream f;
string bookID;
string m;
struct Book{
    string bookID;
    string book_title;
    string bookISBN;
    string author_name;
    int public_year;
    float price;
};
Book Create_book(){
    Book b;

        cout<<"\t\t>>>Enter the Book title: ";     getline(cin,b.book_title);      getline(cin,b.book_title);
        cout<<"\t\t>>>Enter the BookISBN: ";       cin>>b.bookISBN;
        cout<<"\t\t>>>Enter the Author name: ";    cin>>b.author_name;
        cout<<"\t\t>>>Enter the Published year: "; cin>>b.public_year;
        cout<<"\t\t>>>Enter the price($): ";       cin>>b.price;
        return b;

}
void save_Book(Book b){
    f.open(bookID+"book.txt",ios::out);
    f<<"ID: "<<bookID<<"\n";
    f<<"Book Title: "<<b.book_title<<"\n";
    f<<"Book ISBN: "<<b.bookISBN<<"\n";
    f<<"Author: "<<b.author_name<<"\n";
    f<<"Public Year: "<<b.public_year<<"\n";
    f<<"Price($): "<<b.price<<"\n";
    f.close();
}
void display_Book_by_ID(Book b){
    int i=0;
    string line;
    f.open(bookID+"book.txt",ios::in);
        while(!f.eof()){
            getline(f,line);
            cout<<"\n\t\t"<<line;
            i++;
        }
        f.close();
        cout<<"-------------------------------------------------------------"<<endl;

}
void Display_all_data(){
    fstream f2;
    int z=0;
    f.open("File_Namebook.txt",ios::in);
    string line;
    getline(f,line);
    cout<<line;
    while(!f.eof()){
        z=1;
        getline(f,line);
        f2.open(line+"book.txt",ios::in);
         string text;
        while(!f2.eof()){
            getline(f2,text);
            cout<<"\t\t"<<text<<endl;
        }
        f2.close();
    }
    f.close();
    cout<<"-------------------------------------------------------------"<<endl;
    if(z==0) cout<<"\t\t==>There are no data"<<endl;


}

void store_file_name_book(Book b){
    f.open("File_Namebook.txt",ios::app);
    f<<endl<<bookID;
    f.close();
}
void update_book(Book b){

     cout<<"\n\t\t>>>Do you want Update Information or not."<<endl;
        cout<<"\t\t\t1. Update."<<endl;
        cout<<"\t\t\tOther don't Update."<<endl;
        cout<<"\t\t==>Enter your choose: ";    cin>>m;
        system("cls");
        cout<<"\t-------------------------------------------------------------"<<endl;

        if(m=="1"){

        cout<<"\n\t\t\t==>This book is updated."<<endl;
        cout<<"\t-------------------------------------------------------------"<<endl;
    }else{
        cout<<"\n\t\tThat inform don't saved "<<endl;
        cout<<"\t-------------------------------------------------------------"<<endl;
    }

}
void delete_File(){
    char c[bookID.length()+30];
    strcpy(c,(bookID+"book.txt").c_str());

    if(remove(c)==0){
        cout<<"\t\t==> Delete successfully!!!"<<endl;
    }else cout<<"\t\t Error!!!"<<endl;
}
void remove_line_in_File_book(){///remove a line from file
    fstream f1;
    string line;
    int s=0;
    f1.open("File_Namebook.txt", ios::in);
    while(!f1.eof()){
        getline(f1, line);
        s++;
    }
    f1.close();
    s=s-1;
    string str[s];
    f1.open("File_Namebook.txt", ios::in);
    getline(f1,line);//skip 1st line
    for(int i=0;i<s;i++){
        getline(f1,line);
        str[i]=line;
    }
    f1.close();

    f1.open("File_Namebook.txt", ios::out);
    for(int i=0;i<s;i++){///overwrite the file excluding the Deleted ID
        if(str[i]!=bookID) f1<<endl<<str[i];
    }
    f1.close();
}




