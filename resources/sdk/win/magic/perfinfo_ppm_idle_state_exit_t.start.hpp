#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_STATE_EXIT.State", state, 0x0, 0x20, true, 0xc1b33aa339dc25bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_STATE_EXIT.Status", status, 0x20, 0x20, true, 0x833d394c814c328b)
#else
#define _m00
#define _m01
#endif