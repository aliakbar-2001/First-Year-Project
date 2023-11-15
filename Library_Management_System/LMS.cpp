#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<windows.h>

using namespace std;

HANDLE console = GetStdHandle( STD_OUTPUT_HANDLE );

#define ADMIN_USER "admin"
#define ADMIN_PASSWORD "admin#121"

struct BookInfo
{
    int BookId;
    string BookName;
    string BookAuthor;
    int year;
    int month;
    int day;
};

struct AdminInfo
{
    string user;
    string password;
};

struct UserInfo
{
    string Id;
    string name;
    string password;
};

/**====== All Function used in this program ===============**/

void HomePage();
void LoginPage();
void RegistrationPage();
void AdminLoginPage();

void addBook();
void updateBook();
void listOfAllBooks();
void adminLogin();
void userDetails();
void Findbook();
void userPanel();
void adminMenu();
void userMenu();

void animatedStarting();
void charAnimated();

/**================= END ========================**/

/**=========== Animated ===================**/
void charAnimated(string text)
{
    for( int i = 0; i < text.size(); i++ )
    {
        cout << text[i];
        Sleep(50);
    }
    cout << endl << endl;
}

void animatedStarting()
{
    char x = 219;

    for (int i = 0; i < 51; i++)
    {
        cout << x;
        if (i < 10)
            Sleep(150);
        if (i >= 10 && i < 30)
            Sleep(100);
        if (i >= 30)
            Sleep(25);
    }
}
/**================= END ========================**/


/**===================== Add books ==============**/

void addBook()
{
    system("cls");
    BookInfo newBook;
    cout << endl << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|         ADD NEW BOOK TO ARORA              |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|      Enter your Book ID :                  |" << endl;
    cout << "\t\t\t\t\t|      Enter Book Name :                     |" << endl;
    cout << "\t\t\t\t\t|      Enter Book Author :                   |" << endl;
    cout << "\t\t\t\t\t|      Enter Present Year:                   |" << endl;
    cout << "\t\t\t\t\t|      Enter Present Month:                  |" << endl;
    cout << "\t\t\t\t\t|      Enter Present Day:                    |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;

    cout << endl;
    cout << "\t\t\t\t\t+=> ";
    cin >> newBook.BookId;
    cout << endl;
    cin.ignore();

    cout << "\t\t\t\t\t~=> ";
    getline(cin, newBook.BookName);
    cout << endl;

    cout << "\t\t\t\t\t~=> ";
    getline(cin, newBook.BookAuthor);
    cout << endl;

    cout << "\t\t\t\t\t~=> ";
    cin >> newBook.year;
    cout << endl;

    cout << "\t\t\t\t\t~=> ";
    cin >> newBook.month;
    cout << endl;

    cout << "\t\t\t\t\t~=> ";
    cin >> newBook.day;
    cout << endl;

    string path = "Books/" + newBook.BookName + ".txt";
    ofstream entryBook(path, ios::out);


    entryBook << "=========== Book Information ============\n";
    entryBook << "Book Name : " << newBook.BookName << "\n";
    entryBook << "Book Author : " << newBook.BookAuthor << "\n";
    entryBook << "Year : " << newBook.year << "\n";
    entryBook << "Month : " << newBook.month << "\n";
    entryBook << "Day : " << newBook.day << "\n";
    entryBook << "=======================\n";

    entryBook.close();

    cout << "\n\t\t\t\t\tBook Added Successfully[press any key]...";;
    system("pause > nul");
    adminMenu();

}
/**================= END ========================**/

/**===================== Update Books information ==============**/

void updateBook()
{
    system("cls");
    BookInfo upBook;
    cout << endl << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|         BOOK INFORMATION UPDATE            |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|      Enter your Book ID :                  |" << endl;
    cout << "\t\t\t\t\t|      Enter Book Name :                     |" << endl;
    cout << "\t\t\t\t\t|      Enter Book Author :                   |" << endl;
    cout << "\t\t\t\t\t|      Enter Present Year:                   |" << endl;
    cout << "\t\t\t\t\t|      Enter Present Month:                  |" << endl;
    cout << "\t\t\t\t\t|      Enter Present Day:                    |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t Don't Mistake the Book Name" << endl;
    cout << endl;
    cout << "\t\t\t\t\t>==> ";
    cin >> upBook.BookId;
    cout <<endl;
    cin.ignore();

    cout << "\t\t\t\t\t>==> ";
    getline(cin, upBook.BookName);
    cout <<endl;

    cout << "\t\t\t\t\t>==> ";
    getline(cin, upBook.BookAuthor);
    cout <<endl;

    cout << "\t\t\t\t\t>==> ";
    cin >> upBook.year;
    cout <<endl;

    cout << "\t\t\t\t\t>==> ";
    cin >> upBook.month;
    cout <<endl;

    cout << "\t\t\t\t\t>==> ";
    cin >> upBook.day;
    cout <<endl;

    string path = "Books/" + upBook.BookName + ".txt";
    ofstream updateFile(path, ios::out);


    updateFile << "=======================\n";
    updateFile << "Book Name: " << upBook.BookName << "\n";
    updateFile << "Book Author: " << upBook.BookAuthor << "\n";
    updateFile << "Year: " << upBook.year << "\n";
    updateFile << "Month: " << upBook.month << "\n";
    updateFile << "Day: " << upBook.day << "\n";
    updateFile << "=======================\n";

    updateFile.close();

    cout << "\n\t\t\t\t\tBook Information Updated Successfully[press any key]...";
    system("pause > nul");
    adminMenu();

}
/**================= END ========================**/

/**=========Find Book for Borrow=============**/

void Findbook()
{
    system("cls");
    BookInfo BB;
    cout << "\n\n\n\t\t\t\t\tBook Name: ";
    cin >> BB.BookName;

    string FB = "Books/"+ BB.BookName +".txt";
    ifstream Borrow(FB);

    if(Borrow.is_open())
    {
        cout << "\n\n\t\t\t\t\tCongratulation. You can borrow, "<< BB.BookName <<" book." << '\n';
        cout << "\n\t\t\t\t\tTo get the book contact with Librarian.[press any key to back]...";
    }
    else
    {
        cout << "\n\t\t\t\t\tSorry. You can not borrow, "<< BB.BookName <<" book.[press any key to back]...";
    }
    Borrow.close();
}
/**================= END ========================**/

/**=========== BOOK LIST ==================**/

void listOfAllBooks()
{
    system("cls");
    WIN32_FIND_DATA findFileData;
    HANDLE bList = FindFirstFile("Books\\*.txt", &findFileData);

    if (bList == INVALID_HANDLE_VALUE)
    {
        cout << "\n\n\t\t\t\t\tNO Books, Are Here" << endl;
    }
    else
    {
        cout << "\n\n\t\t\t\t\t======}List of the Books{=======" << endl << endl;

        do
        {
            wcout << "\t\t\t\t\t=++> " << findFileData.cFileName << endl;
        }
        while (FindNextFile(bList, &findFileData) != 0);

        FindClose(bList);

    }
}
/**================= END ========================**/

/**=========== Admin Menu ==================**/

void adminMenu()
{

    system("cls");
    int dis;
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t /-------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|--------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|                ADMIN Panel                 |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|               [01] : Add New Book          |" << endl;
    cout << "\t\t\t\t\t|               [02] : Update Book           |" << endl;
    cout << "\t\t\t\t\t|               [03] : Books List            |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t+--------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|               [00] : HOME                  |" << endl;
    cout << "\t\t\t\t\t+--------------------------------------------+" << endl;
    cout << endl;
    cout << "\t\t\t\t\t+=> ";
    cin >> dis;
    switch(dis)
    {
    case 1:
    {
        addBook();
        break;

    }
    case 2:
    {
        updateBook();
        break;
    }

    case 3:
    {
        listOfAllBooks();
        cout << "\n\n\t\t\t\t\tEnter any key to return Admin Panel[press any key]...";
        system("pause > nul");
        adminMenu();
        break;
    }
    case 0:
    {
        HomePage();
        break;
    }
    default:
    {
        cout << "\t\t Entered Invalid DIGIT[press any key]" << endl;
        system("pause > nul");
        adminMenu();
        break;
    }
    }

}
/**================= END ========================**/


/**============== Admin login ====================**/

void adminLogin()
{
    system("cls");
    AdminInfo admin;
    cout << endl << endl << endl << endl << endl << endl << endl;

    cout << "\t\t\t\t\t /-------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|--------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|         ADMIN LOGIN TO ARORA LMS           |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|      Admin user :                          |" << endl;
    cout << "\t\t\t\t\t|      Admin Password :                      |" <<endl;
    cout << "\t\t\t\t\t|                                            |"<< endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;

    cout <<endl;
    cout << "\t\t\t\t\t+=>> ";
    cin >> admin.user;

    cout <<endl;
    cout << "\t\t\t\t\t+=>> ";
    cin >>admin.password;

    if( admin.user == ADMIN_USER )
    {
        if( admin.password == ADMIN_PASSWORD )
        {
            cout << "\n\n\n\t\t\t\t\tSuccessfully Login [press key]...";
            system("pause > nul");
            adminMenu();

        }
        else
        {
            cout << "n\n\n\t\t\t\t\tEntered Wrong password!! [Press any key]" << '\n';
            system("pause > nul");
            adminLogin();
        }
    }
    else
    {
        cout << "n\n\n\t\t\t\t\tEntered Wrong Username! [Press any key]" <<'\n';
        system("pause > nul");
        adminLogin();
    }
}
/**================= END ========================**/


/**============= Users Registration ================**/
void RegistrationPage()
{
    system("cls");
    UserInfo user;
    cout << endl << endl << endl << endl << endl << endl << endl;

     cout << "\t\t\t\t\t /------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|--------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|         REGISTRATION TO ARORA              |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|      Enter your Name :                     |" << endl;
    cout << "\t\t\t\t\t|      Enter your ID :                       |" << endl;
    cout << "\t\t\t\t\t|      Enter your password :                 |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << endl;
    cin.ignore();
    cout << "\t\t\t\t\t#=> ";
    getline(cin,user.name);

    cout << endl;
    cout << "\t\t\t\t\t#=> ";
    getline(cin,user.Id);

    cout << endl;
    cout << "\t\t\t\t\t#=> ";
    getline(cin,user.password);

    string userFile = "LocalUser/" + user.Id + ".txt";
    ofstream userData(userFile, ios::out);

    userData << "==============>User Info<===========" << endl;
    userData << "Name : " << user.name << endl;
    userData << "Id : " << user.Id << endl;
    userData << "Password : " << user.password << endl;
    userData << "====================================" << endl;

    userData.close();
    cout << "\n\n\t\t\t\t\tSuccessful your Registration[press any key]...";
    system("pause > nul");
    userPanel();
}
/**================= END ========================**/

/**================= User Login ========================**/

void LoginPage()
{
    system("cls");
    UserInfo user;
    cout << endl << endl << endl << endl << endl << endl << endl;

    cout << "\t\t\t\t\t /-------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|--------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|           LOGIN TO ARORA LMS               |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|      User Id :                             |" << endl;
    cout << "\t\t\t\t\t|      Password :                            |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;

    cout << endl;
    cout << "\t\t\t\t\t#=> ";
    cin >> user.Id;
    cout << "\t\t\t\t\t#=> ";
    cin >> user.password;

    string userFile = "LocalUser/" + user.Id + ".txt";
    ifstream readUser(userFile);

    string pass;
    int target_Line = 4, initial_line = 0;

    bool passwordMatched = false;

    /// Finding password------------->

    while (initial_line < target_Line && getline(readUser, pass))
    {
        initial_line++;
    }

    if (pass == ("Password : " + user.password))
    {
        passwordMatched = true;
    }

    readUser.close();

    /**=====> Password matching Checker <======**/

    if (passwordMatched)
    {
        cout <<endl << endl;
        cout << "\t\t\t\t\tLogin Successful! [Press any key]...";
        system("pause > nul");
        userMenu();
    }
    else
    {
        cout <<endl << endl;
        cout << "\t\t\t\t\tWrong Password!!" << endl;
        cout << "\n\t\t\t\t\tTo continue Press any Key....";
        system("pause > nul");
        userPanel();
    }


}
/**================= END ========================**/

/**================= User Details ========================**/

void userDetails()
{
    system("cls");
    UserInfo user;
    cout << "\n\n\t\t\t\t\tUser Id: ";
    cin >> user.Id;

    string userDet = "LocalUser/" + user.Id + ".txt";
    ifstream userFind(userDet);

    string data;
    cout << "\n\n\n\t\t\t\t\t============== YOUR INFO ==============" << endl;
    cout << endl << endl;
    while( getline(userFind, data) ){
        cout << "\t\t\t\t\t" << data << endl;
    }
    userFind.close();

}
/**================= END ========================**/

/**================= HOME ========================**/
void HomePage()
{
home:
    system("cls");
    int dis;
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t /-------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|--------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|                 ARORA LMS                  |" << endl;
    cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|               [01] : librarian             |" << endl;
    cout << "\t\t\t\t\t|               [02] : Student Panel         |" << endl;
    cout << "\t\t\t\t\t|               [03] : Books List            |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t+--------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|               [-1] : Exit                  |" << endl;
    cout << "\t\t\t\t\t+--------------------------------------------+" << endl;
    cout << endl;

    cout << "\t\t\t\t\t>-> ";
    cin >> dis;

    switch(dis)
    {
    case 1:
    {
        adminLogin();
        break;
    }
    case 2:
    {
        userPanel();
        break;
    }
    case 3:
    {
        listOfAllBooks();
        cout << "\n\n\t\t\t\t\tEnter any key to return home[press any key]...";
        system("pause > nul");
        goto home;
        break;
    }
    case-1:
    {
        exit(0);
        break;
    }
    default:
    {
        cout << "\n\t\t\t\t\tInvalid User Input![press any key]...";
        system("pause > nul");
        goto home;
        break;
    }

    }

}
/**================= END ========================**/

/**================= User Panel ========================**/
void userPanel()
{
userPa:
    system("cls");
    int userinput;
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t /-------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|--------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|               User Panel Menu              |" << endl;
    cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|               [01] : Login                 |" << endl;
    cout << "\t\t\t\t\t|               [02] : Registration          |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\t\t\t\t\t|               [00] : HOME                  |" << endl;
    cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "\n\t\t\t\t\t+=> ";
    cin >> userinput;

    switch(userinput)
    {
    case 1:
    {
        LoginPage();
        break;
    }
    case 2:
    {
        RegistrationPage();
        break;
    }
    case 0:
    {
        HomePage();
        break;
    }
    default:
    {
        cout << "\n\n\t\t\t\t\t\nInvalid User Input![press any key]...";
        system("pause > nul");
        goto userPa;
        break;
    }
    }
}
/**================= END ========================**/

/**================= User Menu ========================**/
void userMenu()
{
upanel:
    system("cls");
    int user;

    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t /-------------------------------------------+" << endl;
    cout << "\t\t\t\t\t|--------------------------------------------|" << endl;
    cout << "\t\t\t\t\t|               User Panel Menu              |" << endl;
    cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t|               [01] : Your Details          |" << endl;
    cout << "\t\t\t\t\t|               [02] : Book List             |" << endl;
    cout << "\t\t\t\t\t|               [03] : Borrow a book         |" << endl;
    cout << "\t\t\t\t\t|                                            |" << endl;
    cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\t\t\t\t\t|               [00] : HOME                  |" << endl;
    cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "\t\t\t\t\t+=> ";
    cin >> user;
    switch(user)
    {
    case 1:
    {
        userDetails();
        cout << "\n\n\t\t\t\t\tPress any key to Back user panel...";
        system("pause > nul");
        goto upanel;
        break;
    }
    case 2:
    {
        listOfAllBooks();
        cout << "\n\n\t\t\t\t\tPress any key to Back user panel...";
        system("pause > nul");
        goto upanel;
        break;
    }
    case 3:
    {
        Findbook();
        system("pause > nul");
        goto upanel;
        break;
    }
    case 0:
    {
        HomePage();
        break;
    }
    default:{
        cout << "\n\n\n\t\t\t\t\tInvalid Input[Press any key]....";
        system("pause > nul");
        goto upanel;
    }
    }
}
/**================= END ========================**/

/**================= Start Page ========================**/
void StartPage()
{
    cout << endl << endl << endl << endl <<endl << endl << endl << endl;
    cout << "\t\t\t\t";
    animatedStarting();
    cout << endl << endl;
    charAnimated( "\t\t\t\t\t\tWELCOME TO ARORA LMS" );
    cout << "\t\t\t\t";
    animatedStarting();
    Sleep(2000);
    HomePage();
}
/**================= END ========================**/

/**=========================== Main =============================**/
int main()
{
    SetConsoleTextAttribute(console, 4);
    StartPage();
}
