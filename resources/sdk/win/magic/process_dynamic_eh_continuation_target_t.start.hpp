#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DYNAMIC_EH_CONTINUATION_TARGET.TargetAddress", target_address, 0x0, 0x40, true, 0x2e06d6f5596dd4e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_DYNAMIC_EH_CONTINUATION_TARGET.Flags", flags, 0x40, 0x40, true, 0x659896b4641a57b2)
#else
#define _m00
#define _m01
#endif