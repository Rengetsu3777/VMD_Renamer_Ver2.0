#pragma once
#include <iostream>

#define ERROR_FLAG_INDEX 0
#define ERROR_FLAG_DIALOG_TEXT 1

////////////////////////////////////////////////////
// VMD Renamerの変換システムのメイン関数に当たる部分。
////////////////////////////////////////////////////

std::tuple<int, std::string> mainVmdRenamer(const char* vmdPath, const char* csvPath, int transformScale);
