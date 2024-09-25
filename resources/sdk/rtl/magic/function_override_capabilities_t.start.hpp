#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 40>), "_RTL_FUNCTION_OVERRIDE_CAPABILITIES.AMD64Capabilities", amd64_capabilities, 0x0, 0x0, false, 0xa4abda892016269c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 40>), "_RTL_FUNCTION_OVERRIDE_CAPABILITIES.AMD64KernelCapabilities", amd64_kernel_capabilities, 0x0, 0x0, false, 0x9a2365339d508113)
#else
#define _m00
#define _m01
#endif