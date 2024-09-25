#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY.CategoryId", category_id, 0x0, 0x20, true, 0xcf65c732ddde95be)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY.AuditId", audit_id, 0x20, 0x20, true, 0x9e10e607a5cb08f8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY.ParameterCount", parameter_count, 0x40, 0x20, true, 0xf4b6b5dac2da6e7a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY.Length", length, 0x60, 0x20, true, 0xca76851e3fa041e8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SE_ADT_PARAMETER_ARRAY.FlatSubCategoryId", flat_sub_category_id, 0x80, 0x10, true, 0x237ef5683e211f6d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SE_ADT_PARAMETER_ARRAY.Type", type, 0x90, 0x10, true, 0x331f9e5edecf5cde)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY.Flags", flags, 0xa0, 0x20, true, 0x63ed1c8133836d78)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct se::adt_parameter_array_entry_t, 32>), "_SE_ADT_PARAMETER_ARRAY.Parameters", parameters, 0xc0, 0x0, true, 0xc4523e4e0accf767)
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