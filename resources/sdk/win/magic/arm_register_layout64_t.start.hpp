#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "ArmRegisterLayout64.NGRN", ngrn, 0x40, 0x8, true, 0x9e740d7628a5f8d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "ArmRegisterLayout64.NSRN", nsrn, 0x48, 0x8, true, 0x7807f5a8d171630a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ArmRegisterLayout64.Entries", entries, 0x50, 0x10, true, 0x12f7d3fec02263c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ArmRegisterLayout64.NSAA", nsaa, 0x60, 0x20, true, 0xaa687e5aed42c94c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ArmRegisterLayout64.CurrentOffset", current_offset, 0x80, 0x20, true, 0x7bdb393610962553)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ArmRegisterLayout64.RunCount", run_count, 0xa0, 0x20, true, 0x9c8f3db61ec4af14)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ArmRegisterLayout64.InRun", in_run, 0xc0, 0x20, true, 0xcfe21c4768531e5d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ArmRegisterLayout64.TotalSlots", total_slots, 0xe0, 0x10, true, 0x362632ad14cfc5cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif