#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::queryregistry_type_t), "_D3DDDI_QUERYREGISTRY_INFO.QueryType", query_type, 0x0, 0x20, true, 0x1bb1677dde5c5d63)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::queryregistry_flags_t), "_D3DDDI_QUERYREGISTRY_INFO.QueryFlags", query_flags, 0x20, 0x20, true, 0x3d2856d52b97feb9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_D3DDDI_QUERYREGISTRY_INFO.ValueName", value_name, 0x40, 0x40, true, 0xa742b4a47e712ffa)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_QUERYREGISTRY_INFO.ValueType", value_type, 0x1080, 0x20, true, 0x7436160d623d0749)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_QUERYREGISTRY_INFO.PhysicalAdapterIndex", physical_adapter_index, 0x10a0, 0x20, true, 0x15733e88cad8a854)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_QUERYREGISTRY_INFO.OutputValueSize", output_value_size, 0x10c0, 0x20, true, 0xb3e898ad5adbc109)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::queryregistry_status_t), "_D3DDDI_QUERYREGISTRY_INFO.Status", status, 0x10e0, 0x20, true, 0x45bf975cf3c8b6f0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_QUERYREGISTRY_INFO.OutputDword", output_dword, 0x1100, 0x20, true, 0x9ff846c64edd5fbe)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_QUERYREGISTRY_INFO.OutputQword", output_qword, 0x1100, 0x40, true, 0x9597b5fe69cfc53b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_D3DDDI_QUERYREGISTRY_INFO.OutputString", output_string, 0x1100, 0x10, true, 0x2e2d56f82fc53e76)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_D3DDDI_QUERYREGISTRY_INFO.OutputBinary", output_binary, 0x1100, 0x8, true, 0xec1ff18b23a8ca17)
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
#define _m09
#define _m10
#endif