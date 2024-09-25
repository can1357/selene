#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KBUGCHECK_REASON_CALLBACK_RECORD.Entry", entry, 0x0, 0x80, true, 0x3085783e7ba5ff9e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkbugcheck_reason_callback_routine_t ), "_KBUGCHECK_REASON_CALLBACK_RECORD.CallbackRoutine", callback_routine, 0x80, 0x40, true, 0xfed45a21df5716cd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_KBUGCHECK_REASON_CALLBACK_RECORD.Component", component, 0xc0, 0x40, true, 0xcc570deaa3d1fac5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_REASON_CALLBACK_RECORD.Checksum", checksum, 0x100, 0x40, true, 0xb5ea98a37062faa9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kbugcheck_callback_reason_t), "_KBUGCHECK_REASON_CALLBACK_RECORD.Reason", reason, 0x140, 0x20, true, 0x985cc4be9a307c8a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KBUGCHECK_REASON_CALLBACK_RECORD.State", state, 0x160, 0x8, true, 0x5229a71f2ddcb5e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif