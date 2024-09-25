#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY_EX.CategoryId", category_id, 0x0, 0x20, true, 0xa463436c4b93d200)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY_EX.AuditId", audit_id, 0x20, 0x20, true, 0x7b2dd21ed9a20e1c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY_EX.Version", version, 0x40, 0x20, true, 0x5908a993ebcff625)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY_EX.ParameterCount", parameter_count, 0x60, 0x20, true, 0x7c8b9242e1590fb5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY_EX.Length", length, 0x80, 0x20, true, 0x33e8c2adc3d4a964)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SE_ADT_PARAMETER_ARRAY_EX.FlatSubCategoryId", flat_sub_category_id, 0xa0, 0x10, true, 0x3599591ad50a43c0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SE_ADT_PARAMETER_ARRAY_EX.Type", type, 0xb0, 0x10, true, 0xe76dd48f42d23fa7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY_EX.Flags", flags, 0xc0, 0x20, true, 0xffbfb8840e8a255a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct se::adt_parameter_array_entry_t, 32>), "_SE_ADT_PARAMETER_ARRAY_EX.Parameters", parameters, 0x100, 0x0, true, 0xb89164873a779808)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif