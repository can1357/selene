#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KBUGCHECK_CALLBACK_RECORD.Entry", entry, 0x0, 0x80, true, 0xf1f40257691ce26a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_KBUGCHECK_CALLBACK_RECORD.CallbackRoutine", callback_routine, 0x80, 0x40, true, 0x6ade50e3624e103d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_CALLBACK_RECORD.Buffer", buffer, 0xc0, 0x40, true, 0xd28cb8ac816b3a38)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_CALLBACK_RECORD.Length", length, 0x100, 0x20, true, 0xa232a70a87ce01e1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_KBUGCHECK_CALLBACK_RECORD.Component", component, 0x140, 0x40, true, 0xbdc716dc7d1df1cf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_CALLBACK_RECORD.Checksum", checksum, 0x180, 0x40, true, 0x33e5e13914396672)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KBUGCHECK_CALLBACK_RECORD.State", state, 0x1c0, 0x8, true, 0xa7be6da3a367726e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif