//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "mainForm.h"
#include "loginForm.h"
#include "registrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyMain *myMain;
//---------------------------------------------------------------------------
__fastcall TmyMain::TmyMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TmyMain::loginNavigationButtonClick(TObject *Sender)
{
				  myLoginForm->Show();

}
//---------------------------------------------------------------------------

void __fastcall TmyMain::registrationNavigationButtonClick(TObject *Sender)
{
							myRegistrationForm->Show();
}
//---------------------------------------------------------------------------

