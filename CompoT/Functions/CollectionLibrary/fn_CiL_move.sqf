/* 
   File: fn_CiL_move.sqf 
   Function: CT_fnc_CiL_move 
   Folder: CollectionLibrary 
   Scope: private 
   Author Vitaly'mind'Chizhikov --- v@vlasport.com 
   Part of composition tool 
*/ 
#include "defines.hpp" 

disableSerialization;
private ["_dialog","_curList","_list","_index","_direction","_done","_pointer","_name","_currentPos","_targetPos","_shift"];
_dialog = findDisplay 25257;
_direction = _this;
_curList = CT_var_CiL_selection;
if (_curList == "collection") then {
	_list = _dialog displayCtrl 251;
};
if (_curList == "category") then {
	_list = _dialog displayCtrl 250;
};
if (_curList == "content") exitWith {};
_index = lbCurSel _list;
if (_index == -1) exitWith {};
_name = _list lbText _index;
_pointer = [];
_done = false;
_currentPos = -1;
{
	if (_curList == "category") then {
		if ((_x select 0) == _name) then {
			_done = true;
			_currentPos = _forEachIndex;
		};
	};
	if (_done) exitWith {};
	_pointer = _x select 1;
	{
		if (_curList == "collection") then {
			if ((_x select 0) == _name) then {
				_done = true;
				_currentPos = _forEachIndex;
			};
		};
		if (_done) exitWith {};
	} forEach (_x select 1);
} forEach CT_var_collections;
if (_currentPos == -1) exitWith {};

_targetPos = _currentPos + _direction;

if (_curList == "category") then {
	_targetPos = _targetPos max 0 min (count CT_var_collections - 1);
} else {
	_targetPos = _targetPos max 0 min (count _pointer - 1);
};
if (_targetPos == _currentPos) exitWith {};

_shift = {
	private ["_arr","_oldPos","_newPos","_elem","_tmpArr"];
	_arr = _this select 0;
	_oldPos = _this select 1;
	_newPos = _this select 2;
	_elem = _arr deleteAt _oldPos;
	_tmpArr = + _arr;
	_arr deleteRange [0, count _arr];
	if (_newPos > 0) then {_arr append (_tmpArr select [0, _newPos])};
	_arr pushBack _elem;
	_arr append (_tmpArr select [_newPos, count _tmpArr]);
};
if (_curList == "category") then {
	[CT_var_collections, _currentPos, _targetPos] call _shift;
} else {
	[_pointer, _currentPos, _targetPos] call _shift;
};
call CT_fnc_CiL_fillCategories;