#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0xd1a9b66ad4ef4d2d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::key_information_class_t), "_REG_QUERY_KEY_INFORMATION.KeyInformationClass", key_information_class, 0x40, 0x20, true, 0x59d7c36931f6c4e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_INFORMATION.KeyInformation", key_information, 0x80, 0x40, true, 0x8634c8fd49aea77d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_QUERY_KEY_INFORMATION.Length", length, 0xc0, 0x20, true, 0x25c89cd6eb8214d4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_QUERY_KEY_INFORMATION.ResultLength", result_length, 0x100, 0x40, true, 0xd3b77a54734d154d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_INFORMATION.CallContext", call_context, 0x140, 0x40, true, 0x8f2bce14be0802bb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_KEY_INFORMATION.ObjectContext", object_context, 0x180, 0x40, true, 0x2cd483b0ec1e0832)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif