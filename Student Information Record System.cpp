#include<iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include<conio.h>
#include<fstream>
#include <stdio.h>
#include <cstdio>
#include <sstream>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Student
{
    public:
 string fname;//for student first name
 string lname;//for student last name
 string ID;//for Registration No number
 string course;//for class info
 string age;
 string sreplaceFN,sreplaceLN,sreplaceA,sreplaceID,sreplaceC, strTemp;
int result;
//char oldname[] ="fileout.txt";
//char newname[] ="NewStudent.txt";
int choice, searchCho,editChoice;
//int i=0,j;
char rpt,bmenu;
string searchFile;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mainPage(){


        cout<<"\n--------------------------------------------"<<endl;
        cout<<"Welcome to Student Record Management System";
        cout<<"\n-------------------------------------------"<<endl;
        cout<<"\n\n\t\t**LOGIN PAGE**";
        cout<<endl;
        cout<<endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*void time()
{

    time_t now;
	time(&now);
	return cout << "\n\n\t\t                                                     Current Date & Time is: "<<ctime(&now);         // For Displaying Date and Time

}*/



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void loading()
{
    cout << "\n\n Username & Password Matched !! ";
    cout << "\n\n Access Granted...\n\n";
 for (int j = 0; j < 3; j++) {

   cout << "\n\n\t\rLoading   \rLoading";
   for (int i = 0; i < 3; i++) {

      cout << ".";
      Sleep(300);
   }
}


}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayAll(){
    system("cls");
	    cout<<"\n--------------------------------------------"<<endl;
        cout<<"Display All Student Records";
        cout<<"\n-------------------------------------------"<<endl;
        cout<<endl;
        fstream document;
    document.open("NewStudent.txt");
    document.clear();

cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
    while (document.good())
    {
        string VID,VFN,VLN,VAge,VCourse;

        getline(document, VID);
        getline(document, VFN);
        getline(document, VLN);
        getline(document, VAge);
        getline(document, VCourse);
        if (!VID.empty() || !VFN.empty() || !VLN.empty() || !VAge.empty() || !VCourse.empty()){
                    //cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
                    cout<<" Student ID: "<<VID<<endl<<" First Name: "<<VFN<<"\t|\t Last Name: "<<VLN<<"\t|\t Age: "<<VAge<<"\t|\t Course: "<<VCourse<<endl<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
        }
}

document.close();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void addStudent(){
system("cls");
string checkID;
int IDExist=0;
	    cout<<"\n--------------------------------------------"<<endl;
        cout<<"New Students Entry";
        cout<<"\n-------------------------------------------"<<endl;
        cout<<endl;

        cout<<"Student ID: ";
        cin>>ID;
        fstream fileTest;
        fileTest.open("NewStudent.txt");
        getline(fileTest,checkID);
        while(fileTest.good()){
            if(fileTest.good()){
            if(checkID==ID){
                cout <<"\nStudent ID "<< ID <<" is already exist!"<<endl;
                checkID.clear();
                IDExist=1;
            }
            else{
                for(int h=0;h<5;h++){
                    getline(fileTest,checkID);
                }
            }
        }
        }
        fileTest.close();
        if (IDExist!=1){
        cout<<"Student First Name: ";

        cin>>fname;

        cout<<"Student Last Name: ";
        cin>>lname;
        cout<<"Age: ";
        cin>>age;
        cout<<"Course: ";
        cin>>course;



        fstream file;
        file.open("NewStudent.txt",ios::app);
        file<<ID<<endl<<fname<<endl<<lname<<endl<<age<<endl<<course<<endl;
        file.close();


        cout<<"Record save.\n";
        }
        //system("pause");


       cout<< "\nDo you wish to go back to Menu ?[Y/N] :";
                 cin>>bmenu;
                 if(bmenu == 'y' || bmenu =='Y')
                 return Menu();
                 else if(bmenu != 'y' || bmenu !='Y')
                 exit(0);

}

void searchStudent(){
    int i=0;
do{
        system("cls");
	    cout<<"\n--------------------------------------------"<<endl;
        cout<<"Search Student Records";
        cout<<"\n-------------------------------------------"<<endl;
        cout<<endl;

        cout << "\n\n Search by Student Student ID ";


        ifstream f2("NewStudent.txt");


            cout<<"\n Enter Student ID :";
            cin>>searchFile;
            cout<<endl;
            int notFound = 0;
            for(int j=1;(j<i)||(!f2.eof());j++){
                getline(f2,ID);
                getline(f2,fname);
                getline(f2,lname);
                getline(f2,age);
                getline(f2,course);
                if(ID==searchFile){
                    notFound = 1;
                    cout<<" Student ID: "<<ID<<endl;
                    cout<<" First Name: "<<fname<<endl;
                    cout<<" Last Name: "<<lname<<endl;
                    cout<<" Age: "<<age<<endl;
                    cout<<" Course: "<<course<<endl;
                }


                }



        cout<< "\nDo you wish to repeat ?[Y/N] :"<<endl;
        cin >> rpt;






        }while(rpt == 'Y'|| rpt == 'y');
        cout<< "\nDo you wish to go back to Menu ?[Y/N] :";
                 cin>>bmenu;
                 if(bmenu == 'y' || bmenu =='Y')
                 return Menu();
                 else if(bmenu != 'y' || bmenu !='Y')
                 exit(0);

}

void searchAllStudent(){
do{
        system("cls");
	    cout<<"\n--------------------------------------------"<<endl;
        cout<<"Display All Student Records";
        cout<<"\n-------------------------------------------"<<endl;
        cout<<endl;




        fstream document;


//string blank;


    document.open("NewStudent.txt");
    document.clear();
//getline(document,blank);
cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
    while (document.good())
    {


        string VID,VFN,VLN,VAge,VCourse;

        getline(document, VID);
        getline(document, VFN);
        getline(document, VLN);
        getline(document, VAge);
        getline(document, VCourse);
        if (!VID.empty() || !VFN.empty() || !VLN.empty() || !VAge.empty() || !VCourse.empty()){
                    //cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
                    cout<<" Student ID: "<<VID<<endl<<" First Name: "<<VFN<<"\t|\t Last Name: "<<VLN<<"\t|\t Age: "<<VAge<<"\t|\t Course: "<<VCourse<<endl<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
        }

}

document.close();

        }while(rpt == 'Y'|| rpt == 'y');
        cout<< "\nDo you wish to go back to Menu ?[Y/N] :";
                 cin>>bmenu;
                 if(bmenu == 'y' || bmenu =='Y')
                 return Menu();
                 else if(bmenu != 'y' || bmenu !='Y')
                 exit(0);


}
void deleteStudent(){
do{
        system("cls");
        DisplayAll();
	    cout<<"\n--------------------------------------------"<<endl;
        cout<<"Delete Single Student Records";
        cout<<"\n-------------------------------------------"<<endl;
        cout<<endl;


fstream document;
fstream newdocument;
fstream recycleBin;
string data;
string searchID;


    document.open("NewStudent.txt");
    document.clear();
    newdocument.open("newdocument.txt", ios::out | ios::trunc);
    cout << "Enter the Student ID to delete (Must be numeric): ";
    cin >> searchID;
    string SID;
    string SFN,SLN,SAGE,SCOURSE;

    while (document.good())
    {
        SID.clear();
        SFN.clear();
        SLN.clear();
        SAGE.clear();
        SCOURSE.clear();


        //getline(document, data);
        if (document) {
            int n = 0;
            getline(document, data);
            SID = data;

            if (SID != searchID)
            {
                if(!SID.empty()){
                getline(document, SFN);
                getline(document, SLN);
                getline(document, SAGE);
                getline(document, SCOURSE);
                        newdocument << SID << endl <<SFN <<endl<<SLN<<endl<<SAGE<<endl<<SCOURSE<<endl;
                }
            }

            else{
                cout << "Student ID "<< SID <<" is successfully deleted!";
                recycleBin.open("recycleBin.txt",ios::app);
                recycleBin << data << endl;
                for (int z=0;z<4;z++){
                getline(document, data);
                recycleBin <<data<<endl;

                }
                time_t now;
                time (&now);
                recycleBin << ctime(&now);

            }

        }
    }
    document.close();
    newdocument.close();
    remove("NewStudent.txt");
    rename("newdocument.txt", "NewStudent.txt");

        }

       while(rpt == 'Y'|| rpt == 'y');
        cout<< "\nDo you wish to go back to Menu ?[Y/N] :";
                 cin>>bmenu;
                 if(bmenu == 'y' || bmenu =='Y')
                 return Menu();
                 else if(bmenu != 'y' || bmenu !='Y')
                 exit(0);

}
void deleteAllStudent(){
do{




fstream document;
fstream newdocument;
fstream recycleBin;
string data;


    int num;
    document.open("NewStudent.txt");
    document.clear();
    newdocument.open("newdocument.txt", ios::out | ios::trunc);

recycleBin.open("recycleBin.txt",ios::app);
    while (document.good())
    {


                for (int z=0;z<5;z++){
                        getline(document, data);
                        if (!data.empty()){

                recycleBin <<data<<endl;

                }}if (!data.empty()){
                time_t now;
                time (&now);
                recycleBin << ctime(&now);
                }
        }
//recycleBin.close();
    document.close();
    newdocument.close();
    remove("NewStudent.txt");
    rename("newdocument.txt", "NewStudent.txt");

        }

       while(rpt == 'Y'|| rpt == 'y');
       cout<<"\nALL RECORD IS DELETED";
        cout<< "\nDo you wish to continue ?[Y/N] :";
                 cin>>bmenu;
                 if(bmenu == 'y' || bmenu =='Y')
                 return Menu();
                 else if(bmenu != 'y' || bmenu !='Y')
                 exit(0);
}
void editStudent(){
char oldname[] ="fileout.txt";
char newname[] ="NewStudent.txt";
int i=0,j;
do{
        system("cls");
        DisplayAll();
	    cout<<"\n--------------------------------------------"<<endl;
        cout<<"Edit Student Records";
        cout<<"\n-------------------------------------------"<<endl;
        cout<<endl;





        ifstream f2("NewStudent.txt");



            cout<<"\nEnter Student ID :";
            cin>>searchFile;
            cout<<endl;
            int notFound = 0;
            for( j=0;(j<i)||(!f2.eof());j++){
                getline(f2,ID);
                getline(f2,fname);
                getline(f2,lname);
                getline(f2,age);
                getline(f2,course);
                if(ID==searchFile){
                    notFound = 1;
                    cout<<" 1.Student ID: "<<ID<<endl;
                    cout<<" 2.First Name: "<<fname<<endl;
                    cout<<" 3.Last Name: "<<lname<<endl;
                    cout<<" 4.Age: "<<age<<endl;
                    cout<<" 5.Course: "<<course<<endl;
                    cout<<" Pick which do you want to edit : "<<endl;
                    cin >>editChoice;
                        switch(editChoice)
                {
                    case 1 :  { cout<<"Student ID: ";
                               cin>>sreplaceID;
        fstream fileTest1;
        string checkID1;
        int IDExist1;
        fileTest1.open("NewStudent.txt");
        getline(fileTest1,checkID1);
        while(fileTest1.good()){
            if(fileTest1.good()){
            if(checkID1==sreplaceID){
                cout <<"\nStudent ID "<< ID <<" is already exist!"<<endl;
                checkID1.clear();
                IDExist1=1;
            }
            else{
                for(int h=0;h<5;h++){
                    getline(fileTest1,checkID1);
                }
            }
        }
        }
        fileTest1.close();
        if(IDExist1!=1){
                               ifstream filein("NewStudent.txt");
                               ofstream fileout("fileout.txt");
                               while(filein >> strTemp)
                               {
                                       if(strTemp ==  ID){
                                           strTemp = sreplaceID;
                                                     }
                                          strTemp += "\n";
                                 fileout << strTemp;};
                                 filein.close();
                                 fileout.close();
                                 f2.close();
                                 remove (newname);
                                 result= rename( oldname , newname );
        }
                                 break;}
                    case 2 :  { cout<<"Student First Name: ";
                               cin>>sreplaceFN;
                               ifstream filein("NewStudent.txt");
                               ofstream fileout("fileout.txt");
                               while(filein >> strTemp)
                               {
                                       if(strTemp ==  fname){
                                           strTemp = sreplaceFN;
                                                     }
                                          strTemp += "\n";
                                 fileout << strTemp;};
                                 filein.close();
                                 fileout.close();
                                 f2.close();
                                 remove (newname);
                                 result= rename( oldname , newname );
                               break;}
                    case 3 :  { cout<<"Student Last Name: ";
                               cin>>sreplaceLN;
                               ifstream filein("NewStudent.txt");
                               ofstream fileout("fileout.txt");
                               while(filein >> strTemp)
                               {
                                       if(strTemp ==  lname){
                                           strTemp = sreplaceLN;
                                                     }
                                          strTemp += "\n";
                                 fileout << strTemp;};
                                 filein.close();
                                 fileout.close();
                                 f2.close();
                                 remove (newname);
                                 result= rename( oldname , newname );
                               break;}
                    case 4 :   {cout<<"Age: ";
                               cin>>sreplaceA;
                               ifstream filein("NewStudent.txt");
                               ofstream fileout("fileout.txt");
                               while(filein >> strTemp)
                               {
                                       if(strTemp ==  age){
                                           strTemp = sreplaceA;
                                                     }
                                          strTemp += "\n";
                                 fileout << strTemp;};
                                 filein.close();
                                 fileout.close();
                                 f2.close();
                                 remove (newname);
                                 result= rename( oldname , newname );
                               break;}
                    case 5:   {cout<<"Course: ";
                               cin>>sreplaceC;
                               ifstream filein("NewStudent.txt");
                               ofstream fileout("fileout.txt");
                               while(filein >> strTemp)
                               {
                                       if(strTemp ==  course){
                                           strTemp = sreplaceC;
                                                     }
                                          strTemp += "\n";
                                 fileout << strTemp;};
                                 filein.close();
                                 fileout.close();
                                 f2.close();
                                 remove (newname);
                                 result= rename( oldname , newname );
                               break;}
                    default:   cout<< "Invalid Choice";
                }}}

                cout<< "\nDo you wish to repeat ?[Y/N] :";
                cin >> rpt;

        }while(rpt == 'Y'|| rpt == 'y');

                 cout<< "\nDo you wish to go back to Menu ?[Y/N] :";
                 cin>>bmenu;
                 if(bmenu == 'y' || bmenu =='Y')
                 return Menu();
                 else if(bmenu != 'y' || bmenu !='Y')
                 exit(0);
}
void recycleBin(){
do{
             system("cls");
	    cout<<"\n--------------------------------------------"<<endl;
        cout<<"Display All Deleted Records";
        cout<<"\n-------------------------------------------"<<endl;
        cout<<endl;
        fstream document;
    document.open("recycleBin.txt");
    document.clear();

cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    while (document.good())
    {
        string VID,VFN,VLN,VAge,VCourse,VTime;

        getline(document, VID);
        getline(document, VFN);
        getline(document, VLN);
        getline(document, VAge);
        getline(document, VCourse);
        getline(document, VTime);
        if (!VID.empty() || !VFN.empty() || !VLN.empty() || !VAge.empty() || !VCourse.empty() || !VTime.empty()){
                    //cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
                    cout<<" Student ID: "<<VID<<endl<<" First Name: "<<VFN<<"\t|\t Last Name: "<<VLN<<"\t|\t Age: "<<VAge<<"\t|\t Course: "<<VCourse<<"\t|\t Deleted On: "<<VTime<<endl<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
        }


    }}while(rpt == 'Y'|| rpt == 'y');

                 cout<< "\nDo you wish to go back to Menu ?[Y/N] :";
                 cin>>bmenu;
                 if(bmenu == 'y' || bmenu =='Y')
                 return Menu();
                 else if(bmenu != 'y' || bmenu !='Y')
                 exit(0);
}
void Menu(){
    system("cls");

    cout<<"\n--------------------------------------------"<<endl;
    cout<<"Student Record Management System";
    cout<<"\n-------------------------------------------"<<endl;
    cout << "\n\n 1: Enter New Students Record ";
	cout << "\n\n 2: Search Record ";
	cout << "\n\n 3: Display All Record ";
	cout << "\n\n 4: Delete Record ";
	cout << "\n\n 5: Delete All Record";
	cout << "\n\n 6: Edit Record ";
	cout << "\n\n 7: Display All Deleted Record";
	cout << "\n\n 8: Exit";
	cout << "\n\n Enter your Choice: ";
	cin>>choice;




	if (choice==1){

	    addStudent();


	}
	else if (choice == 2){
        searchStudent();
	}

	else if (choice == 3){

         searchAllStudent();
    }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

else if (choice == 4){
        deleteStudent();
	}




else if (choice == 5){
        deleteAllStudent();
    }

    else if (choice == 6){
         editStudent();


}
    else if (choice == 7){
            recycleBin();
    }
    else if (choice == 8){
        system("cls");
        cout << endl <<endl<<endl<<endl<<endl<<endl<< "\t\t\tThanks For Use Our System. Have a Nice Day!!"<<endl<<endl<<endl<<endl<<endl;
    }
    else {
        system("cls");
        cout << endl <<endl<<endl<<endl<<endl<<endl<< "\t\t\tInvalid Input Detected...System Force To Terminate"<<endl<<endl<<endl<<endl<<endl;


    }
}







};//Variable of student type



class User {

public:
    string username;
    string password;
    string inputUsername;
    string inputPassword;


    // User registration
    void userRegisterDo()
    {

        ofstream usersFile ("userData.txt");

        if (	!usersFile.is_open())
        {
            usersFile.open("userData.txt");
        }

            usersFile << username << " " << password << endl;

            usersFile.close();
    }



    // User login function
    void login()
     {
        int notfound = 0;
        int j = 0;
        int i = 0;
         do {
            cout << "Please enter your username:";
            cin >> inputUsername;

            for(i=0;i<1;++i){

            inputPassword.clear();
            cout<<"Password: ";
            char input = '\0';

            while (input != 13){
                input = (char)getch();
                if(input == 13)
                break;
                j++;
                inputPassword += input;
                cout << "*";
            }
            }

            string userAndPass = inputUsername + " " + inputPassword; // Search pattern
            int offset;
            string line;
            ifstream usersFile;
            usersFile.open ("userData.txt");
            if(usersFile.is_open())
            {
            while(!usersFile.eof())
            {
                getline(usersFile,line);
                if ((offset = line.find(userAndPass, 0)) != string::npos) {	  // if login data is found
                    notfound = 1;
                    cout<<endl;
                    cout << "Found " << inputUsername << endl;
                }
                else if(notfound == 0){
                    cout<<endl;
                    cout<<"Username and/or password incorrect!"<<endl;

                }


            }

			usersFile.close();
            }
        else
            cout << "Unable to open userData.txt file." << endl;
         }while(notfound == 0);
     }



};



int main(){
    User user1;
    Student stud;
    ifstream usersFile("userData.txt");
    //stud.time();
    stud.mainPage();
    user1.login();
    stud.loading();
    system("cls");
    stud.Menu();

 return 0;
}
