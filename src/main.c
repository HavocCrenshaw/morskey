/* ========================================================================== *\



                                           _              
                  _ __ ___   ___  _ __ ___| | _____ _   _ 
                 | '_ ` _ \ / _ \| '__/ __| |/ / _ \ | | |
                 | | | | | | (_) | |  \__ \   <  __/ |_| |
                 |_| |_| |_|\___/|_|  |___/_|\_\___|\__, |
                                                    |___/ 

                File: src/main.c
                Author: Havoc Crenshaw
                Description: Entry point of the Application
                Created: 11/29/2025 6:52 PM
                
                Copyright (C) 2025 Havoc Crenshaw.

                This software is licensed under the MIT License.
                See the LICENSE file for details.



\* ========================================================================== */



/* ===== Definitions ======================================================== */



#ifdef _WIN64

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX // Kind of just turning this off for convention.

// Target Windows 10+
#define WINVER       0x0A00
#define _WIN32_WINNT 0x0A00

#endif // _WIN64



/* ======================================================== Definitions ===== */



/* ===== Includes =========================================================== */



#ifdef _WIN64

#include <windows.h>

#endif // _WIN64

#ifdef __linux__

#include <X11/Xlib.h>

#endif // __linux__



/* =========================================================== Includes ===== */



/* ===== Function Definitions =============================================== */



#ifdef _WIN64

int WINAPI wWinMain( _In_ HINSTANCE app_instance_handle,
                     _In_opt_ HINSTANCE prev_app_instance_handle,
                     _In_ LPWSTR args,
                     _In_ int window_presentation ) {

        UNREFERENCED_PARAMETER( app_instance_handle );
        UNREFERENCED_PARAMETER( prev_app_instance_handle );
        UNREFERENCED_PARAMETER( args );
        UNREFERENCED_PARAMETER( window_presentation );

        return 0;

}

#endif // _WIN64

#ifdef __linux__

int main() {
        return 0;
}

#endif // __linux__



/* =============================================== Function Definitions ===== */



/* ===== EOF ====================================================== EOF ===== */
