#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUAL_STORAGE_SET_BEHAVIOR_INPUT.Size", size, 0x0, 0x20, true, 0x984f3195544b48bd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::virtual_storage_behavior_code_t), "_VIRTUAL_STORAGE_SET_BEHAVIOR_INPUT.BehaviorCode", behavior_code, 0x20, 0x20, true, 0x2f404b84c0a2e28c)
#else
#define _m00
#define _m01
#endif