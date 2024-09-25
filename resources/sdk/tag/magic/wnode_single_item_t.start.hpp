#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "tagWNODE_SINGLE_ITEM.WnodeHeader", wnode_header, 0x0, 0x80, true, 0xf0f7685273bfc3f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_ITEM.OffsetInstanceName", offset_instance_name, 0x180, 0x20, true, 0x12aa670ee512224d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_ITEM.InstanceIndex", instance_index, 0x1a0, 0x20, true, 0x74cf958ab905c44e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_ITEM.ItemId", item_id, 0x1c0, 0x20, true, 0x4e8b2542bc527d52)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_ITEM.DataBlockOffset", data_block_offset, 0x1e0, 0x20, true, 0x5efa3e30ee00b5a0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_ITEM.SizeDataItem", size_data_item, 0x200, 0x20, true, 0x9c10964d7ecef346)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "tagWNODE_SINGLE_ITEM.VariableData", variable_data, 0x220, 0x0, true, 0x8a8a43a0cc4ac65c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif