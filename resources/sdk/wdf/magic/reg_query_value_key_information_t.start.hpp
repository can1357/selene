#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_VALUE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x9554c920e5b2e22e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_QUERY_VALUE_KEY_INFORMATION.ValueName", value_name, 0x40, 0x40, true, 0x734c6d7139c1cd8f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::key_value_information_class_t), "_REG_QUERY_VALUE_KEY_INFORMATION.KeyValueInformationClass", key_value_information_class, 0x80, 0x20, true, 0xc60188e560843612)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_VALUE_KEY_INFORMATION.KeyValueInformation", key_value_information, 0xc0, 0x40, true, 0xabd053188cc771fd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_QUERY_VALUE_KEY_INFORMATION.Length", length, 0x100, 0x20, true, 0x98dd61210486f7e8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_QUERY_VALUE_KEY_INFORMATION.ResultLength", result_length, 0x140, 0x40, true, 0x9d8622a3689a4512)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_VALUE_KEY_INFORMATION.CallContext", call_context, 0x180, 0x40, true, 0x8897e0b18c6d8ef6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_VALUE_KEY_INFORMATION.ObjectContext", object_context, 0x1c0, 0x40, true, 0x7fda49c62376e951)
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