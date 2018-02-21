#pragma once
#ifndef MYLIBAPI
#define MYLIBAPI extern "C" __declspec(dllimport)
#endif
MYLIBAPI int g_result;
MYLIBAPI int Add(int nLeft, int nRight);