#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WRITE_USN_REASON_INPUT.Flags", flags, 0x0, 0x20, true, 0xfb2f05c6182154ae)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WRITE_USN_REASON_INPUT.UsnReasonToWrite", usn_reason_to_write, 0x20, 0x20, true, 0xe6eaa5b2629ebdbe)
#else
#define _m00
#define _m01
#endif