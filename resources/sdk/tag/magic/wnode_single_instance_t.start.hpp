#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "tagWNODE_SINGLE_INSTANCE.WnodeHeader", wnode_header, 0x0, 0x80, true, 0xa34bbc97a34ae34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_INSTANCE.OffsetInstanceName", offset_instance_name, 0x180, 0x20, true, 0x6b763a51521d2571)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_INSTANCE.InstanceIndex", instance_index, 0x1a0, 0x20, true, 0xce4677c21bad4515)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_INSTANCE.DataBlockOffset", data_block_offset, 0x1c0, 0x20, true, 0xd84b1302945f2e71)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_SINGLE_INSTANCE.SizeDataBlock", size_data_block, 0x1e0, 0x20, true, 0x741586b31211ac3b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "tagWNODE_SINGLE_INSTANCE.VariableData", variable_data, 0x200, 0x0, true, 0xd75c5db8d551fcc9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif