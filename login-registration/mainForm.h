//---------------------------------------------------------------------------

#ifndef mainFormH
#define mainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyMain : public TForm
{
__published:	// IDE-managed Components
	TButton *loginNavigationButton;
	TButton *registrationNavigationButton;
	void __fastcall loginNavigationButtonClick(TObject *Sender);
	void __fastcall registrationNavigationButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyMain *myMain;
//---------------------------------------------------------------------------
#endif
