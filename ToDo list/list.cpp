//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "list.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TasksEnterClick(TObject *Sender)    //what happen on the event of clicking on the button
{
 String taskText=TaskEdit->Text;
 if (taskText != "") {
        TasksListBox->Items->Add(taskText);
		TaskEdit->Text="";                //to make the box empty after adding a task
 }
 else
 {
	 std::cout<<"please enter the name of the task";
 }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item->Index;
    TasksListBox->Items->Delete(index);
}
//---------------------------------------------------------------------------

