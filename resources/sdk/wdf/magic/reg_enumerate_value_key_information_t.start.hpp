#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_ENUMERATE_VALUE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x42ce18cecf04737b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_ENUMERATE_VALUE_KEY_INFORMATION.Index", index, 0x40, 0x20, true, 0x220b1bc660b789a5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::key_value_information_class_t), "_REG_ENUMERATE_VALUE_KEY_INFORMATION.KeyValueInformationClass", key_value_information_class, 0x60, 0x20, true, 0x12b8339dd3cc9325)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_ENUMERATE_VALUE_KEY_INFORMATION.KeyValueInformation", key_value_information, 0x80, 0x40, true, 0x4bd4933d28abcef8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_ENUMERATE_VALUE_KEY_INFORMATION.Length", length, 0xc0, 0x20, true, 0xf1fc3d066e558b3f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_ENUMERATE_VALUE_KEY_INFORMATION.ResultLength", result_length, 0x100, 0x40, true, 0x71116f508bf988d0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_ENUMERATE_VALUE_KEY_INFORMATION.CallContext", call_context, 0x140, 0x40, true, 0x47f9824cb9d32d52)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_ENUMERATE_VALUE_KEY_INFORMATION.ObjectContext", object_context, 0x180, 0x40, true, 0xe3561f411e92fcea)
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