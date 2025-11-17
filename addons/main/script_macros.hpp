#include "\x\cba\addons\main\script_macros.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

// special agent variants used by the Civilian Presence system
#define CREATE_AGENT(type)\
class CivilianPresence_##type##:type\
{\
    scope = 1;\
    scopeCurator = 0;\
    fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";\
    fsmFormation = "";\
}
