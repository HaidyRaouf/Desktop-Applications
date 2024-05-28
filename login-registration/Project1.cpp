//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("mainForm.cpp", myMain);
USEFORM("loginForm.cpp", myLoginForm);
USEFORM("registrationForm.cpp", myRegistrationForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TmyMain), &myMain);
		Application->CreateForm(__classid(TmyLoginForm), &myLoginForm);
		Application->CreateForm(__classid(TmyRegistrationForm), &myRegistrationForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
