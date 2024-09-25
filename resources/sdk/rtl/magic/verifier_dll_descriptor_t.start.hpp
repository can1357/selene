#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_RTL_VERIFIER_DLL_DESCRIPTOR.DllName", dll_name, 0x0, 0x40, true, 0x27b75d3e8ac00f69)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_DLL_DESCRIPTOR.DllFlags", dll_flags, 0x40, 0x20, true, 0x37cdefed78818318)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_VERIFIER_DLL_DESCRIPTOR.DllAddress", dll_address, 0x80, 0x40, true, 0x7f08b49e78437cd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::verifier_thunk_descriptor_t*), "_RTL_VERIFIER_DLL_DESCRIPTOR.DllThunks", dll_thunks, 0xc0, 0x40, true, 0x4eb642882c8a29e7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif