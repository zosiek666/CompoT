/* 
   File: fn_PrL_fillPrefabs.sqf 
   Function: CT_fnc_PrL_fillPrefabs 
   Folder: PrefabLibrary 
   Scope: private 
   Author Vitaly'mind'Chizhikov --- v@vlasport.com 
   Part of composition tool 
*/ 
#include "defines.hpp" 

disableSerialization;
private ["_dialog","_prefabList","_categoryList","_contentList","_index","_data"];
_dialog = findDisplay 25258;
_categoryList = _dialog displayCtrl 250;
_prefabList = _dialog displayCtrl 251;
_contentList = _dialog displayCtrl 252;
lbClear _prefabList;
lbClear _contentList;
_index = lbCurSel _categoryList;
if (_index == -1) exitWith {};
_data = _categoryList lbData _index;
_data = call compile _data;
{
	_index = _prefabList lbAdd (_x select 0);
	_prefabList lbSetData [_index, str(_x select 1)];
} forEach _data;
call CT_fnc_PrL_fillContent;