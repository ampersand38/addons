if ("ACE_SpraypaintGreen" in items player) then {
params ["_player", "_tagNum"];
_tag = 'tft_ace\UI\clearTags\' + str (floor (random _tagNum)) + '.paa';
[_player, _tag] call ace_tagging_fnc_tag;
};
