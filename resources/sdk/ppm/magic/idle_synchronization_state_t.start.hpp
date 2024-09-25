#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PPM_IDLE_SYNCHRONIZATION_STATE.AsLong", as_long, 0x0, 0x20, true, 0x92c57dc7dc7d36cc)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int24_t), "_PPM_IDLE_SYNCHRONIZATION_STATE.RefCount", ref_count, 0x0, 0x18, true, 0xe428de76335a8b5c, 24, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PPM_IDLE_SYNCHRONIZATION_STATE.State", state, 0x18, 0x8, true, 0xb2548d2f54decd7, 8, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif