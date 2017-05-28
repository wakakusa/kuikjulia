#include "headers.h"
#include "defines.h"
#include "pallet_structures.h"
#include "vte_window_structures.h"
#include "script_editor_window_structures.h"
#include "pallet_defines.h"

#define script01 "α"
#define script02 "β"
#define script03 "Γ"
#define script04 "ω"
#define script05 "θ"
#define script06 "ε"
#define script07 ""
#define script08 ""
#define script09 ""
#define script10 ""

  
/*Pallet_Testを表示するためのcallback関数*/
G_MODULE_EXPORT void cb_Pallet_charactors( GtkImageMenuItem *pallet_test, gpointer user_data ) 
{
  create_pallet(&Pallet_Test,PalletInterfaceFile05,"Pallet_charactors");
    /* windowの表示 */
  gtk_widget_show_all((Pallet_Test.pallet_window)); 
} 

/*input_charactor for terminal*/
G_MODULE_EXPORT void cb_input_charactor1_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script01);
}

G_MODULE_EXPORT void cb_input_charactor2_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script02);
}

G_MODULE_EXPORT void cb_input_charactor3_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script03);
}

G_MODULE_EXPORT void cb_input_charactor4_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script04);
}

G_MODULE_EXPORT void cb_input_charactor5_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script05);
}

G_MODULE_EXPORT void cb_input_charactor6_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script06);
}

G_MODULE_EXPORT void cb_input_charactor7_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script07);
}

G_MODULE_EXPORT void cb_input_charactor8_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script08);
}

G_MODULE_EXPORT void cb_input_charactor9_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script09);
}

G_MODULE_EXPORT void cb_input_charactor10_for_terminal(GtkWidget *widget, gpointer data)
{
  Vte_terminal_insert(&VTE[VTE_No],script10);
}

/*input_charactor for text editor*/

//StructRSCRIPTEDITORWidget RSCRIPTEDITOR[RSCRIPTEDITOR_No];

G_MODULE_EXPORT void cb_input_charactor1_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script01);
}

G_MODULE_EXPORT void cb_input_charactor2_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script02);
}

G_MODULE_EXPORT void cb_input_charactor3_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script03);
}

G_MODULE_EXPORT void cb_input_charactor4_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script04);
}

G_MODULE_EXPORT void cb_input_charactor5_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script05);
}

G_MODULE_EXPORT void cb_input_charactor6_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script06);
}

G_MODULE_EXPORT void cb_input_charactor7_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script07);
}

G_MODULE_EXPORT void cb_input_charactor8_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script08);
}

G_MODULE_EXPORT void cb_input_charactor9_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script09);
}

G_MODULE_EXPORT void cb_input_charactor10_for_editor(GtkWidget *widget, gpointer data)
{
  ScriptEditor_insert(&SCRIPTEDITOR[SCRIPTEDITOR_No],script10);
}
