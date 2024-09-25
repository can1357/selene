#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_FAULT_INFORMATION.FaultFlags", fault_flags, 0x0, 0x20, true, 0x9036abe052b7e42c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_FAULT_INFORMATION.AdditionalInfo", additional_info, 0x20, 0x20, true, 0xa0d1d6c076a0a448)
#else
#define _m00
#define _m01
#endif