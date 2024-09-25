#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SET_DEVICES_STATE.SystemState", system_state, 0x0, 0x20, true, 0xf759b0b8988e17a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_SET_DEVICES_STATE.Waking", waking, 0x20, 0x8, true, 0xd57834e8c15abf8f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_SET_DEVICES_STATE.Shutdown", shutdown, 0x28, 0x8, true, 0xcd3f09129ab5aa80)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_SET_DEVICES_STATE.IrpMinor", irp_minor, 0x30, 0x8, true, 0x81c2063fd9077d9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif