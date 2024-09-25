#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "tagWNODE_METHOD_ITEM.WnodeHeader", wnode_header, 0x0, 0x80, true, 0x49b4bedb6f89abc8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_METHOD_ITEM.OffsetInstanceName", offset_instance_name, 0x180, 0x20, true, 0x1ccce1a58876fd40)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_METHOD_ITEM.InstanceIndex", instance_index, 0x1a0, 0x20, true, 0x5c56b02d881b57b6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_METHOD_ITEM.MethodId", method_id, 0x1c0, 0x20, true, 0xb750f11a6d765997)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_METHOD_ITEM.DataBlockOffset", data_block_offset, 0x1e0, 0x20, true, 0xa97fbe8639c743de)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_METHOD_ITEM.SizeDataBlock", size_data_block, 0x200, 0x20, true, 0x77d7013d45de31f1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "tagWNODE_METHOD_ITEM.VariableData", variable_data, 0x220, 0x0, true, 0x7d097421d3219914)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif