/* 
   File: fn_ObL_renameCat.sqf 
   Function: CT_fnc_ObL_renameCat 
   Folder: ObjectLibrary 
   Scope: private 
   Author Vitaly'mind'Chizhikov --- v@vlasport.com 
   Part of composition tool 
*/ 
#include "defines.hpp" 

disableSerialization;
private ["_dialog","_newName","_newcatEdit","_allCategories","_categoryList","_oldName","_index","_pointer"];
_dialog = findDisplay 25250;
_newCatEdit = _dialog displayCtrl 401;
_categoryList = _dialog displayCtrl 251;
_newName = ctrlText _newcatEdit;
if (_newName == "") exitWith {};
_index = lbCurSel _categoryList;
if (_index == -1) exitWith {};
_oldName = _categoryList lbText _index;
if (_oldName == _newName) exitWith {};
if (_oldName == "temporary") exitWith {};
_allCategories = []; _pointer = [];
{
	_allCategories pushBack (_x select 0);
	if ((_x select 0) == _oldName) then {_pointer = _x};
} forEach CT_var_objects;
if (_newName in _allCategories) exitWith {};
_pointer set [0, _newName];

call CT_fnc_ObL_fillCategories;