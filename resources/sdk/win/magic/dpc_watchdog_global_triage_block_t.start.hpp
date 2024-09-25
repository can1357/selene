#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK.Signature", signature, 0x0, 0x20, true, 0x41673b896e7d4b59)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK.Revision", revision, 0x20, 0x10, true, 0xdc711869dd34c46f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK.Size", size, 0x30, 0x10, true, 0xbba211ceb85fc5af)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK.DpcWatchdogProfileOffset", dpc_watchdog_profile_offset, 0x40, 0x10, true, 0xdae7d5acbbc7e78)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK.DpcWatchdogProfileLength", dpc_watchdog_profile_length, 0x60, 0x20, true, 0x8fa0a2a8cc6f9daa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif