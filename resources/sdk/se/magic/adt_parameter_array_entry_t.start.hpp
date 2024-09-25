#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum se::adt_parameter_type_t), "_SE_ADT_PARAMETER_ARRAY_ENTRY.Type", type, 0x0, 0x20, true, 0xdd3595a24946fbdc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_ADT_PARAMETER_ARRAY_ENTRY.Length", length, 0x20, 0x20, true, 0x5b1158e4997bed89)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_SE_ADT_PARAMETER_ARRAY_ENTRY.Data", data, 0x40, 0x80, true, 0x41ee4212ed4c59e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_ADT_PARAMETER_ARRAY_ENTRY.Address", address, 0xc0, 0x40, true, 0xa9408ff70b6a78fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif