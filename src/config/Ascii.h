// Copyright (c) 2019, The CRYGCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n                                             \n"
"   _____             _____  _____      _       \n"
"  / ____|           / ____|/ ____|    (_)      \n"
" | |     _ __ _   _| |  __| |     ___  _ _ __  \n"
" | |    | '__| | | | | |_ | |    / _ \| | '_ \ \n"
" | |____| |  | |_| | |__| | |___| (_) | | | | |\n"
"  \_____|_|   \__, |\_____|\_____\___/|_|_| |_|\n"
"               __/ |                           \n"
"              |___/                            \n";

const std::string nonWindowsAsciiArt = 
"\n                                                              \n"
" ██████╗██████╗ ██╗   ██╗ ██████╗  ██████╗ ██████╗ ██╗███╗   ██╗\n"
"██╔════╝██╔══██╗╚██╗ ██╔╝██╔════╝ ██╔════╝██╔═══██╗██║████╗  ██║\n"
"██║     ██████╔╝ ╚████╔╝ ██║  ███╗██║     ██║   ██║██║██╔██╗ ██║\n"
"██║     ██╔══██╗  ╚██╔╝  ██║   ██║██║     ██║   ██║██║██║╚██╗██║\n"
"╚██████╗██║  ██║   ██║   ╚██████╔╝╚██████╗╚██████╔╝██║██║ ╚████║\n"
" ╚═════╝╚═╝  ╚═╝   ╚═╝    ╚═════╝  ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
