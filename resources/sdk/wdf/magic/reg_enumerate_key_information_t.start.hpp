#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_ENUMERATE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x3d4e9a321e16e70)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_ENUMERATE_KEY_INFORMATION.Index", index, 0x40, 0x20, true, 0xaab78ef1d837026e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::key_information_class_t), "_REG_ENUMERATE_KEY_INFORMATION.KeyInformationClass", key_information_class, 0x60, 0x20, true, 0xcb7081180aae8be8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_ENUMERATE_KEY_INFORMATION.KeyInformation", key_information, 0x80, 0x40, true, 0xe9de1c371080513b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_ENUMERATE_KEY_INFORMATION.Length", length, 0xc0, 0x20, true, 0xdef2fb25aa2bf1f0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_ENUMERATE_KEY_INFORMATION.ResultLength", result_length, 0x100, 0x40, true, 0xc464b2c2f7de3e22)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_ENUMERATE_KEY_INFORMATION.CallContext", call_context, 0x140, 0x40, true, 0xd610bb9e7949d7dc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_ENUMERATE_KEY_INFORMATION.ObjectContext", object_context, 0x180, 0x40, true, 0xf927fa693d56300f)
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