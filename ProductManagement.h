//1.create and save: just input and save to file ID and File barcode
//2. display all data:
//  -we need to write into file name(store ID) different from file data
//  -Read ID first from file name, then file data catch Id to read on cmd
//3.Display by Id: we have void display data by ID. when we input data
//4.Update by ID:
//  -input ID to display date exist in file and the program ask a old barcode to remove file barcode
//  -then we need to input a new barcode to create a new file barcode
//  -after that we have to input new data to write into file barcode and file ID(overwrite old date and store new data)
//5.Delete by ID
//  -input ID to display date exist in file and the program ask a  barcode
//  -program after input ID and Barcode that have remove file Barcode and file ID
//  - and file name catch ID to remove ID in file name
//6.search for a product
//  -read ID that inputed, display the right data
//  -if change barcode when update, please input a new barcode that have changed
//  -processing delete do as update. if barcode deleted , thre is no that barcode.
//File: file name(store only product ID),Fime ID(store data product)and file Barcode(store data product)
#include<fstream>
fstream f1;
string p;
string ID;
string BarCode;

struct Product{
    int counts;
    float price;

    string brand_name;
    string name_pro;
    string manufactuerd_date;
    string exp_date;
    string country;
    string category;
};


Product Create_product(){
    Product pro;

        cout<<"\t\t>>> Name's product: ";          cin>>pro.name_pro;
        cout<<"\t\t>>> Brand Name of Product : ";  cin>>pro.brand_name;
        cout<<"\t\t>>> Category : ";                cin>>pro.category;
        cout<<"\t\t>>> Made in(Country): ";        cin>>pro.country;
        cout<<"\t\t>>>Manufactured Date: ";        cin>>pro.manufactuerd_date;
        cout<<"\t\t>>> Expiry Date: ";             cin>>pro.exp_date;
        cout<<"\t\t>>> Counts: ";                    cin>>pro.counts;
        cout<<"\t\t>>> Price per product($) :";          cin>>pro.price;
        return pro;
}
void save_product(Product pro){
    f1.open(ID+"pro.txt",ios::out);

    f1<<"ID: "<<ID<<"\n";
    f1<<"Bar Code: "<<BarCode<<"\n";
    f1<<"Brand name: "<<pro.brand_name<<"\n";
    f1<<"Name Product: "<<pro.name_pro<<"\n";
    f1<<"Category : "<<pro.category<<"\n";
    f1<<"Made in: "<<pro.country<<"\n";
    f1<<"Manufactured Date: "<<pro.manufactuerd_date<<"\n";
    f1<<"Expiry Date: "<<pro.exp_date<<"\n";
    f1<<"Counts: "<<pro.counts<<"\n";
    f1<<"Price per product($): "<<pro.price<<"\n";

    f1.close();
}
void save_BarCode(Product pro){
    f1.open(BarCode+"proBarCode.txt",ios::out);

    f1<<"ID: "<<ID<<"\n";
    f1<<"BarCode: "<<BarCode<<"\n";
    f1<<"Brand name: "<<pro.brand_name<<"\n";
    f1<<"Name Product: "<<pro.name_pro<<"\n";
    f1<<"Category : "<<pro.category<<"\n";
    f1<<"Made in: "<<pro.country<<"\n";
    f1<<"Manufactured Date: "<<pro.manufactuerd_date<<"\n";
    f1<<"Expiry Date: "<<pro.exp_date<<"\n";
    f1<<"Counts: "<<pro.counts<<"\n";
    f1<<"Price per product($): "<<pro.price<<"\n";

    f1.close();
}
void dispaly_product_by_BarCode( Product pro){//read from txt file
        f1.open(BarCode+"proBarCode.txt",ios::in);
        int i=0;
        string line;
        while(!f1.eof()){
                getline(f1,line);
            cout<<"\n\t\t"<<line;
            i++;

        }
        f1.close();
        cout<<"-------------------------------------------------------------"<<endl;

}
void delete_pro_File_barcode(){
    char c[BarCode.length()+30];
    strcpy(c,(BarCode+"proBarCode.txt").c_str());

    if(remove(c)==0){
        cout<<"\t\t==> BarCode is removed successfully!!!"<<endl;
    }else cout<<"\t\t Error!!!"<<endl;
}



void dispaly_product_byID( Product pro){//read from txt file
        f1.open(ID+"pro.txt",ios::in);
        int i=0;
        string line;
        while(!f1.eof()){
                getline(f1,line);
            cout<<"\n\t\t"<<line;
            i++;

        }
        f1.close();
        cout<<"-------------------------------------------------------------"<<endl;


}
void Display_all_data_product(){
    fstream f2;
    cout<<"\t=========================================================="<<endl;
    int z=0;
    f1.open("File_Nameproduct.txt",ios::in);
    string line;
    getline(f1,line);
    cout<<line;
    while(!f1.eof()){
        z=1;
        getline(f1,line);
        f2.open(line+"pro.txt",ios::in);
         string text;
        while(!f2.eof()){
            getline(f2,text);
            cout<<"\t\t"<<text<<endl;
        }
        f2.close();
    }
    f1.close();
    cout<<"\t=========================================================="<<endl<<endl;
    if(z==0) cout<<"\t\t==>There are no data"<<endl;


}
void Update_product(Product pro){

//string p;
        cout<<"\n\t\t>>>Do you want Update Information or not."<<endl;
        cout<<"\t\t\t1. Update."<<endl;
        cout<<"\t\t\tOther don't Update."<<endl;
        cout<<"\t\t==>Enter your choose: ";    cin>>p;

        cout<<"\t-------------------------------------------------------------"<<endl;


        if(p=="1"){
            cout<<"\t\t>>>Please,Enter a old Barcode!: "; cin>>BarCode;//chatch barcode
            delete_pro_File_barcode();//to delete old file
            //if the program change barcode
            cout<<"\t\t>>>A new  BarCode: ";  cin>>BarCode;

            pro=Create_product();
            save_BarCode(pro);
            save_product(pro);


            cout<<"\t\t\t==>This product is Updated."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }else{
            cout<<"\t\tThat inform didn't Update "<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }
}
void store_file_name_product(Product pro){
    f1.open("File_Nameproduct.txt",ios::app);
    f1<<endl<<ID;
    f1.close();
}
void delete_pro_File(){
    char c[ID.length()+30];
    strcpy(c,(ID+"pro.txt").c_str());

    if(remove(c)==0){
        cout<<"\t\t==> Delete successfully!!!"<<endl;
    }else cout<<"\t\t Error!!!"<<endl;
}
void remove_line_in_File_pro(){///remove a line from file
    fstream f1;
    string line;
    int s=0;
    f1.open("File_Nameproduct.txt", ios::in);
    while(!f1.eof()){
        getline(f1, line);
        s++;
    }
    f1.close();
    s=s-1;
    string str[s];
    f1.open("File_Nameproduct.txt", ios::in);
    getline(f1,line);//skip 1st line
    for(int i=0;i<s;i++){
        getline(f1,line);
        str[i]=line;
    }
    f1.close();

    f1.open("File_Nameproduct.txt", ios::out);
    for(int i=0;i<s;i++){///overwrite the file excluding the Deleted ID
        if(str[i]!=ID) f1<<endl<<str[i];
    }
    f1.close();
}

