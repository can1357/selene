#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_IMPERSONATION_STATE.Token", token, 0x0, 0x40, true, 0x8219184ad129981)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_IMPERSONATION_STATE.CopyOnOpen", copy_on_open, 0x40, 0x8, true, 0xa997e78de859284c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_IMPERSONATION_STATE.EffectiveOnly", effective_only, 0x48, 0x8, true, 0x9364c4a23ac5eeb3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum sec::impersonation_level_t), "_SE_IMPERSONATION_STATE.Level", level, 0x60, 0x20, true, 0xe5394d405fc78025)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif