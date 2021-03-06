#include "../../uCGUI391/Core/LCDAA.c"
#include "../../uCGUI391/Core/LCDColor.c"
#include "../../uCGUI391/Core/LCDGetP.c"
#include "../../uCGUI391/Core/LCDInfo.c"
#include "../../uCGUI391/Core/LCDInfo0.c"
#include "../../uCGUI391/Core/LCDL0Delta.c"
#include "../../uCGUI391/Core/LCDL0Mag.c"
#include "../../uCGUI391/Core/LCDP1.c"
#include "../../uCGUI391/Core/LCDP565_Index2Color.c"
#include "../../uCGUI391/Core/LCDRLE4.c"

#include "../../uCGUI391/Core/GUI_SetColor.c"
#include "../../uCGUI391/Core/GUI_SetColorIndex.c"
#include "../../uCGUI391/Core/GUI_SetDecChar.c"
#include "../../uCGUI391/Core/GUI_SetDefault.c"
#include "../../uCGUI391/Core/GUI_SetDrawMode.c"
#include "../../uCGUI391/Core/GUI_SetFont.c"
#include "../../uCGUI391/Core/GUI_SetLBorder.c"
#include "../../uCGUI391/Core/GUI_SetLineStyle.c"
#include "../../uCGUI391/Core/GUI_SetLUTColor.c"
#include "../../uCGUI391/Core/GUI_SetLUTColorEx.c"
#include "../../uCGUI391/Core/GUI_SetLUTEntry.c"
#include "../../uCGUI391/Core/GUI_SetOrg.c"
#include "../../uCGUI391/Core/GUI_SetPixelIndex.c"
#include "../../uCGUI391/Core/GUI_SetTextAlign.c"
#include "../../uCGUI391/Core/GUI_SetTextMode.c"
#include "../../uCGUI391/Core/GUI_SetTextStyle.c"

#include "../../uCGUI391/Core/GUI2DLib.c"
#include "../../uCGUI391/Core/GUIAlloc.c"
#include "../../uCGUI391/Core/GUICharLine.c"
#include "../../uCGUI391/Core/GUI_FillRect.c"
#include "../../uCGUI391/Core/GUI__IntersectRect.c"
#include "../../uCGUI391/Core/GUI__memset.c"

#include "../../uCGUI391/Core/GUIArc.c"
#include "../../uCGUI391/Core/GUICurs.c"
#include "../../uCGUI391/Core/GUIEncJS.c"
#include "../../uCGUI391/Core/GUIIndex2Color.c"
#include "../../uCGUI391/Core/GUIPolyR.c"
#include "../../uCGUI391/Core/GUIRealloc.c"
#include "../../uCGUI391/Core/GUIStream.c"
#include "../../uCGUI391/Core/GUITask.c"
#include "../../uCGUI391/Core/GUITime.c"
#include "../../uCGUI391/Core/GUI_WaitKey.c"
#include "../../uCGUI391/Core/GUI_Warn.c"
#include "../../uCGUI391/Core/LCD_Rotate180.c"

#include "../../uCGUI391/Core/GUIChar.c"
#include "../../uCGUI391/Core/GUICharM.c"
#include "../../uCGUI391/Core/GUICharP.c"
#include "../../uCGUI391/Core/GUICirc.c"
#include "../../uCGUI391/Core/GUIColor2Index.c"
#include "../../uCGUI391/Core/GUICore.c"
#include "../../uCGUI391/Core/GUIPolyE.c"
#include "../../uCGUI391/Core/GUIPolyM.c"
#include "../../uCGUI391/Core/GUITimer.c"
#include "../../uCGUI391/Core/GUIUC0.c"
#include "../../uCGUI391/Core/GUIVal.c"
#include "../../uCGUI391/Core/GUIValf.c"
#include "../../uCGUI391/Core/GUI_Exec.c"
#include "../../uCGUI391/Core/GUI_FillRectEx.c"
#include "../../uCGUI391/Core/GUI_WaitEvent.c"
#include "../../uCGUI391/Core/LCD.c"

#include "../../uCGUI391/Core/GUI_AddBin.c"
#include "../../uCGUI391/Core/GUI_AddDec.c"
#include "../../uCGUI391/Core/GUI_AddDecMin.c"
#include "../../uCGUI391/Core/GUI_AddDecShift.c"
#include "../../uCGUI391/Core/GUI_AddHex.c"
#include "../../uCGUI391/Core/GUI_AddKeyMsgHook.c"
#include "../../uCGUI391/Core/GUI_ALLOC_AllocInit.c"
#include "../../uCGUI391/Core/GUI_ALLOC_AllocZero.c"
#include "../../uCGUI391/Core/GUI_BMP.c"
#include "../../uCGUI391/Core/GUI_BMP_Serialize.c"
#include "../../uCGUI391/Core/GUI_CalcColorDist.c"
#include "../../uCGUI391/Core/GUI_ClearRectEx.c"
#include "../../uCGUI391/Core/GUI_Color2VisColor.c"
#include "../../uCGUI391/Core/GUI_FillPolygon.c"
#include "../../uCGUI391/Core/GUI__AddSpaceHex.c"
#include "../../uCGUI391/Core/GUI__CalcTextRect.c"
#include "../../uCGUI391/Core/GUI__DivideRound.c"
#include "../../uCGUI391/Core/GUI__DivideRound32.c"
#include "../../uCGUI391/Core/GUI__GetFontSizeY.c"
#include "../../uCGUI391/Core/GUI__GetNumChars.c"
#include "../../uCGUI391/Core/GUI__HandleEOLine.c"
#include "../../uCGUI391/Core/GUI__IntersectRects.c"
#include "../../uCGUI391/Core/GUI__memset16.c"
#include "../../uCGUI391/Core/GUI__Read.c"
#include "../../uCGUI391/Core/GUI__ReduceRect.c"
#include "../../uCGUI391/Core/GUI__SetText.c"
#include "../../uCGUI391/Core/GUI__strcmp.c"
#include "../../uCGUI391/Core/GUI__strlen.c"
#include "../../uCGUI391/Core/GUI__Wrap.c"


#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#include "../../uCGUI391/Core/LCD_API.c"
#include "../../uCGUI391/Core/LCD_DrawBitmap_565.c"
#include "../../uCGUI391/Core/LCD_DrawVLine.c"
#include "../../uCGUI391/Core/LCD_GetColorIndex.c"
#include "../../uCGUI391/Core/LCD_GetEx.c"
#include "../../uCGUI391/Core/LCD_GetNumDisplays.c"
#include "../../uCGUI391/Core/LCD_GetPixelColor.c"
#include "../../uCGUI391/Core/LCD_Index2ColorEx.c"
#include "../../uCGUI391/Core/LCD_L0_Generic.c"
#include "../../uCGUI391/Core/LCD_Mirror.c"
#include "../../uCGUI391/Core/LCD_MixColors256.c"
#include "../../uCGUI391/Core/LCD_SelectLCD.c"
#include "../../uCGUI391/Core/LCD_SetAPI.c"
#include "../../uCGUI391/Core/LCD_SetClipRectEx.c"
#include "../../uCGUI391/Core/LCD_UpdateColorIndices.c"
