#include<iostream>
#include<fstream>
#include<windows.h>
#include <cstdlib>
#include <vector>

/// Cursor Position
#define Cursor_move(x,y,name)  COORD name;name.X = (x);name.Y=(y);SetConsoleCursorPosition(console, name);
/// Text position Control
#define text_control(x,y,text) {\
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);\
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };\
    SetConsoleCursorPosition(console, pos);\
    DWORD charsWritten;\
    WriteConsole(console, text, static_cast<DWORD>(strlen(text)), &charsWritten, NULL);\
}

using namespace std;

/// Handling the console text color
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

class BUBT
{

public:

    void defult()
    {

        int value=0;
        cout<<endl<<endl<<" [01] : exit"<<endl;
        cout<<" [02] : Home" <<endl;
        cout<<"press : ";
        cin>>value;
        switch(value)
        {

        case 1:
        {
            system("cls");
            exit();


            break;
        }
        case 2:
        {
            system("cls");
            home();

            break;


        }
        default:
            system("cls");
            SetConsoleTextAttribute(console, 4);
            cout<<"Wrong value enterd pleas try agin"<<endl;
            SetConsoleTextAttribute(console, 11);
            home();

            break;

        }
    }

    void wrong()
    {

        system("cls");
        SetConsoleTextAttribute(console, 4);
        cout<<"You entered an invalid operator. Please try again\n"<<endl;
        SetConsoleTextAttribute(console, 11);
        home();

    }
    void exit_or_back_for_about_section()
    {
        int value=0;
        cout<<endl<<endl<<" [01] : exit"<<endl;
        cout<<" [02] : Back" <<endl;
        cout<<"press : ";
        cin>>value;
        switch(value)
        {

        case 1:
        {
            system("cls");
            exit();
            break;
        }
        case 2:
        {
            system("cls");
            about();

            break;


        }
        default:
            system("cls");
            SetConsoleTextAttribute(console, 4);
            cout<<"Wrong value entered pleas try again"<<endl;
            SetConsoleTextAttribute(console, 11);
            home();

            break;

        }
    }


    // Starting Section of Programe
    void start()
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl<<endl<<endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\t----------------------------------------------" << endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\t----------------------------------------------" << endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\tBangladesh University of Business & Technology" << endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\t----------------------------------------------" << endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\tLoading ";
        SetConsoleTextAttribute(console, 15);
        char x = 219;

        for (int i = 0; i < 35; i++)
        {
            cout << x;
            if (i < 10)
                Sleep(250);
            if (i >= 10 && i < 20)
                Sleep(100);
            if (i >= 10)
                Sleep(25);
        }
        system("cls");
    }



    /// About Section of University
    void about()
    {
        SetConsoleTextAttribute(console, 7);
        int value=0;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               SELECT AN OPTION:            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|  [01] : History                            |" << endl;
        cout << "\t\t\t\t\t|  [02] : BUBT TRUST                         |" << endl;
        cout << "\t\t\t\t\t|  [03] : Campus                             |" << endl;
        cout << "\t\t\t\t\t|  [04] : policies, Rules and Regulation     |" << endl;
        cout << "\t\t\t\t\t|  [05] : Mission and obj                    |"<< endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               [-1] : Exit                  |" << endl;
        cout << "\t\t\t\t\t|               [00] : Back                  |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\tpress : ";
        cin>>value;
        system("cls");
        switch(value)
        {

        // Histroy Section
        case 1:
        {
            SetConsoleTextAttribute(console, 8);
            string History;
            ifstream file("Regular_info/History.txt");
            cout<<""<<endl<<endl;
            while (getline(file,History))
            {

                cout<<"\t"<<History<<endl;

            }
            file.close();
            exit_or_back_for_about_section();   ///Exit OR Back Function call
            system("cls");
            break;
        }


        // BUBT TRUST Section
        case 2:
        {
            SetConsoleTextAttribute(console, 9);
            string Trust;
            ifstream file("Regular_info/Trust.txt");
            cout<<endl<<endl;
            while (getline(file,Trust))
            {

                cout<<"\t\t\t"<<Trust<<endl;

            }
            file.close();
            exit_or_back_for_about_section();   ///Exit OR Back Function call
            system("cls");
            break;
        }

        // BUBT Campus INformation
        case 3:
        {
            SetConsoleTextAttribute(console, 10);
            string Campus;
            ifstream file("Regular_info/Campus.txt");

            cout<<endl<<endl<<endl<<endl<<endl;
            while (getline(file,Campus))
            {

                cout<<"\t\t"<<Campus<<endl;

            }
            file.close();
            exit_or_back_for_about_section();   ///Exit OR Back Function call
            system("cls");
            break;
        }


        // Policies_Rules_and_Regulation Section
        case 4:
        {
            SetConsoleTextAttribute(console, 11);
            string Policies_Rules_and_Regulation;
            ifstream file("Regular_info/Policies_Rules_and_Regulation.txt");
            cout<<endl<<endl;
            while (getline(file,Policies_Rules_and_Regulation))
            {

                cout<<"\t\t\t"<<Policies_Rules_and_Regulation<<endl;

            }
            file.close();
            exit_or_back_for_about_section();   ///Exit OR Back Function call
            system("cls");
            break;
        }


        // BUBT Mission_and_objective Section
        case 5:
        {
            SetConsoleTextAttribute(console, 15);
            string Mission_and_objective;
            ifstream file("Regular_info/Mission_and_objective.txt");
            cout<<endl<<endl;
            while (getline(file,Mission_and_objective))
            {

                cout<<"\t\t\t"<<Mission_and_objective<<endl;

            }
            file.close();
            exit_or_back_for_about_section();   ///Exit OR Back Function call
            system("cls");
            break;
        }


        // Exit Section
        case -1:
        {

            exit();
            break;
        }


        /// Return Home Menu section
        case 0:
        {
            system("cls");
            home();
        }


        /// Wrong Input entry
        default:
        {
            system("cls");
            SetConsoleTextAttribute(console, 4);
            cout<<"Wrong value entered";
            about();

            break;
        }


        }
    }


    /// BUBT Academic information Section
    void academic()
    {
academic:
        SetConsoleTextAttribute(console, 5);
        int value;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
        cout << "\t\t\t\t\t|               Select an Option:                    |" << endl;
        cout << "\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
        cout << "\t\t\t\t\t|                                                    |" << endl;
        cout << "\t\t\t\t\t| [01] : Faculty of Engineering & Applied Sciences   |" << endl;
        cout << "\t\t\t\t\t| [02] : Faculty of Business                         |" << endl;
        cout << "\t\t\t\t\t| [03] : Faculty of Arts & Humanities                |" << endl;
        cout << "\t\t\t\t\t| [04] : Faculty of Social Sciences                  |" << endl;
        cout << "\t\t\t\t\t|                                                    |" << endl;
        cout << "\t\t\t\t\t|----------------------------------------------------|" << endl;
        cout << "\t\t\t\t\t| [00] : Back                                        |" << endl;
        cout << "\t\t\t\t\t| [-1] : Exit                                        |" << endl;
        cout << "\t\t\t\t\t+----------------------------------------------------+" << endl;
        cout<<"\t\t\t\t\tpress : ";
        cin>>value;
        system("cls");

        switch(value)
        {

        // Faculty of Engineering & Applied Sciences Section
        case 1:
        {
            SetConsoleTextAttribute(console, 2);
            int value=0;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "\t\t\t\t\t|               Select an Option:                    |" << endl;
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
            cout << "\t\t\t\t\t[01] : Computer Science and Engineering              " << endl;
            cout << "\t\t\t\t\t[02] : Electrical and Electronic Engineering" << endl;
            cout << "\t\t\t\t\t[03] : Mathematics & Statistics" << endl;
            cout << "\t\t\t\t\t[04] : Textile Engineering" << endl;
            cout << "\t\t\t\t\t[05] : Civil Engineering" << endl;
            cout << "\t\t\t\t\t[00] : Back                                        " << endl;
            cout << "\t\t\t\t\t[-1] : Exit                                        " << endl;
            cout << "\t\t\t\t\t------------------------------------------------------" << endl;

            cout<<"\t\t\t\t\tpress : ";
            cin>>value;
            system("cls");

            switch(value)
            {

            // Computer Science and Engineering Section
            case 1:
            {
                SetConsoleTextAttribute(console, 1);
                string Computer_Science_and_Engineering;
                ifstream file("Regular_info/Computer_Science_and_Engineering.txt");
                cout<<endl<<endl<<endl;
                while (getline(file,Computer_Science_and_Engineering))
                {

                    cout<<"\t\t\t"<<Computer_Science_and_Engineering<<endl;

                }
                file.close();
                defult();
                system("cls");
                break;
            }


            // Electrical and Electronic Engineering Section
            case 2:
            {
                SetConsoleTextAttribute(console, 1);
                string EEE__Department;
                ifstream file("Regular_info/EEE-Department.txt");
                cout<<endl<<endl<<endl;
                while (getline(file,EEE__Department))
                {

                    cout<<"\t\t\t"<<EEE__Department<<endl;

                }
                file.close();
                defult();
                system("cls");
                break;
            }


            // Mathematics & Statistics Section
            case 3:

            {
                SetConsoleTextAttribute(console, 1);
                string Mathematics_Statistics;
                ifstream file("Regular_info/Mathematics-Statistics.txt");
                cout<<endl<<endl<<endl;
                while (getline(file,Mathematics_Statistics))
                {

                    cout<<"\t\t\t"<<Mathematics_Statistics<<endl;

                }
                file.close();
                defult();
                system("cls");
                break;
            }

            //Textile Engineering Section
            case 4:
            {
                SetConsoleTextAttribute(console, 1);
                string Textile_Department;
                ifstream file("Regular_info/Textile-Department.txt");
                cout<<endl<<endl<<endl;
                while (getline(file,Textile_Department))
                {

                    cout<<"\t\t\t"<<Textile_Department<<endl;

                }
                file.close();
                defult();
                system("cls");
                break;
            }


            // Civil_Department Section
            case 5:
            {

                SetConsoleTextAttribute(console, 1);
                string Civil_Department;
                ifstream file("Regular_info/Civil-Department.txt");
                cout<<endl<<endl<<endl;
                while (getline(file,Civil_Department))
                {

                    cout<<"\t\t\t"<<Civil_Department<<endl;

                }
                file.close();
                defult();
                system("cls");
                break;
            }

            // Back to Academic menu
            case 00:
            {
                goto academic;
                break;
            }

            // Exit
            case -1:
            {
                exit();
                break;
            }

            /// Worng entry
            default:
            {
                system("cls");
                wrong();

                break;
            }

            }
        }


        // BBA_Accounting_Department
        case 2:
        {
            SetConsoleTextAttribute(console, 1);
            string BBA_Accounting_Department;
            ifstream file("Regular_info/BBA Accounting-Department.txt");
            cout<<endl<<endl<<endl;
            while (getline(file,BBA_Accounting_Department))
            {

                cout<<"\t\t\t"<<BBA_Accounting_Department<<endl;

            }
            file.close();
            defult();
            system("cls");
            break;
        }


        // Department_of_Law_Justice
        case 3:
        {
            SetConsoleTextAttribute(console, 1);
            string Department_of_Law_Justice;
            ifstream file("Regular_info/Department-of-Law-Justice.txt");
            cout<<endl<<endl<<endl;
            while (getline(file,Department_of_Law_Justice))
            {

                cout<<"\t\t\t"<<Department_of_Law_Justice<<endl;

            }
            file.close();
            defult();
            system("cls");
            break;
        }


        // Department-of-Economics
        case 4:
        {
            SetConsoleTextAttribute(console, 1);
            string Department_of_Economics;
            ifstream file("Regular_info/Department-of-Economics.txt");
            cout<<endl<<endl<<endl;
            while (getline(file,Department_of_Economics))
            {

                cout<<"\t\t\t"<<Department_of_Economics<<endl;

            }
            file.close();
            defult();
            system("cls");
            break;
        }


        // Back Home section
        case 00:
        {
            home();
            break;
        }

        /// Exit programme
        case -1:
        {
            exit();
            break;
        }

        // Worng entry
        default:
        {
            system("cls");
            wrong();

            break;
        }


        }
    }


    /// University CLubs
    void clubs()
    {

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "|                List of BUBT Clubs                  |" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
        cout << " [01] : IT Club" << endl;
        cout << " [02] : IEEE BUBT Student Branch" << endl;
        cout << " [03] : Sports Club" << endl;
        cout << " [04] : EEE Club" << endl;
        cout << " [05] : English Language Club" << endl;
        cout << " [06] : Social Welfare Club" << endl;
        cout << " [07] : BUBT Moot Court Society-BMCS" << endl;
        cout << " [08] : BUBT Photography Club" << endl;
        cout << " [09] : Business Club" << endl;
        cout << " [10] : Cultural Club" << endl;
        cout << " [11] : Debating Club" << endl;
        cout << " [12] : Rover Scout" << endl;
        cout << " [13] : Economics Club" << endl;
        cout << " [14] : Bangladesh National Cadet Corps (BNCC)" << endl;
        cout << "------------------------------------------------------" << endl;


        defult();
        system("cls");

    }

    // Contact infomation of University
    void contacts()
    {
        SetConsoleTextAttribute(console, 6);
        string Contacts;
        ifstream file("Regular_info/Contacts.txt");
        while (getline(file,Contacts))
        {

            cout<<"\t\t\t\t"<<Contacts<<endl;

        }
        file.close();
        defult();
        system("cls");
    }


    ///Forget password section

    void forget_password()
    {

errorOne:
        system("cls");
        SetConsoleTextAttribute(console, 11);
        int value=0;
        string ID,Phone_Number;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;

        cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;
        cout << "\t\t\t\t\t|           FIND YOUR ACCOUNT                    |" << endl;
        cout << "\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
        cout << "\t\t\t\t\t|                                                |" << endl;
        cout << "\t\t\t\t\t|                                                |" << endl;
        cout << "\t\t\t\t\t|                                                |" << endl;
        cout << "\t\t\t\t\t|      Enter your ID :                           |" << endl;
        cout << "\t\t\t\t\t|      Enter your Phone number :                 |" << endl;
        cout << "\t\t\t\t\t|                                                |" << endl;
        cout << "\t\t\t\t\t|                                                |" << endl;
        cout << "\t\t\t\t\t|                                                |" << endl;
        cout << "\t\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << endl;

        Cursor_move(63,14,ID_input);
        cin >> ID;
        Cursor_move(73,15,Phone_Number_Input);
        cin >> Phone_Number;

        string File_name = "User_info/" + ID + ".txt"; // Add ".txt" extension to the ID for the filename
        ifstream file(File_name);

        /// If file is not open
        if (!file.is_open())
        {
            SetConsoleTextAttribute(console, 4);
            text_control(40,14,"Your ID or Phone Number is Incorrect,Press any key..");
            Cursor_move(93,14,error_massage)
            SetConsoleTextAttribute(console, 7);
            system("pause > nul");
            goto errorOne;
        }

        string line_phone;
        int target_Line = 3;
        int initial_line = 0;
        bool phone_number_match = false;

        // Read lines up to the target line and check for password match

        while (initial_line < target_Line && getline(file, line_phone))
        {
            initial_line++;
        }

        if (line_phone == ("Phone number : " + Phone_Number))
        {
            phone_number_match = true;
        }

        file.close();

        if (phone_number_match)
        {
short_password:
            system("cls");

            string New_password;
            SetConsoleTextAttribute(console, 1);
            text_control(45,10,"<-Reset your Password->");
            text_control(44,11,"~~~~~~~~~~~~~~~~~~~~~~~~~");

            SetConsoleTextAttribute(console, 3);
            text_control(40,14,"Enter your new password : ");
            Cursor_move(66,14,error_massage)
            SetConsoleTextAttribute(console, 7);

            cin >> New_password;

            // check Password size

            if(New_password.size() < 4 || New_password.size() > 50)
            {
                system("cls");
                SetConsoleTextAttribute(console, 4);
                text_control(40,14,"Your Password is too short,Press any key..");
                Cursor_move(85,14,error_massage)
                SetConsoleTextAttribute(console, 7);
                system("pause > nul");
                goto short_password;
            }
            system("cls");
            SetConsoleTextAttribute(console, 10);
            text_control(40,11,"Password reset Successful....");
            Sleep(3500);
            system("cls");

            string newPass = "Password : " + New_password;

            /// File openning

            ifstream inputFile("User_info/" + ID + ".txt");
            vector<string> lines;

            if (!inputFile.is_open())
            {
                cout << "NULL" << "!!!!!!!!!!!!!!" << '\n';
            }

            // Read all lines from the file into a vector
            string line;
            while (getline(inputFile, line))
            {
                lines.push_back(line);
            }

            inputFile.close(); // File closing

            if (lines.size() >= 9)
            {
                // Update the 9th line with the new password
                lines[8] = newPass;
            }
            else
            {
                cout << "Error for line numbers !!!!!!!!!" << '\n';
            }

            // Reopen the file and write the updated lines
            ofstream outputFile("User_info/" + ID + ".txt");
            if (!outputFile.is_open())
            {
                // Handle file write error
                // ...
            }

            for (const string& updatedLine : lines)
            {
                outputFile << updatedLine << endl;
            }

            outputFile.close();

            /// Admmission Secion recall
            admission();
        }
        else
        {

            SetConsoleTextAttribute(console, 4);
            text_control(40,14,"Your Password Does Not Match,Press any key..");
            Cursor_move(85,14,error_massage)
            SetConsoleTextAttribute(console, 7);
            system("pause > nul");
            //goto case_1;

        }

    }



    /// SING UP or FROM fill up

    void sing_up(string &ID, string &Name, string &password, string &Repassword, string &Phone, string &Gmail, string &Blood, string &Department, string &intake, string &section)
    {
        system("cls");
        SetConsoleTextAttribute(console, 11);
        int value=0;
        cout << endl << endl << endl << endl;

        cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t|                                 SING UP IN BUBT ANNEX:                               |" << endl;
        cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your ID :                                                                 |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your Name:                                                                |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your Phone number :                                                       |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your Gmail :                                                              |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your Department :                                                         |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your Intake :                                                             |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your Section :                                                            |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your Blood Group :                                                        |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your New password :                                                       |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t|      Enter your Confirm Password :                                                   |" << endl;
        cout << "\t\t|                                                                                      |" << endl;
        cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        /// Cursor Move , Input and colors
        Cursor_move(39,8,pos_ID);
        SetConsoleTextAttribute(console, 1);
        cin>>ID;

        Cursor_move(40,10,pos_Name);
        SetConsoleTextAttribute(console, 2);
        cin.ignore();
        getline(cin, Name);

        Cursor_move(49,12,pos_phone);
        SetConsoleTextAttribute(console, 3);
        cin>>Phone;

        Cursor_move(42,14,pos_Gmail);
        SetConsoleTextAttribute(console, 1);
        cin>>Gmail;

        Cursor_move(47,16,pos_Deparment);
        SetConsoleTextAttribute(console, 2);
        cin>>Department;

        Cursor_move(43,18,pos_intake);
        SetConsoleTextAttribute(console, 3);
        cin>>intake;

        Cursor_move(44,20,pos_section);
        SetConsoleTextAttribute(console, 1);
        cin>>section;

        Cursor_move(48,22,pos_Blood_Group);
        SetConsoleTextAttribute(console, 2);
        cin>>Blood;

        Cursor_move(49,24,pos_password);
        SetConsoleTextAttribute(console, 5);
        cin>>password;

        Cursor_move(53,26,pos_Repassword);
        SetConsoleTextAttribute(console, 5);
        cin>>Repassword;

        SetConsoleTextAttribute(console, 7);
    }


    /// ADMISSION SECTION

    void admission()
    {

        SetConsoleTextAttribute(console, 2);
        int value=0;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               CHOOSE AN OPTION:            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t|               [01] : Login                 |" << endl;
        cout << "\t\t\t\t\t|               [02] : Registration          |" << endl;
        cout << "\t\t\t\t\t|               [03] : Forget Password       |" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               [-1] : Exit                  |" << endl;
        cout << "\t\t\t\t\t|               [00] : Back                  |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\tpress : ";
        SetConsoleTextAttribute(console, 7);
        cin>>value;

        switch(value)
        {


        /// Login Section
        case 1:
        {
case_1:
            system("cls");
            SetConsoleTextAttribute(console, 11);
            int value=0;
            string ID,password;
            cout << endl << endl << endl << endl << endl << endl << endl << endl;

            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "\t\t\t\t\t|           SIGN IN TO BUBT ANNEX:           |" << endl;
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|      Enter your ID :                       |" << endl;
            cout << "\t\t\t\t\t|      Enter your password :                 |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            Cursor_move(63,14,pos_ID);
            cin>>ID;
            Cursor_move(69,15,pos_pass);
            cin>>password;
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
            string File_name = "User_info/" + ID + ".txt"; // Add ".txt" extension to the ID for the filename
            ifstream file(File_name);

            string line_pass;
            int target_Line = 9;
            int initial_line = 0;
            bool passwordMatched = false;

            // Read lines up to the target line and check for password match
            while (initial_line < target_Line && getline(file, line_pass))
            {
                initial_line++;
            }

            if (line_pass == ("Password : " + password))
            {
                passwordMatched = true;
            }

            file.close();

            // Passwording matching Checker
            if (passwordMatched)
            {
                file.open(File_name); // Reopen the file to File_name and print all information
                string Information;
                cout<<endl<<endl<<endl<<endl<<endl;
                cout << "\t\t\t\tStudent Information : " << endl;
                cout<<endl<<endl;
                for(int i=0; i< 8; i++)
                {
                    getline(file,Information);
                    {
                        cout<<"\t\t\t\t\t\t"<<Information<<endl<<endl;
                    }
                }
                SetConsoleTextAttribute(console, 10);
                cout<<"\tPress Any key To Return Home...."<<endl;
                SetConsoleTextAttribute(console, 7);
                Cursor_move(40,24,Return_home);
                system("pause > nul");
                system("cls");
                home();
            }

            // File section
            else
            {

                SetConsoleTextAttribute(console, 4);
                text_control(40,14,"Your Password Does Not Match,Press any key..");
                Cursor_move(85,14,error_massage)
                SetConsoleTextAttribute(console, 7);
                system("pause > nul");
                goto case_1;

            }
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////



            break;
        }

        /// REGISTRATION FUNCTION CALL
        /// Initial is wrong checker
        case 2:
        {

inital:

            string ID,Name,password,Repassword,Phone,Gmail,Blood,Department,intake,section;
            sing_up(ID,Name,password,Repassword,Phone,Gmail,Blood,Department,intake,section);

            /// Checking is any Input is Invalid
            if(ID.size() <=4 )
            {
                SetConsoleTextAttribute(console, 4);
                cout << endl << endl << endl;
                text_control(23,7,"Your ID except if (3<id>17)!");

                system("pause > nul");
                goto inital;



            }
            else if(Phone.size() >=15 || Phone.size() <=10)
            {
                SetConsoleTextAttribute(console, 4);
                text_control(23,12,"Your phone number is invalid !");
                system("pause > nul");
                goto inital;


            }
            else if(Gmail.size() <=10 || Gmail.size()>=50)
            {

                SetConsoleTextAttribute(console, 4);
                text_control(23,14,"Your G-mail is invalid !");
                system("pause > nul");
                goto inital;

            }
            else if(Department.size()<2 || Department.size()>20)
            {
                SetConsoleTextAttribute(console, 4);
                text_control(23,16,"Your Department is invalid !");
                system("pause > nul");
                goto inital;
            }
            else if(Blood.size()<2 || Blood.size()>6)
            {
                SetConsoleTextAttribute(console, 4);
                text_control(23,22,"Your Blood is invalid !");
                system("pause > nul");
                goto inital;
            }
            else if(password.size()<4 || password.size()>50)
            {
                SetConsoleTextAttribute(console, 4);
                text_control(23,24,"Your password is very weak !");
                system("pause > nul");
                goto inital;
            }
            else if(Repassword != password)
            {
                SetConsoleTextAttribute(console, 4);
                text_control(23,26,"New password and Confirm Password does not match !");
                system("pause > nul");
                goto inital;
            }

            // Returning the massage of Registration
            else

            {
                system("cls");
                SetConsoleTextAttribute(console, 10);
                string File_name = "User_info/" + ID + ".txt";
                ofstream file(File_name);
                if (!file.is_open())
                {
                    cout << "Error opening file." << endl;
                    return;
                }

                file << "ID: " << ID << endl;
                file << "Name: " << Name << endl;
                file << "Phone number : " << Phone << endl;
                file << "G-Mail : " << Gmail << endl;
                file << "Blood Group : " << Blood << endl;
                file << "Department : " << Department << endl;
                file << "Intake : " << intake << endl;
                file << "Section : " << section << endl;
                file << "Password : " << password << endl;

                file.close();
                text_control(40,11,"Registration Successful, Please Login....");

                Sleep(3500);
                goto case_1;

            }

        }
        case 3:
        {
            forget_password();
        }
        case 00:
        {
            system("cls");
            home();

        }
        default:
        {
            system("cls");
            SetConsoleTextAttribute(console, 4);
            text_control(40,14,"Invalid key,Press any key..");
            Cursor_move(69,14,error_massage)
            SetConsoleTextAttribute(console, 7);
            system("pause > nul");
            system("cls");
            admission();
        }
        }
    }

    /*****************************************************************************************************************************/

    /// Home Section
    void home()
    {
        SetConsoleTextAttribute(console, 11);
        int value;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               SELECT AN OPTION:            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               [01] : ABOUT                 |" << endl;
        cout << "\t\t\t\t\t|               [02] : ACADEMIC              |" << endl;
        cout << "\t\t\t\t\t|               [03] : CLUBS                 |" << endl;
        cout << "\t\t\t\t\t|               [04] : ADMISSION             |" << endl;
        cout << "\t\t\t\t\t|               [05] : CONTACTS              |" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               [-1] : Exit                  |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\tpress : ";
        system("color");
        cin>>value;
        system("cls");

        switch(value)
        {

        case 1:
        {
            about();
            break;
        }
        case 2:
        {
            academic();
            break;
        }
        case 3:
        {
            clubs();
            break;
        }
        case 4:
        {
            admission();
            break;
        }
        case 5:
        {
            contacts();
            break;
        }
        case -1:
        {
            exit();
            break;
        }

        default:
        {
            wrong();
            break;

        }

        }

    }
    void exit()
    {
        SetConsoleTextAttribute(console, 4);
    }


};
int main()
{

    BUBT object;
    object.start();
    object.home();


}
