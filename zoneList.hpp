#include "tb_defines.hpp"
//Mission: tb_Anthrakia_Docks
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,   	{5}    		, {}    , 1		 , {}        , 0    , "%3" },

{ 2, TEAM_RED, 		SPAWN_XRAY,   	{11}   		, {}    , 1      , {}        , 0    , "%3" },

{ 3, TEAM_NEUTRAL, 	SPAWN_INSTANT,  {}     		, {}    , 1      , {1, 7}    , 2    , "Forward Base" },

{ 4, TEAM_NEUTRAL, 	SPAWN_INSTANT,	{}			, {}    , 1      , {2, 9}    , 2    , "Forward Base" },

{ 5, TEAM_BLUE, 	SPAWN_NEVER,    {1,6}  		, {}    , 1      , {}        , 0    , "Military Base" },

{ 6, TEAM_BLUE, 	SPAWN_NEVER,    {5,7}      	, {}   	, 1      , {}        , 0    , "Transmitter" },

{ 7, TEAM_NEUTRAL, 	SPAWN_NEVER,    {6,8}      	, {}   	, 1      , {}        , 0    , "Old Outpost" },

{ 8, TEAM_NEUTRAL, 	SPAWN_NEVER,    {7,9}		, {}    , 1      , {}        , 0    , "Air Station Mike-26" },

{ 9, TEAM_NEUTRAL, 	SPAWN_NEVER,    {8,10}		, {}    , 1      , {}        , 0    , "Village" },

{ 10, TEAM_RED, 	SPAWN_NEVER,    {9,11}		, {}    , 1      , {}        , 0    , "Camp Maxwell" },

{ 11, TEAM_RED, 	SPAWN_NEVER,    {2,10}		, {}    , 1      , {}        , 0    , "Agios Ioannis" },

};
