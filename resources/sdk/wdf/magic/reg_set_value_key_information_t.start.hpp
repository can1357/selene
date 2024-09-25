#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_VALUE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0x52c870ec1dd1af8d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_SET_VALUE_KEY_INFORMATION.ValueName", value_name, 0x40, 0x40, true, 0x782289f8b6c90041)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_SET_VALUE_KEY_INFORMATION.TitleIndex", title_index, 0x80, 0x20, true, 0x58fab5340dc1a5f7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_SET_VALUE_KEY_INFORMATION.Type", type, 0xa0, 0x20, true, 0x5e21b498970497d5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_VALUE_KEY_INFORMATION.Data", data, 0xc0, 0x40, true, 0xd1f0e07c963aee88)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_SET_VALUE_KEY_INFORMATION.DataSize", data_size, 0x100, 0x20, true, 0x1cf3342d3dc32cbe)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_VALUE_KEY_INFORMATION.CallContext", call_context, 0x140, 0x40, true, 0x3e66afe844588d8b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_SET_VALUE_KEY_INFORMATION.ObjectContext", object_context, 0x180, 0x40, true, 0x5665441a5126e380)
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