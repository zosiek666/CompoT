/* 
   File: fn_PrL_handleKeydown.sqf 
   Function: CT_fnc_PrL_handleKeydown 
   Folder: PrefabLibrary 
   Scope: private 
   Author Vitaly'mind'Chizhikov --- v@vlasport.com 
   Part of composition tool 
*/ 
#include "defines.hpp" 

disableSerialization;
private ["_dialog","_key","_case","_categoryList","_prefabList","_contentList","_index","_name","_pointer","_found","_cancel"];
_dialog = findDisplay 25258;
_key = (_this select 0) select 1;
_case = _this select 1;
_categoryList = _dialog displayCtrl 250;
_prefabList = _dialog displayCtrl 251;
_contentList = _dialog displayCtrl 252;
_index = -1; _cancel = true; _pointer = [];
if (_key == DIK_DELETE) then {
	if (_case == "category") then {
		_index = lbCurSel _categoryList;
		if (_index == -1) exitWith {_cancel = true};
		_name = _categoryList lbText _index;
		if (_name == "temporary") exitWith {_cancel = true};
		_pointer = CT_var_prefabs;
		_index = -1;
	};
	if (_case == "prefab") then {
		_index = lbCurSel _prefabList;
		if (_index == -1) exitWith {_cancel = true};
		_name = _prefabList lbText _index;
		_index = -1;
	};
	if (_case == "content") then {
		_index = lbCurSel _prefabList;
		if (_index == -1) exitWith {_cancel = true};
		_name = _prefabList lbText _index;
		_index = lbCurSel _contentList;
		if (_index == -1) exitWith {_cancel = true};
	};
	{
		if ((_name == (_x select 0)) AND (_case == "category")) exitWith {_index = _forEachindex};
		{
			if ((_name == (_x select 0)) AND (_case == "prefab")) exitWith {_index = _forEachindex};
			if ((_name == (_x select 0)) AND (_case == "content")) exitWith {_pointer = (_x select 1)};
		} forEach (_x select 1);
		if ((_index != -1) AND (_case == "prefab")) exitWith {_pointer = (_x select 1)};
	} forEach CT_var_prefabs;
	if (_index != -1) then {
		_pointer deleteAt _index;
		call CT_fnc_PrL_fillCategories;
	};
};
if ((_key == DIK_ARROWUP) AND HK_SHIFT) then {
	-1 call CT_fnc_PrL_move;
};
if ((_key == DIK_ARROWDOWN) AND HK_SHIFT) then {
	1 call CT_fnc_PrL_move;
};