#include<fstream>

void Display_history(){
        fstream file;
        string textline;

        file.open ("History.txt", ios::in);

        while(getline(file,textline)){

            cout<<textline<<endl;
        }
        file.close();
}

void His_Basic_Math(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);

    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Option: Basic Math\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}

//math suit


void His_Math_Suit(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Option: Math Suit\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}



void His_Num_Conversion(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Option: Number conversion\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}



void His_Num_Testing(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Option: Number Testing\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}





void His_Exit_program(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(40)<<"option: Exited Program\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}



void His_Book_store(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Option: Book Store\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}

void His_Product(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Option: Product\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}


void His_HistoryF(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Option: History \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}

void His_Back(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Back to MainMenu\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}


void His_Summation(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Summation\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}

void His_Subtraction(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Subtraction\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_Multiplication(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Multiplication\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_Division(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Division\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_sum1ton(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: 1+2+3+...+n\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_sum2n1(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: 1+3+5+...+n\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}


void His_Sumsqare(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: 1^2+2^2+...+n^2\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();

}

void His_SumPrimary(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Summation Primary\t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}

void His_2Base10(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: 2 Base to 10 \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}

void His_10Base2(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: 10 Base to 2 \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_8Base10(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: 8 Base to 10 \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_10Base8(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(40)<<"Function: 10 Base to 16 \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_10Base16(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: 10 Base to 16 \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_CheckPrimary(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Check Primary \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_CheckPerfact(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Check Perfact \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_CheckPalindrome(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Check Palindrome \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_CreateBook(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Create a Book BY ID: "<<setw(10)<<bookID<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_Dis_allBook(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Display all BOOK \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_Dis_Book_byId(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Display a book BY ID: "<<setw(10)<<bookID<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_UpdateBook_byID(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Update a book By ID:"<<setw(10)<<bookID<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_DeleteBOOK_byID(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Delete a book By ID:"<<setw(10)<<bookID<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}

void His_CreatePro(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Create a product By ID:"<<setw(10)<<ID<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_Dis_allPro(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(40)<<"Function: Display all Products \t\t\t"<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_Dis_pro_byId(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Display a Product ID: "<<setw(10)<<ID<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_Update_pro_byID(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Update a Product BY ID: "<<setw(10)<<ID<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_Delete_Pro_byID(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(30)<<"Function: Delete a Product by ID: "<<setw(10)<<ID<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}
void His_search_for_pro(){
  fstream file;
  file.open("History.txt", ios::app);
  time_t result = time(nullptr);
    file<<"--------------------------------------------------------------------------------\n";
    file<<left<<setw(40)<<"Function: Search for a product BY BarCode:"<<setw(20)<<BarCode<<asctime(localtime( &result));
    file<<"--------------------------------------------------------------------------------\n";
    file.close();
}








