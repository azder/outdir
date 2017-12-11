#include <iostream.h>
#include <commdlg.h>
#include <windows.h>
#include <mem.h>
void main()
{
LOGFONT lf;
CHOOSEFONT cf;

/* Set all structure fields to zero. */

memset(&cf, 0, sizeof(CHOOSEFONT));

lf.lfHeight=300;

cf.lStructSize = sizeof(CHOOSEFONT);
cf.hwndOwner = 0;//hwnd;
cf.lpLogFont = &lf;
cf.Flags = CF_SCREENFONTS | CF_EFFECTS;
cf.rgbColors = RGB(0, 255, 255); /* light blue */
cf.nFontType = SCREEN_FONTTYPE;

ChooseFont(&cf);
cout <<sizeof(CHOOSEFONT)<<'\n'<<int(lf.lfCharSet);
}