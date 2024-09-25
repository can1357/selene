#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER.Version", version, 0x0, 0x10, true, 0x8f4934eca0ade12c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER.RegisterContextType", register_context_type, 0x10, 0x10, true, 0xb0a31577e3d2b5a1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER.RegisterArraySize", register_array_size, 0x20, 0x20, true, 0xc53aaca3f84678ab)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER.RegisterArray", register_array, 0x40, 0x8, true, 0x872ca3895b47fa53)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif