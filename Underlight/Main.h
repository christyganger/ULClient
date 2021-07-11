// Header file for Main.cpp

// Copyright Lyra LLC, 1996. All rights reserved. 

#ifndef MAIN_H
#define MAIN_H

#include "Central.h"

#include "MeHelper.h" //mouse event helper, to swipe ME from proc


//////////////////////////////////////////////////////////////////
// Constants

//////////////////////////////////////////////////////////////////
// Function Prototypes

int PASCAL AgentWinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
                        LPSTR lpCmdLine, int nCmdShow);
LRESULT WINAPI WindowProc ( HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam );
LRESULT WINAPI AgentWindowProc ( HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam );
static void ExitCallback (void* value);

<<<<<<< HEAD
bool WindowContainer();
=======
>>>>>>> bc008ab3042ff9b74d47cdda47ce2318311a51db

#endif
