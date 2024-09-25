#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_XPF_CONTEXT_INFO.RegisterContextType", register_context_type, 0x0, 0x10, true, 0xe7ca3b9b2eb70862)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_XPF_CONTEXT_INFO.RegisterDataSize", register_data_size, 0x10, 0x10, true, 0x805ce86462e8da7d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_CONTEXT_INFO.MSRAddress", msr_address, 0x20, 0x20, true, 0x5904a8420ca74af8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_CONTEXT_INFO.MmRegisterAddress", mm_register_address, 0x40, 0x40, true, 0xb7982eb4214be217)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif