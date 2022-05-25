//  bank whith algorithm
//  Created by Mac on 5/16/22.
#include <iostream>
#include <string>
#include <cstdlib>   // for what??
#include <ctime>
#include <cmath>
using namespace std;
int counter = 0;
int counterplus = 0;
int x=0;
string elements;
char s = '0';

void SMZ_BANK_SHAP()///////////////////////////////////////////////////////////////////////     SMZ BANK SHAP
{
    cout << "\n";
    cout << "\t\t\t\t      ********************     *****                  *****     ******************       \n";
    cout << "\t\t\t\t      ********************     ******                ******     ******************       \n";
    cout << "\t\t\t\t      ***                      *******              *******                   ***        \n";
    cout << "\t\t\t\t      ***                      ********            ********                  ***         \n";
    cout << "\t\t\t\t      ***                      ***   ***          ***   ***                 ***          \n";
    cout << "\t\t\t\t      ***                      ***    ***        ***    ***                ***           \n";
    cout << "\t\t\t\t      ***                      ***     ***      ***     ***               ***            \n";
    cout << "\t\t\t\t      ***                      ***      ***    ***      ***              ***             \n";
    cout << "\t\t\t\t      ********************     ***       ***  ***       ***             ***              \n";
    cout << "\t\t\t\t      ********************     ***        ******        ***            ***               \n";
    cout << "\t\t\t\t                       ***     ***                      ***           ***                \n";
    cout << "\t\t\t\t                       ***     ***                      ***          ***                 \n";
    cout << "\t\t\t\t                       ***     ***                      ***         ***                  \n";
    cout << "\t\t\t\t                       ***     ***                      ***        ***                   \n";
    cout << "\t\t\t\t                       ***     ***                      ***       ***                    \n";
    cout << "\t\t\t\t                       ***     ***                      ***      ***                     \n";
    cout << "\t\t\t\t      ********************     ***                      ***     ******************       \n";
    cout << "\t\t\t\t      ********************     ***                      ***     ******************       \n";
    cout << "\t\t\t\t                                                                                         \n";
    cout << "\t\t\t\t                                                                                         \n";
    cout << "\t\t\t\t           ******             ******        *****        ***     ***        ***          \n";
    cout << "\t\t\t\t           ***  ****         ***  ***       *** **       ***     ***      ***            \n";
    cout << "\t\t\t\t           ***   ****       ***    ***      ***  **      ***     ***    ***              \n";
    cout << "\t\t\t\t           ***  ****       ***      ***     ***   **     ***     ***  ***                \n";
    cout << "\t\t\t\t           *******         ************     ***    **    ***     ******                  \n";
    cout << "\t\t\t\t           ***   ****      ************     ***     **   ***     ***  ***                \n";
    cout << "\t\t\t\t           ***    ****     ***      ***     ***      **  ***     ***    ***              \n";
    cout << "\t\t\t\t           ***   ****      ***      ***     ***       ** ***     ***      ***            \n";
    cout << "\t\t\t\t           *******         ***      ***     ***        *****     ***        ***          \n";
}

////////////////////////////////////////////////////////////////////////////////       class customer
class customer
{
protected://///////////////////////////////////////////////////////////////////    data of class customer
    string name;
    int customer_id;
    int phone;
    string adress;
    string mail;
    
public:///////////////////////////////////////////////////////////////////////      operations of class customer
    customer()
    {
        customer_id = 0;
    }
    void set_coustomer_name();
    void set_coustomer_id(int x);
    void set_coustomer_phone();
    void set_coustomer_address();
    void set_coustomer_mail();
    string get_name();
    int get_id();
    int get_phone();
    string get_adress();
    string get_mail();
};

void customer::set_coustomer_name()
{
    
n:    cout << "\n\n\t\t\t\t\t\t\tENTER YOUR NAME ( NAME MUST BE AT LEAST 3 LETTERS ) \t:";
    cin >> name;
    while (cin.fail() || name.length() < 3)
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT ! \n";
        goto n;
    }
}
void customer::set_coustomer_phone()
{
    
p:    cout << "\n\n\t\t\t\t\t\t\tENTER YOUR PHONE NUMBER \t\t\t\t:";
    cin >> phone;
    while (cin.fail())
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR ! \n";
        goto p;
    }
}
void customer::set_coustomer_address()
{
a:    cout << "\n\n\t\t\t\t\t\t\tENTER YOUR ADDRESS      \t\t\t\t:";
    cin >> adress;
    while (cin.fail())
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT ! \n";
        goto a;
    }
}
void customer::set_coustomer_mail()
{
e:    cout << "\n\n\t\t\t\t\t\t\tENTER E_MAIL            \t\t\t\t:";
    cin >> mail;
    while (cin.fail())
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT ! \n";
        goto e;
    }
}
void customer::set_coustomer_id(int x)
{
    customer_id = x;
}
string customer::get_name()
{
    return name;
}
int customer::get_phone()
{
    return phone;
}
string customer::get_adress()
{
    return adress;
}
int customer::get_id()
{
    return customer_id;
}
string customer::get_mail()
{
    return mail;
}

//////////////////////////////////////////////////////////////// class account
class account :public customer {
protected://////////////////////////////////////////////////////////// data of class account
    int m1, y1, m2, y2;
    float add, sub, balance2, balance3;
    string password;
    float balance = 0;
    string ch_balance;
    int interest_rate;
public:////////////////////////////////////////////////////////////operations of class account
    account()
    {
        balance = 0;
    }
    float y;
    int date;
    void set_password();
    void get_interest_rate();
    float get_float();
    void set_balance();
    string get_pass();
    float get_balance();
    void set_date();
    int get_date();
    int get_date1();
    void set_date2();
    int get_date2();
    void deposit();
    void withdraw();
    void balance_enquiry();
    void delet();
   // void autofill_database(string nam,string ema,string pass,float ba,int phone,string add,int m,int y);
    
};
//void account::autofill_database(string nam,string ema,string pass,float ba,int phon,string add,int m,int y)
//{
//    password=pass;
//    name=nam;
//    balance=ba;
//    phone = phon;
//    m1=m;
//    y1=y;
//    adress=add;
//    mail=ema;
//    customer_id=get_id();
//    ++counter;
//}
void account::delet()
{
    password = "0";
    customer_id = 0;
}
void account::get_interest_rate()   // fayda
{
    for (int i = 0; i < date; i++)
    {
        y = (((balance * 5) / 100) * i);
    }
    balance -= y;
}
float account::get_float()  // get for balance
{
    return y;
}
void account::set_password()
{
pa:    cout << "\n\n\t\t\t\t\t\t\tENTER YOUR PASSWORD ( PASSWORD MUST BE 4 DIGITS )       :";
    cin >> password;
    while (cin.fail() || password.length() != 4)
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
        goto pa;
    }
}
void account::set_balance()
{
    int arr[15];
ba:    cout << "\n\n\t\t\t\t\t\t\tPLEASE ENTER BALANCE    \t\t\t\t:";
enter_balance: cin >> ch_balance;
    for (int i = 0; i < ch_balance.length(); i++)
    {
        if (ch_balance[i] - 48 > 9 || ch_balance[i] - 48 < 0)
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
            cout << "\n\n\t\t\t\t\t\t\tPLEASE ENTER BALANCE    \t\t\t\t:";
            goto enter_balance;
        }
        else
            arr[i] = ch_balance[i] - 48;
    }
    int z = 0;
    for (int x = ch_balance.size() - 1; x >= 0; x--)
    {
        balance += arr[x] * pow(10, z);
        z++;
    }
    
}
string account::get_pass()
{
    return password;
}
float account::get_balance()
{
    return balance;
}
void account::set_date()
{
ss:    cout << "\n\n\t\t\t\t\t\t\tPLEASE ENTER CURRENT DATE IN THE FORM (M/Y)     \t: ";
    cin >> m1 >> s >> y1;
    if (s != '/' || s == '&')
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
        s = '0';
        goto ss;
    }
}
int account::get_date()
{
    return m1;
}
int account::get_date1()
{
    return y1;
}
void account::set_date2()
{
d2:    cout << "\n\n\t\t\t\t\t\t\tPLEASE ENTER CURRENT DATE IN THE FORM (M/Y)     \t:";
    cin >> m2 >> s >> y2;
    if (s != '/' || s == '&')
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
        s = '0';
        goto d2;
    }
    while (cin.fail() || m2 > 12 || m2 < 1)
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
        goto d2;
    }
    date = (m2 - m1) + (y2 - y1) * 12;
}
int  account::get_date2()
{
    return date;
}
void account::deposit()
{
ad:    cout << "\n\n\t\t\t\t\t\t\tENTER THE AMOUNT TO BE DEPOSITED                :";
    cin >> add;
    while (cin.fail() || add < 0)
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
        goto ad;
    }
    balance2 = balance + add;
    cout << "\n\n\t\t\t\t\t\t\t    >>>>>> REPORT ABOUT TRANSACTIONS <<<<<< " << endl << "\n\n\t\t\t\t\t\t\t\tBALANCE BEFORE DEPOSITING \t :\t" << balance << endl << "\n\n\t\t\t\t\t\t\t\tTHE ADDED AMOUNT\t\t :\t" << add << endl << "\n\n\t\t\t\t\t\t\t\tYOUR CURRENT BALANCE\t\t :\t" << balance2 << "\n\n\t\t\t\t\t\t\t";
    balance = balance2;
}
void account::withdraw()
{
s:    cout << "\n\n\t\t\t\t\t\t\tENTER THE AMOUNT TO BE WITHDRAWED               :";
    cin >> sub;
    while (cin.fail() || sub < 0)
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
        goto s;
    }
    if (sub > balance)
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\tSorry, You Cannot Withdraw More Than Your Balance ! " << endl;
        goto s;
    }
    balance3 = balance - sub;
    cout << "\n\n\t\t\t\t\t\t\t    >>>>>> REPORT ABOUT TRANSACTIONS <<<<<< " << endl << "\n\n\t\t\t\t\t\t\t\tBALANCE BEFORE WITHDRAW \t :\t" << balance << endl << "\n\n\t\t\t\t\t\t\t\tTHE SUBTRACT BALANCE \t\t :\t" << sub << endl << "\n\n\t\t\t\t\t\t\t\tYOUR CURRENT BALANCE\t\t :\t" << balance3 << "\n\n\t\t\t\t\t\t\t";
    balance = balance3;
}
void account::balance_enquiry()
{
    cout << "\n\n\t\t\t\t\t\t\t\t    Your Balance is \t\t:\t" << get_balance() << "\n\n\t\t\t\t\t\t\t";
}

////////////////////////////////////////////////////////////////// class saving account
class saving_account :public account
{
public:
    void interest_rate_cust();
};
void saving_account::interest_rate_cust()
{
    float rate = 0;
    for (int i = 0; i < date; i++)
    {
        if (balance < 100)
            break;
        else if (balance >= 100)
            rate = (((balance * 15) / 100) * i);
    }
    balance += rate;
}
/// ///////////////////////////////////////////////////////////////// function class
saving_account s_acc[100];

void sort(int size,saving_account arr[])
{
    // bubble
    for(int i=0;i<size-1;i++)
    {
        int x=0;
        for(int t=size-1;t>i;t--)
        {
            if(arr[t].get_balance()<arr[t-1].get_balance())
            {
                swap(arr[t],arr[t-1]);
                ++x;
            }
        }
        if(x==0)
            return;
        else x=0;
    }
}
void print(int size,saving_account arr[])
{
    for(int i=0;i<size;i++)
    cout<<arr[i].get_balance()<<" ";
    cout<<endl;
}
int binary_search(saving_account arr[],int first,int last,int element )
{
    if(first<=last)//this condition is the condition of stop recursion if element not exist.
    {
        int new_index_for_search=((last-first)/2)+first;
        if(element==arr[new_index_for_search].get_balance())
            return new_index_for_search;
        else if(element>arr[new_index_for_search].get_balance())
            return binary_search(arr, new_index_for_search+1, last,element);
        else
            return binary_search( arr, first,new_index_for_search-1, element );
    }
    else
        return -1;
}
//---------------------- for string--------------------------------




void sort_string(int size,saving_account arr[])
{
    // bubble
    for(int i=0;i<size-1;i++)
    {
        int x=0;
        for(int t=size-1;t>i;t--)
        {
            if(arr[t].get_name()<arr[t-1].get_name())
            {
                swap(arr[t],arr[t-1]);
                ++x;
            }
        }
        if(x==0)
            return;
        else x=0;
    }
}
void print_string(int size,saving_account arr[])
{
    for(int i=0;i<size;i++)
    cout<<arr[i].get_name()<<" "<<arr[i].get_balance()<<"\n";
    cout<<endl;
}
int binary_search(saving_account arr[],int first,int last,string element )
{
    if(first<=last)//this condition is the condition of stop recursion if element not exist.
    {
        int new_index_for_search=((last-first)/2)+first;
        if(element==arr[new_index_for_search].get_name())
            return new_index_for_search;
        else if(element>arr[new_index_for_search].get_name())
            return binary_search(arr, new_index_for_search+1, last,element);
        else
            return binary_search( arr, first,new_index_for_search-1, element );
    }
    else
        return -1;
}





//-------------------------------------------------------
//////////////////////////////////////////////////////////////////// system
void system1() {
    system("cls");
    //SMZ_BANK_SHAP();
    cout << "\n\n\t\t\t\t\t\t\t    >>>>> WELCOME TO OUR BANK <<<<<\n\n\t\t\t\t\t\t\t\t";
    system("pause");
Main:
    srand(time(NULL));
    int pass_ck_s = -2;
    int u_input;
    string p_input;
    int main_choice = 0, account_type_choice = 0;
    bool Error = false;
    
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t    PLEASE CHOOSE THE OPERATION YOU WANT :\n"
    << "\n\n\t\t\t\t\t\t\t\t1. CREAT NEW ACCOUNT .\n"
    << "\n\n\t\t\t\t\t\t\t\t2. SIGN IN .\n"
    << "\n\n\t\t\t\t\t\t\t\t4. sort .\n"
    << "\n\n\t\t\t\t\t\t\t\t5. search .\n"
    << "\n\n\t\t\t\t\t\t\t\t3. EXIT .\n";
in:  cout << "\n\n\t\t\t\t\t\t\t\t\tYOUR CHOICE IS  :  ";
    cin >> main_choice;
    while (cin.fail() || main_choice < 1 || main_choice > 5)
    {
        cin.clear();
        
        cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
        goto in;
    }
    switch (main_choice)
    {
            
        case 1:///////////////////////////////////////////////////// creat new account
            
            
            system("cls");
            cout << "\n\n\t\t\t\t\t\t\t\t  >>>> CREATE NEW ACCOUNT<<<<\n";
            
            
            ///////////////////////////////////////////////// SAVING ACCOUNT
            system("cls");
            for (int i = 0; i <= counter; i++)
        {
            if (s_acc[counter].get_pass() == "0")
            {
                counter = i;
            }
        }
            s_acc[counter].set_coustomer_name();
            s_acc[counter].set_coustomer_phone();
            s_acc[counter].set_coustomer_address();
            s_acc[counter].set_coustomer_mail();
            s_acc[counter].set_password();
            s_acc[counter].set_balance();
        d3: s_acc[counter].set_date();
            s_acc[counter].get_date();
            s_acc[counter].get_date1();
            while (cin.fail() || s_acc[counter].get_date() > 12 || s_acc[counter].get_date() < 1)
            {
                cin.clear();
                
                cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
                goto d3;
            }
            
        again_rand_s:
            s_acc[counter].set_coustomer_id(rand() % (99999 - 10000 + 1) + 10000);
            for (int i = 0; i < counter; i++)
        {
            if (s_acc[i].get_id() == s_acc[counter].get_id())
                goto again_rand_s;
        }
            cout << "\n\n\t\t\t\t\t\t\t\t\tYOUR ACCOUNT ID IS  \t\t:  " << s_acc[counter].get_id() << "\n\n\t\t\t\t\t\t\t";
            system("pause");
            counterplus++;
            counter = counterplus;
            system("cls");
            goto Main;
            break;
            
            ////////////////////////////////////////////////////////////////////// SIGN IN
        case 2:
        {
        again_sign_in:
            int id = -1;
            int error = 0;
            u_input = 0;
            p_input = "0";
            pass_ck_s = -2;
            system("cls");
            cout << "\n\n\t\t\t\t\t\t\t\t     >>>> SIGN IN<<<<\n";
            cout << "\n\n\t\t\t\t\t\t\t\tEnter Your ID\t:    ";
            cin >> u_input;
            while (cin.fail() || u_input == 0)
            {
                cin.clear();
                
                cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
                system("pause");
                system("cls");
                goto again_sign_in;
            }
            cout << "\n\n\t\t\t\t\t\t\t\tEnter Your Password  :    ";
            cin >> p_input;
            while (cin.fail() || p_input == "0")
            {
                cin.clear();
                
                cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT Woring password " << endl;
                system("pause");
                system("cls");
                goto again_sign_in;
            }
            for (int i = 0; i <= counter; i++)
            {
                if (s_acc[i].get_id() == u_input)
                {
                    id = i;
                    
                }
                
                
                ///////////////check sign in
                if (s_acc[i].get_pass() == p_input)
                {
                    pass_ck_s = i;
                    ++error;
                }
                
            }
            if (id == pass_ck_s)
            {
                s_acc[id].set_date2();
                s_acc[id].get_interest_rate();
                s_acc[id].interest_rate_cust();
            saving_acc:
                system("cls");
                cout << "\n\n\t\t\t\t\t\t\tPLEASE CHOOSE THE OPERATION YOU WANT (SAVING ACCOUNT) :\n"
                << "\n\n\t\t\t\t\t\t\t\t1. Deposit Operation .\n"
                << "\n\n\t\t\t\t\t\t\t\t2. Withdraw Operation .\n"
                << "\n\n\t\t\t\t\t\t\t\t3. Balance Enqiry Operation .\n"
                << "\n\n\t\t\t\t\t\t\t\t4. Edit.\n"
                << "\n\n\t\t\t\t\t\t\t\t5. Delete .\n"
                << "\n\n\t\t\t\t\t\t\t\t6. show Details.\n"
                << "\n\n\t\t\t\t\t\t\t\t7. Exit .\n";
            in3:cout << "\n\n\t\t\t\t\t\t\t\t\tYOUR CHOICE IS : ";
                cin >> account_type_choice;
                while (cin.fail() || account_type_choice < 1 || account_type_choice > 8)
                {
                    cin.clear();
                    
                    cout << "\n\n\t\t\t\t\t\t\t\t\tERROR INPUT !" << endl;
                    goto in3;
                }
                int  new_counter = id;
                switch (account_type_choice)
                {
                    case 1:
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t  >>>> DEPOSIT OPERATION <<<<<\n";
                        s_acc[id].deposit();
                        system("pause");
                        goto saving_acc;
                        break;
                    case 2:
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t  >>>> Withdraw OPERATION <<<<<\n";
                        s_acc[id].withdraw();
                        system("pause");
                        goto saving_acc;
                        break;
                    case 3:
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t  >>>> Balance Enqiry OPERATION <<<<<\n";
                        s_acc[id].balance_enquiry();
                        system("pause");
                        goto saving_acc;
                        break;
                    case 4:
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t  >>>> Edit OPERATION <<<<<\n";
                        s_acc[id].set_coustomer_name();
                        s_acc[id].set_coustomer_phone();
                        s_acc[id].set_coustomer_address();
                        s_acc[id].set_coustomer_mail();
                        s_acc[id].set_password();
                        pass_ck_s = -2;
                        id = -1;
                        cout << "\n\n\t\t\t\t\t\t\t\t\tTHE INFORMATION IS UPDATED\n\n\t\t\t\t\t\t\t";
                        system("cls");
                        goto  Main;
                        break;
                    case 5:
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t  >>>> Delete OPERATION <<<<<\n";
                        s_acc[id].delet();
                        cout << "\n\n\t\t\t\t\t\t\t\t\tYour Account Has Been Deleted  " << "\n\n\t\t\t\t\t\t\t";
                        system("pause");
                        pass_ck_s = -2;
                        id = -1;
                        goto Main;
                        break;
                    case 6:
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t  >>>>  show Details OPERATION <<<<<\n";
                        cout << "\n\n\t\t\t\t\t\t\t\t  >>>THIS IS YOUR ACCOUNT_DETAILS<<< " << endl;
                        cout << "\n\n\t\t\t\t\t\t\t\tNAME \t\t: " << s_acc[new_counter].get_name() << endl;
                        cout << "\n\n\t\t\t\t\t\t\t\tPHONE NUMBER \t: " << s_acc[new_counter].get_phone() << endl;
                        cout << "\n\n\t\t\t\t\t\t\t\tADDRESS \t: " << s_acc[new_counter].get_adress() << endl;
                        cout << "\n\n\t\t\t\t\t\t\t\tE_MAIL\t \t: " << s_acc[new_counter].get_mail() << endl;
                        cout << "\n\n\t\t\t\t\t\t\t\tBALANCE \t: " << s_acc[new_counter].get_balance() << endl;
                        cout << "\n\n\t\t\t\t\t\t\t\tPASSWORD \t: " << s_acc[new_counter].get_pass() << endl;
                        cout << "\n\n\t\t\t\t\t\t\t\tID\t \t: " << s_acc[new_counter].get_id() << "\n\n\t\t\t\t\t\t\t";
                        pass_ck_s = -2;
                        id = -1;
                        system("pause");
                        goto saving_acc;
                        break;
                    case 7:
                        goto Main;
                    default:
                        break;
                }
            }
            else
            {
                
                cout << "\n\n\t\t\t\t\t\t\t\t\tPlease Sure from your ID and Password" << endl;
                system("pause");
                goto  again_sign_in;
            }
        }
            break;
        case 4://sort
            cout<<"1-sort by name\n";
            cout<<"2-sort by balance\n";
            cin>>x;
            switch (x)
            {
                case 1:
                    sort_string(counter,s_acc);
                    print_string(counter, s_acc);
//                    cout<<"enter the element which you wanted: ";
//                    cin>>elements;
//                    x=binary_search(s_acc,0,counter,elements);
                    break;
                case 2://searche balance
                    sort(counter,s_acc);
                    print_string(counter, s_acc);
//                    int element;
//                    cout<<"enter the element which you wanted: ";
//                    cin>>element;
//                    x=binary_search(s_acc,0,counter,element);
                    break;
            }

//            sort(counter,s_acc);
//            print(counter, s_acc);
            goto Main;
            break;
            
        case 3:
            system("cls");
            SMZ_BANK_SHAP();
            cout << "\n\n\t\t\t\t\t    >>>>> I HOPE THAT YOU ARE SATISFIED ABOUT OUR BANK ,HAVE A NICE DAY <<<<< \n\n\t\t\t\t\t\t\t    ";
            break;
        case 5://search
            cout<<"1-search by name\n";
            cout<<"2-search by balance\n";
            cin>>x;
            switch (x)
            {
                case 1:
                    sort_string(counter,s_acc);
                   
                    cout<<"enter the element which you wanted: ";
                    cin>>elements;
                    x=binary_search(s_acc,0,counter,elements);
                    break;
                case 2://searche balance
                    sort(counter,s_acc);
                    int element;
                    cout<<"enter the element which you wanted: ";
                    cin>>element;
                    x=binary_search(s_acc,0,counter,element);
                    break;
            }
            if( x==-1)
                cout<<"element not xist.\n";
            else
            {
                cout<<"element is exist.\n";
                cout << "\n\n\t\t\t\t\t\t\t\t  >>>>  show Details OPERATION <<<<<\n";
                cout << "\n\n\t\t\t\t\t\t\t\t  >>>THIS IS YOUR ACCOUNT_DETAILS<<< " << endl;
                cout << "\n\n\t\t\t\t\t\t\t\tNAME \t\t: " << s_acc[x].get_name() << endl;
                cout << "\n\n\t\t\t\t\t\t\t\tPHONE NUMBER \t: " << s_acc[x].get_phone() << endl;
                cout << "\n\n\t\t\t\t\t\t\t\tADDRESS \t: " << s_acc[x].get_adress() << endl;
                cout << "\n\n\t\t\t\t\t\t\t\tE_MAIL\t \t: " << s_acc[x].get_mail() << endl;
                cout << "\n\n\t\t\t\t\t\t\t\tBALANCE \t: " << s_acc[x].get_balance() << endl;
                cout << "\n\n\t\t\t\t\t\t\t\tPASSWORD \t: " << s_acc[x].get_pass() << endl;
                cout << "\n\n\t\t\t\t\t\t\t\tID\t \t: " << s_acc[x].get_id() << "\n\n\t\t\t\t\t\t\t";
            }

            
            goto Main;
            break;
            
        default:
            break;
    }
}
/// /////////////////////////////////////////////////////////////////////////////////// main

int main()
{
//    autofill_
//    autofill_database(string nam,string ema,string pass,float ba,int phon,string add,int m,int y)
    //s_acc[counter].autofill_database("george", "ggg", "0000", 10000, 010, "fayoum", 5, 2020);
    //s_acc[counter].autofill_database("islam", "ggg", "0000", 1000, 010, "fayoum", 5, 2020);
    //s_acc[counter].autofill_database("ziad", "ggg", "0000", 50000, 010, "fayoum", 5, 2020);
    //s_acc[counter].autofill_database("ahmed", "ggg", "0000", 100000, 010, "fayoum", 5, 2020);
    //s_acc[counter].autofill_database("mohamed", "ggg", "0000", 7000, 010, "fayoum", 5, 2020);
    system1();
    return 0;
}

