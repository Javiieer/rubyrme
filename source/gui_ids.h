//////////////////////////////////////////////////////////////////////
// This file is part of Remere's Map Editor
//////////////////////////////////////////////////////////////////////
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//////////////////////////////////////////////////////////////////////
// $URL: http://svn.rebarp.se/svn/RME/trunk/source/gui_ids.h $
// $Id: gui_ids.h 301 2010-02-23 19:27:39Z admin $

#ifndef RME_COMMON_H_
#define RME_COMMON_H_

// Enums

enum {
	SELECT_CURRENT_FLOOR,
	SELECT_ALL_FLOORS,
	SELECT_VISIBLE_FLOORS,
};

enum BrushShape {
	BRUSHSHAPE_CIRCLE,
	BRUSHSHAPE_SQUARE,
};

enum EditorMode {
	SELECTION_MODE,
	DRAWING_MODE,
};

// Window IDs
enum
{
    MAIN_FRAME_MENU = wxID_HIGHEST + 1,

	MAP_WINDOW_HSCROLL = MAIN_FRAME_MENU + 1000,
	MAP_WINDOW_VSCROLL,
	MAP_WINDOW_GEM,

	MAP_POPUP_MENU_CUT,
	MAP_POPUP_MENU_COPY,
	MAP_POPUP_MENU_COPY_POSITION,
	MAP_POPUP_MENU_PASTE,
	MAP_POPUP_MENU_DELETE,

	MAP_POPUP_MENU_BROWSE_TILE,

	MAP_POPUP_MENU_SWITCH_DOOR,
	MAP_POPUP_MENU_ROTATE,
	MAP_POPUP_MENU_GOTO,
	MAP_POPUP_MENU_SELECT_RAW_BRUSH,
	MAP_POPUP_MENU_SELECT_CREATURE_BRUSH,
	MAP_POPUP_MENU_SELECT_SPAWN_BRUSH,
	MAP_POPUP_MENU_SELECT_GROUND_BRUSH,
	MAP_POPUP_MENU_SELECT_DOODAD_BRUSH,
	MAP_POPUP_MENU_SELECT_DOOR_BRUSH,
	MAP_POPUP_MENU_SELECT_WALL_BRUSH,
	MAP_POPUP_MENU_SELECT_TABLE_BRUSH,
	MAP_POPUP_MENU_SELECT_CARPET_BRUSH,
	MAP_POPUP_MENU_SELECT_HOUSE_BRUSH,
	MAP_POPUP_MENU_PROPERTIES,

	CONTAINER_POPUP_MENU_ADD,
	CONTAINER_POPUP_MENU_EDIT,
	CONTAINER_POPUP_MENU_REMOVE,

	EDIT_TOWNS_LISTBOX,
	EDIT_TOWNS_ADD,
	EDIT_TOWNS_REMOVE,
	EDIT_TOWNS_SELECT_TEMPLE,

	JUMP_DIALOG_TEXT,
	JUMP_DIALOG_LIST,

	REPLACE_DIALOG_FIND_TEXT,
	REPLACE_DIALOG_FIND_LIST,
	REPLACE_DIALOG_WITH_TEXT,
	REPLACE_DIALOG_WITH_LIST,

	MAP_STATISTICS_EXPORT_XML,

	EXTENSIONS_OPEN_FOLDER_BUTTON,

	MAP_WINDOW_FILE_BUTTON,

	PALETTE_ITEM_CHOICEBOOK,
	PALETTE_CHOICEBOOK,

	PALETTE_HOUSE_TOWN_CHOICE,
	PALETTE_HOUSE_LISTBOX,
	PALETTE_HOUSE_ADD_HOUSE,
	PALETTE_HOUSE_EDIT_HOUSE,
	PALETTE_HOUSE_REMOVE_HOUSE,
	PALETTE_HOUSE_BRUSH_BUTTON,
	PALETTE_HOUSE_SELECT_EXIT_BUTTON,

	PALETTE_WAYPOINT_LISTBOX,
	PALETTE_WAYPOINT_ADD_WAYPOINT,
	PALETTE_WAYPOINT_REMOVE_WAYPOINT,

	PALETTE_DOODAD_USE_THICKNESS,
	PALETTE_DOODAD_SLIDER,
	PALETTE_BRUSHSHAPE_SQUARE,
	PALETTE_BRUSHSHAPE_CIRCLE,

	PALETTE_TERRAIN_OPTIONAL_BORDER_TOOL,
	PALETTE_TERRAIN_ERASER,
	PALETTE_TERRAIN_PZ_TOOL,
	PALETTE_TERRAIN_NOPVP_TOOL,
	PALETTE_TERRAIN_NOLOGOUT_TOOL,
	PALETTE_TERRAIN_PVPZONE_TOOL,

	PALETTE_CREATURE_TILESET_CHOICE,
	PALETTE_CREATURE_LISTBOX,
	PALETTE_CREATURE_BRUSH_BUTTON,
	PALETTE_SPAWN_BRUSH_BUTTON,
	PALETTE_CREATURE_SPAWN_TIME,
	PALETTE_CREATURE_SPAWN_SIZE,

	PALETTE_TERRAIN_NORMAL_DOOR,
	PALETTE_TERRAIN_LOCKED_DOOR,
	PALETTE_TERRAIN_MAGIC_DOOR,
	PALETTE_TERRAIN_QUEST_DOOR,
	PALETTE_TERRAIN_HATCH_DOOR,
	PALETTE_TERRAIN_WINDOW_DOOR,

	PALETTE_TERRAIN_BRUSHSIZE_0,
	PALETTE_TERRAIN_BRUSHSIZE_1,
	PALETTE_TERRAIN_BRUSHSIZE_2,
	PALETTE_TERRAIN_BRUSHSIZE_4,
	PALETTE_TERRAIN_BRUSHSIZE_6,
	PALETTE_TERRAIN_BRUSHSIZE_8,
	PALETTE_TERRAIN_BRUSHSIZE_11,

	MAP_PROPERTIES_VERSION,

	ITEM_PROPERTIES_GENERAL_TAB,
	ITEM_PROPERTIES_CONTAINER_TAB,
	ITEM_PROPERTIES_ADVANCED_TAB,

	ITEM_PROPERTIES_ADD_ATTRIBUTE,
	ITEM_PROPERTIES_REMOVE_ATTRIBUTE,

	LIVE_CHAT_TEXTBOX,

	ABOUT_RUN_TETRIS,
	ABOUT_RUN_SNAKE,
	ABOUT_VIEW_LICENSE,

	PANE_MAIN,
	PANE_PROPERTIES,
	PANE_ADVANCED_GRAPHICS,

	PALETTE_DELAYED_REFRESH_TIMER,
	PALETTE_LAYOUT_FIX_TIMER,
};

#endif
