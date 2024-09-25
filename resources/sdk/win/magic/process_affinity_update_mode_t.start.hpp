#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_AFFINITY_UPDATE_MODE.Flags", flags, 0x0, 0x20, true, 0x5a27b176716db86b)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_AFFINITY_UPDATE_MODE.EnableAutoUpdate", enable_auto_update, 0x0, 0x1, true, 0x36b08a2b1d366b26, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_AFFINITY_UPDATE_MODE.Permanent", permanent, 0x1, 0x1, true, 0x31444358f4a3e964, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif