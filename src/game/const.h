#ifndef TOMB1MAIN_GAME_CONST_H
#define TOMB1MAIN_GAME_CONST_H

#define ONE_DEGREE 182
#define NUM_PU 3
#define NUM_SLOTS 8
#define MAX_ROOMS 1024
#define MAX_FRAMES 10
#define NUMBER_ITEMS 256
#define MAX_SECRETS 16
#define MAX_SAVEGAME_BUFFER (10 * 1024)
#define GRAVITY 6
#define FASTFALL_SPEED 128
#define LARA_HITPOINTS 1000
#define LARA_AIR 1800
#define LARA_TURN_UNDO (2 * ONE_DEGREE) // = 364
#define LARA_TURN_RATE ((ONE_DEGREE / 4) + LARA_TURN_UNDO) // = 409
#define LARA_SLOW_TURN ((ONE_DEGREE * 2) + LARA_TURN_UNDO) // = 728
#define LARA_JUMP_TURN ((ONE_DEGREE * 1) + LARA_TURN_UNDO) // = 546
#define LARA_MED_TURN ((ONE_DEGREE * 4) + LARA_TURN_UNDO) // = 1092
#define LARA_FAST_TURN ((ONE_DEGREE * 6) + LARA_TURN_UNDO) // = 1456
#define LARA_LEAN_UNDO ONE_DEGREE
#define LARA_DEF_ADD_EDGE (5 * ONE_DEGREE) // = 910
#define LARA_LEAN_RATE 273
#define LARA_LEAN_MAX ((10 * ONE_DEGREE) + LARA_LEAN_UNDO) // = 2002
#define LARA_LEAN_MAX_UW (LARA_LEAN_MAX * 2)
#define LARA_FASTFALL_SPEED (FASTFALL_SPEED + 3) // = 131
#define LARA_RAD 100 // global radius of Lara
#define LARA_HITE 762 // global height of Lara - less than 3/4 block
#define UW_MAXSPEED 200
#define UW_RADIUS 300
#define UW_HITE 400
#define UW_WALLDEFLECT (2 * ONE_DEGREE) // = 364
#define SURF_MAXSPEED 60
#define SURF_RADIUS 100
#define SURF_HITE 700
#define WATER_FRICTION 6
#define DAMAGE_START 140
#define DAMAGE_LENGTH 14
#define NO_ITEM -1
#define SHOTGUN_AMMO_CLIP 6
#define UNDERWATER 1
#define SFX_ALWAYS 2
#define NUM_EFFECTS 100
#define DEATH_WAIT (10 * 30)
#define DEATH_WAIT_MIN (2 * 30)
#define MAX_HEAD_ROTATION (50 * ONE_DEGREE) // = 9100
#define MAX_HEAD_TILT (22 * ONE_DEGREE) // = 4004
#define HEAD_TURN (4 * ONE_DEGREE) // = 728
#define HEAD_TURN_SURF (3 * ONE_DEGREE) // = 546
#define MIN_HEAD_TILT (-42 * ONE_DEGREE) // = -7644
#define WALL_L 1024
#define WALL_SHIFT 10
#define STEP_L 256
#define STEPUP_HEIGHT ((STEP_L * 3) / 2) // = 384
#define CAM_A_HANG 0
#define CAM_E_HANG (-60 * ONE_DEGREE) // = -10920
#define W2V_SHIFT 14
#define W2V_SCALE (1 << W2V_SHIFT)
#define PHD_ONE 0x10000
#define FOLLOW_CENTRE 1
#define NO_CHUNKY 2
#define CHASE_OBJECT 3
#define DEFAULT_RADIUS 10
#define DONT_TARGET (-16384)
#define NO_HEIGHT (-32512)
#define NO_BAD_POS (-NO_HEIGHT)
#define NO_BAD_NEG NO_HEIGHT
#define BAD_JUMP_CEILING ((STEP_L * 3) / 4) // = 192
#define NOT_ACTIVE 0
#define ACTIVE 1
#define DEACTIVATED 2
#define INVISIBLE 3
#define MAX_STRING_SIZE 64
#define MAX_TEXT_STRINGS 32
#define TEXT_HEIGHT 11
#define FRAME_BOUND_MIN_X 0
#define FRAME_BOUND_MAX_X 1
#define FRAME_BOUND_MIN_Y 2
#define FRAME_BOUND_MAX_Y 3
#define FRAME_BOUND_MIN_Z 4
#define FRAME_BOUND_MAX_Z 5
#define FRAME_POS_X 6
#define FRAME_POS_Y 7
#define FRAME_POS_Z 8
#define SLOPE_DIF 60
#define VAULT_ANGLE (30 * ONE_DEGREE)
#define HANG_ANGLE (35 * ONE_DEGREE)

#endif
