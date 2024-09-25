#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_RUNTIME_FLAGS_INFORMATION.Size", size, 0x0, 0x20, true, 0xe1776e9e7514579)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_RUNTIME_FLAGS_INFORMATION.ProviderFlags", provider_flags, 0x20, 0x20, true, 0x6b57f8e8da3165b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_RUNTIME_FLAGS_INFORMATION.DebugFlags", debug_flags, 0x40, 0x20, true, 0x28f586e95f504ba6)
#else
#define _m00
#define _m01
#define _m02
#endif