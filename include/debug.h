#ifndef GUARD_DEBUG_H
#define GUARD_DEBUG_H

<<<<<<< HEAD
void Debug_ShowMainMenu(void);
extern const u8 Debug_FlagsAndVarNotSetBattleConfigMessage[];
=======
// Debug options
#define TX_DEBUG_SYSTEM_ENABLE         TRUE               // Enables a overworld debug menu for changing flags, variables, giving pokemon and more, accessed by holding R and pressing START while in the overworld by default.
#define TX_DEBUG_SYSTEM_HELD_KEYS      (R_BUTTON)         // The keys required to be held to open the debug menu.
#define TX_DEBUG_SYSTEM_TRIGGER_EVENT  pressedStartButton // The event that opens the menu when holding the key(s) defined in DEBUG_SYSTEM_HELD_KEYS.
#define TX_DEBUG_SYSTEM_IN_MENU        FALSE              // Replaces the overworld debug menu button combination with a start menu entry (above Pokédex).


void Debug_ShowMainMenu(void);
void Debug_ReShowBattleDebugMenu(void);
>>>>>>> 4f6139360b9cdb2352d392655e6eabaceba1512f

extern EWRAM_DATA bool8 gIsDebugBattle;
extern EWRAM_DATA u32 gDebugAIFlags;

#endif // GUARD_DEBUG_H
