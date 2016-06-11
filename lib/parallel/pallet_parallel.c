#include "headers.h"
#include "defines.h"
#include "pallet_structures.h"
#include "vte_window_structures.h"
#include "script_editor_window_structures.h"
#include "pallet_defines.h"


/*****************************************************************************************************
 * function:Palletを表示するためのcallback関数
 * 
 * 
 * glade:Pallet_Operation
*****************************************************************************************************/
G_MODULE_EXPORT void cb_Pallet_Parallel( GtkImageMenuItem *pallet_parallel, gpointer user_data ) 
{
  create_pallet(&Pallet_Parallel,PalletInterfaceFile04,"Pallet_Parallel");
    /* windowの表示 */
  gtk_widget_show_all((Pallet_Parallel.pallet_window)); 
} 

/*****************************************************************************************************
 * function:ファイル選択ダイアログをcabcelで閉じる
 * 
 * 
 * glade:none
*****************************************************************************************************/
G_MODULE_EXPORT void Pallet_Parallel_Cancel(GtkWidget *widget, gpointer data)
{
  gtk_widget_destroy((Pallet_Parallel.pallet_window)); 
}

