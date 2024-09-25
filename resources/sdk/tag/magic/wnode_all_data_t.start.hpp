#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "tagWNODE_ALL_DATA.WnodeHeader", wnode_header, 0x0, 0x80, true, 0xa175ec8c217a7e25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_ALL_DATA.DataBlockOffset", data_block_offset, 0x180, 0x20, true, 0x472f2df352741746)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_ALL_DATA.InstanceCount", instance_count, 0x1a0, 0x20, true, 0x87cc00167d1d6a87)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_ALL_DATA.OffsetInstanceNameOffsets", offset_instance_name_offsets, 0x1c0, 0x20, true, 0x989c7932d388d42c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_ALL_DATA.FixedInstanceSize", fixed_instance_size, 0x1e0, 0x20, true, 0x349b47c734b9700b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::offsetinstancedataandlength_t>), "tagWNODE_ALL_DATA.OffsetInstanceDataAndLength", offset_instance_data_and_length, 0x1e0, 0x0, true, 0xd819b3323e1c4bed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif