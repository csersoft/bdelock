#include "stdafx.h"


int main(int argc, char *argv[])
{
  if (argc > 1)
  {
    char chDrive[16], chTemp[256];
    char *lpChar;

    strcpy_s(chDrive, argv[1]);
    lpChar = strchr(chDrive, '\\');
    if (lpChar) *lpChar = 0;

    sprintf_s(chTemp, "manage-bde.exe -lock %s", chDrive);

    WinExec(chTemp, SW_HIDE);
  }

  return 0;
}

