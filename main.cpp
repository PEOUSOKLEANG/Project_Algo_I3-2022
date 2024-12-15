#include<iostream>
#include<cmath>
#include<string.h>
#include<iomanip>
#include<ctime>
using namespace std;
#include"MathSuitComputation.h"
#include"ProductManagement.h"
#include"BookStoreManagement.h"
#include"NumberTesting.h"
#include"NumberConversion.h"
#include"BasicMath.h"
#include"History.h"




void mainMenu(){

    cout<<"\t----------------------------------------------------------"<<endl;
    cout<<"\t\t\t\tMENU"<<endl;
    cout<<"\t__________________________________________________________"<<endl;
    cout<<"\t|\t1. Basic Math.                                    |"<<endl;
    cout<<"\t|\t2. Math suit Computation.                         |"<<endl;
    cout<<"\t|\t3. Number convertion.                             |"<<endl;
    cout<<"\t|\t4. Number Testing.                                |"<<endl;
    cout<<"\t|\t5. Book Store Management.                         |"<<endl;
    cout<<"\t|\t6. Product management.                            |"<<endl;
    cout<<"\t|\t7. See History.                                   |"<<endl;
    cout<<"\t|\t8. Exited program.                                |"<<endl;
    cout<<"\t|_________________________________________________________|"<<endl;
}
void condition_Basic_math(){

    string k;

    while(k!="0"){

        cout<<"\t=========================================================="<<endl;
        cout<<"\t\t>>> Basic Math"<<endl;
        cout<<"\t\t\t1. Summation+"<<endl;
        cout<<"\t\t\t2. Subtraction"<<endl;
        cout<<"\t\t\t3. Multiplication"<<endl;
        cout<<"\t\t\t4. Divison"<<endl;
        cout<<"\t\t<<< B for Back"<<endl;//back to main smenu
        cout<<"\t=========================================================="<<endl;
        cout<<"\tChoose the options : "; cin>>k;
        cout<<"\t----------------------"<<endl;
        if(k=="1"){//(+)
            His_Summation();
                int a,b;
            cout<<"\t\t>>>Enter the Value of a: "; cin>>a;
            cout<<"\t\t--------------------------"<<endl;
            cout<<"\t\t>>>Enter the Value of b: "; cin>>b;
            cout<<"\t\t--------------------------"<<endl;
            summation(a,b);



        }else if(k=="2"){//(-)

            His_Subtraction();
               int a,b;
            cout<<"\t\t>>>Enter the Value of a: "; cin>>a;
            cout<<"\t\t--------------------------"<<endl;
            cout<<"\t\t>>>Enter the Value of b: "; cin>>b;
            cout<<"\t\t--------------------------"<<endl;
            subtraction(a,b);


        }else if(k=="3"){//(x)
            His_Multiplication();
                float a,b;
            cout<<"\t\t>>>Enter the Value of a: "; cin>>a;
            cout<<"\t\t--------------------------"<<endl;
            cout<<"\t\t>>>Enter the Value of b: "; cin>>b;
            cout<<"\t\t--------------------------"<<endl;
            Multiplication(a,b);


        }else if(k=="4"){//(/)
            His_Division();
               float a,b;
            cout<<"\t\t>>>Enter the Value of a: "; cin>>a;
            cout<<"\t\t--------------------------"<<endl;
            cout<<"\t\t>>>Enter the Value of b: "; cin>>b;
            cout<<"\t\t--------------------------"<<endl;
            Division(a,b);


        }else if(k=="B" || k=="b"){
            system("pause");
            system("cls");
            His_Back();
            break;
        }
         else {
            cout<<"\n\t\tThe program have no this option."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }
        cout<<"\n";
        system("pause");
        system("cls");
    }

}

void condition_Number_Conversion(){
    Stack *st;
    string k;

      while(k!="0"){//base 10 to base 2

             cout<<"\n\t=========================================================="<<endl;
            cout<<"\t\t>>> Number Conversion."<<endl;
            cout<<"\t\t\t1. Base 2 to 10 ."<<endl;
            cout<<"\t\t\t2. Base 10 to 2 ."<<endl;
            cout<<"\t\t\t3. Base  8 to 10 ."<<endl;
            cout<<"\t\t\t4. Base 10 to 8 ."<<endl;
            cout<<"\t\t\t5. Base 10 to 16 ."<<endl;
            cout<<"\n\t\t<<<B for Back."<<endl;
            cout<<"\t=========================================================="<<endl;
            cout<<"\n\tChoose the options : "; cin>>k;
        if(k=="1"){//base 2 to 10
            His_10Base2();

            st=CreateEmptyStack();
            Base2TO10(st);
            displayStack(st);


        }else if(k=="2"){//base 10 to 2
            His_10Base2();

            st=CreateEmptyStack();
            Base10To2(st);
            displayStack(st);

        }else if(k=="3"){//base 8 to 10
            His_8Base10();

            st=CreateEmptyStack();
            Base8TO10(st);
            displayStack(st);

        }else if(k=="4"){//base 10 t0 8
            His_10Base8();

            st=CreateEmptyStack();
            Base10TO8(st);
            displayStack(st);

        }else if(k=="5"){//base 10 to 16

            His_10Base16();
            base10to16();
            }
        else if(k=="B" || k=="b"){
            His_Back();
            system("pause");
            system("cls");
            break;
        }
        else {
            cout<<"\n\t\tThe program have no this option."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }
        cout<<"\n";

        system("pause");
        system("cls");
    }


}
void condition_Number_Testing(){
    string k;


      while(k!="0"){
            cout<<"\t=========================================================="<<endl;
            cout<<"\t\t>>> Number testing."<<endl;
            cout<<"\t\t\t1. Check if it is a primary number."<<endl;
            cout<<"\t\t\t2. Check if it is a perfect number."<<endl;
            cout<<"\t\t\t3. Check if it is a palindrome number."<<endl;
            cout<<"\n\t\t<<<B for Back."<<endl;
            cout<<"\t=========================================================="<<endl;
            cout<<"\tChoose the options : "; cin>>k;
            cout<<"\t----------------------"<<endl;

        if(k=="1"){

            His_CheckPrimary();
            int num;
            cout<<"\n\t\t>>Enter number: "; cin>>num;
            checkPrimary(num);
        }else if(k=="2"){
            His_CheckPerfact();
            int num;
            cout<<"\n\t\t>>>Enter number: "; cin>>num;
            checkPerfect(num);
        }else if(k=="3"){
            His_CheckPalindrome();
            int num;
            cout<<"\n\t\t>>>Enter number: "; cin>>num;
            checkPolindrome(num);
        }else if(k=="B" || k=="b"){
            His_Back();
            system("pause");
            system("cls");
          break;
        }

        else {
            cout<<"\n\t\tThe program have no this option."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }
        cout<<"\n";
        system("pause");
        system("cls");
    }


}

void condition_Math_suit(){

    string k;
      while(k!="0"){
            cout<<"\t=========================================================="<<endl;
            cout<<"\t\t>>> Math Suit Computation."<<endl;
            cout<<"\t\t\t1. 1+2+3+...+n."<<endl;
            cout<<"\t\t\t2. 1+3+5+...n."<<endl;
            cout<<"\t\t\t3. 1^2+2^2+...+n^2."<<endl;
            cout<<"\t\t\t4. Sum all primary numbers in between 1 to n."<<endl;
            cout<<"\t\t<<< B for Back"<<endl;
            cout<<"\t=========================================================="<<endl;
            cout<<"\tChoose the options : "; cin>>k;
            cout<<"\t----------------------"<<endl;
        if(k=="1"){//sum1ton
            His_sum1ton();
            int n;
            cout<<"\n\t\t>>>Enter N number: "; cin>>n;
            cout<<"\t\t--------------------------"<<endl;
            cout<<"\t\t==>The summation 1+2+3..+"<<n<<" is "<<summation1ton(n)<<endl;

        }else if(k=="2"){//sum2n1
            His_sum2n1();
            int n;
            cout<<"\n\t\t>>>Enter N number: "; cin>>n;
            cout<<"\t\t--------------------------"<<endl;
            cout<<"\t\t==>The summation 1+3+5..+"<<n<<" is "<<summation2n1(n)<<endl;

        }else if(k=="3"){//sumsqare
            His_Sumsqare();
            int n;
            cout<<"\n\t\t>>>Enter N number: "; cin>>n;
            cout<<"\t\t--------------------------"<<endl;
            cout<<"\t\t==>The summation 1^2+2^2+3^2..+"<<n<<"^2 is "<<sumsqare(n)<<endl;

        }else if(k=="4"){//sumPrimary
            int n;
           His_SumPrimary();
            sumPrime();
        }else if(k=="B" || k=="b"){
            His_Back();

            system("pause");
            system("cls");
          break;
        }
        else {
            cout<<"\n\t\tThe program have no this option."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }
        cout<<"\n";
        system("pause");
        system("cls");

    }
}
void condition_BooK_store(){
    string  k;
    Book b;

      while(k!="0"){
            cout<<"\t=========================================================="<<endl;
            cout<<"\t\t>>> Book Store management."<<endl;
            cout<<"\t\t\t1. Create."<<endl;
            cout<<"\t\t\t2. Display all book."<<endl;
            cout<<"\t\t\t3. Display by ID."<<endl;
            cout<<"\t\t\t4. Update."<<endl;
            cout<<"\t\t\t5. Delete."<<endl;
            cout<<"\n\t\t<<<B for Back."<<endl;
            cout<<"\t=========================================================="<<endl;
            cout<<"\tChoose the options : "; cin>>k;
            cout<<"\t----------------------"<<endl;
        if(k=="1"){//create book


            cout<<"\t-------------------------------------------------------------";
            cout<<"\n\t\tTo fill informations for create a new Book"<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
            b=Create_book();

                cout<<"\n\t\tDo you want that imformed save or not."<<endl;
                cout<<"\t\t\t1. save."<<endl;
                cout<<"\t\t\tOther don't save."<<endl;
                cout<<"\t\t>>>Enter your choose: ";    cin>>m;
                if(m=="1"){

                    cout<<"\t\t>>>Enter ID of Book: "; cin>>bookID;//write to txt file
                    save_Book(b);

                    cout<<"\n\t\t\t==>This product is saved."<<endl;
                    cout<<"\t-------------------------------------------------------------"<<endl;
                }else{
                    cout<<"\n\t\tThat inform don't saved "<<endl;
                    cout<<"\t-------------------------------------------------------------"<<endl;
                }

            store_file_name_book(b);
            His_CreateBook();//History

        }else if(k=="2"){// display all
                Display_all_data();
                His_Dis_allBook();//history

        }else if(k=="3"){//display by ID

            cout<<"\t-------------------------------------------------------------";
            cout<<"\n\t\t\tTo display a Book by ID"<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
            cout<<"\t\t>>>Enter ID to Display Data: "; cin>>bookID;
            display_Book_by_ID(b);
            His_Dis_Book_byId();//history
        }else if(k=="4"){//update
            cout<<"\t-------------------------------------------------------------";
            cout<<"\n\t\t\tTo Update a Book by ID"<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
            cout<<"\t\t>>>Enter ID to Update Data: "; cin>>bookID;
            His_UpdateBook_byID();//history

            display_Book_by_ID(b);
            b=Create_book();

            cout<<"\n\t\t>>>Do you want Update Information or not."<<endl;
            cout<<"\t\t\t1. Update."<<endl;
            cout<<"\t\t\tOther don't Update."<<endl;
            cout<<"\t\t==>Enter your choose: ";    cin>>m;
            cout<<"\t-------------------------------------------------------------"<<endl;

            if(m=="1"){
                    save_Book(b);

                cout<<"\n\t\t\t==>This product is updated."<<endl;
                cout<<"\t-------------------------------------------------------------"<<endl;


            }else{
                cout<<"\n\t\tThis information didn't saved "<<endl;
                cout<<"\t-------------------------------------------------------------"<<endl;
            }
        }else if(k=="5"){//Delete
            cout<<"\t\t>>>Enter ID to Delete Data: "; cin>>bookID;
            His_DeleteBOOK_byID();//history

            delete_File();
            remove_line_in_File_book();

            His_DeleteBOOK_byID();//history
        }else if(k=="B" || k=="b"){
        His_Back();//history

        system("pause");
        system("cls");
          break;
        }
         else {
            cout<<"\n\t\tThe program have no this option."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }
        cout<<"\n";
        system("pause");
        system("cls");
    }

}


void condition_product(){
     string k;
    Product pro;

      while(k!="0"){
        cout<<"\t=========================================================="<<endl;
        cout<<"\t\t>>> Product Management."<<endl;
        cout<<"\t\t\t1.Create a new product."<<endl;
        cout<<"\t\t\t2.Display all product."<<endl;
        cout<<"\t\t\t3.Display a product by ID."<<endl;
        cout<<"\t\t\t4.Update a product by ID."<<endl;
        cout<<"\t\t\t5.Delete a product by ID."<<endl;
        cout<<"\t\t\t6.Search for a Product."<<endl;
        cout<<"\n\t\t<<<B for Back."<<endl;
        cout<<"\t=========================================================="<<endl;
        cout<<"\tChoose the options : "; cin>>k;
        cout<<"\t----------------------"<<endl;

        if(k=="1"){//create a new product



            cout<<"\t-------------------------------------------------------------";
            cout<<"\n\t\tTo fill informations for create a new product"<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
            pro=Create_product();

            cout<<"\n\t\t>>>Do you want that imformed save or not."<<endl;
            cout<<"\t\t\t1. save."<<endl;
            cout<<"\t\t\tOther don't save."<<endl;
            cout<<"\t\t==>Enter your choose: ";    cin>>p;

            cout<<"\t\tTo save date, please! Enter ID."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
            if(p=="1"){

                    cout<<"\t\t>>>Enter ID: ";  cin>>ID;
                    cout<<"\t\t>>>Enter BarCode: ";  cin>>BarCode;//write to txt file
                    save_product(pro);
                    store_file_name_product(pro);
                    save_BarCode(pro);
                    cout<<"\n\t\t\t==>This product is saved."<<endl;
                    cout<<"\t-------------------------------------------------------------"<<endl;


                }else{
                    cout<<"\n\t\tThat inform don't saved "<<endl;
                    cout<<"\t-------------------------------------------------------------"<<endl;
            }
            His_Product();

        }
        else if(k=="2"){//display all products
            cout<<"\t-------------------------------------------------------------";
            cout<<"\n\t\tDisplay all information products"<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
            Display_all_data_product();
            His_Dis_allPro();//history
        }
        else if(k=="3"){//display by ID


            cout<<"\t-------------------------------------------------------------";
            cout<<"\n\t\tTo display a product by ID"<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
            cout<<"\n\t\t>>>Enter ID to Display Data: "; cin>>ID;

            His_Dis_pro_byId();//history
            dispaly_product_byID(pro);

        }
        else if(k=="4"){//update by ID

            cout<<"n\t\t>>>Enter ID to update Data: "; cin>>ID;


            dispaly_product_byID(pro);

            cout<<"\t-------------------------------------------------------------";
            cout<<"\n\t\tTo fill informations for Update a product"<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;

            Update_product(pro);
            His_Update_pro_byID();//history

        }
        else if(k=="5"){//delete by ID
            cout<<"\t\t>>>Enter ID to delete Data: "; cin>>ID;
            cout<<"\t\t>>>Do you want to delete This product.\n";
            dispaly_product_byID(pro);
            cout<<"\t\t>>>Please,Enter old Barcode!: ";cin>>BarCode;//to catch barcode to delete all have contect
            cout<<"\t\t\t1. Delete."<<endl;
            cout<<"\t\t\tOther don't delete."<<endl;
            cout<<"\t\t==>Enter your choose: ";    cin>>p;
            if(p=="1"){
                delete_pro_File_barcode();
                delete_pro_File();
                remove_line_in_File_pro();
            }else{
                cout<<"\t\t==> Didn't delete.\n";
            }

            His_Delete_Pro_byID();//history


        }else if(k=="6"){// search for a product
            cout<<"\t-------------------------------------------------------------";
            cout<<"\n\t\tTo search for a product"<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
            cout<<"\n\t\t>>>Enter BarCode to Display Data: "; cin>>BarCode;
            dispaly_product_by_BarCode(pro);
            His_search_for_pro();
        }
        else if(k=="B" || k=="b"){
            His_Back();
            system("pause");
           system("cls");
          break;
        }
        else {
            cout<<"\n\t\tThe program have no this option."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }
        cout<<"\n";
        system("pause");
        system("cls");

    }
}

 main(){
    string n;
    while(n!="0"){
        mainMenu();

        cout<<"\n\t==>Enter Options: ";
        cin>>n;
        cout<<"\t-------------------"<<endl;

        if(n=="1"){
            system("pause");
            system("cls");
            His_Basic_Math();
            condition_Basic_math();
        }else if(n=="2"){
            system("pause");
            system("cls");

            His_Math_Suit();
            condition_Math_suit();
        }else if(n=="3"){
            system("pause");
            system("cls");

            His_Num_Conversion();
            condition_Number_Conversion();
        }else if(n=="4"){//number testing
            system("pause");
            system("cls");

            His_Num_Testing();
            condition_Number_Testing();
        }else if(n=="5"){//book
            system("pause");
            system("cls");

            His_Book_store();
            condition_BooK_store();
        }else if(n=="6"){// product
            system("pause");
            system("cls");

            His_Product();
            condition_product();
        }else  if(n=="7"){// show history
            system("pause");
            system("cls");

            His_HistoryF();
            Display_history();
            system("pause");
            system("cls");
        }
        else if(n=="8"){
                His_Exit_program();
            system("pause");
            system("cls");
            cout<<"\t\t>>>This program is Exited.";
            cout<<"\n\t=========================================================="<<endl;
          break;
        }
        else {
            cout<<"\n\t\tThe program have no this option."<<endl;
            cout<<"\t-------------------------------------------------------------"<<endl;
        }

    }

}
