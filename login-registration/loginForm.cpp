//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "loginForm.h"
#include<fstream>
#include<string>
#include<vector>
#include<sstream> //for stringstream
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"



TmyLoginForm *myLoginForm;
//---------------------------------------------------------------------------
__fastcall TmyLoginForm::TmyLoginForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
const char* convertToChar(AnsiString ansiStr)
{
	return ansiStr.c_str();
}
std::vector<std::string>commeDelim(std::string line)
{
    std::vector<std::string>res;
	std::stringstream s_stream(line);
	while (s_stream.good())
		{
			std::string subst;
			getline(s_stream,subst,',') ;
			res.push_back(subst);
		}
	return res;
}
bool found=false;
void __fastcall TmyLoginForm::loginButtonClick(TObject *Sender)
{
			fstream myFile;
			myFile.open("registered_users.txt",ios::in);
			if (myFile.is_open()) {
								 std::string line;
								 while(!found && getline(myFile,line))
								 {
										   std::vector<std::string>parsedLine=commeDelim(line);
                                           std::string username=parsedLine[2];
										   const char* u1=username.c_str(); //to convert it to c string
										   if (std::strcmp(u1,convertToChar(usernameEdit->Text))==0) {
															 const char* p1=parsedLine.at(3).c_str(); //to convert it to c string
															 if (std::strcmp(p1,convertToChar(passwordEdit->Text))==0)
																{
																		 messageLabel->Text="login successfully";
																		 found=true; //this method is better than the break because it is more readable
                                                                }
                                                             else
                                                               messageLabel->Text="enter a correct password";
                                           }

								 }
            }
}
//---------------------------------------------------------------------------


void __fastcall TmyLoginForm::FormActivate(TObject *Sender)
{
					  while ((usernameEdit->Text=="") && (passwordEdit->Text==""))
	{
							  loginButton->Enabled=False;
	}
	loginButton->Enabled=True;
}
//---------------------------------------------------------------------------

