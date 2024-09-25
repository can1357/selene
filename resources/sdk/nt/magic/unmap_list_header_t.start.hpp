#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_UNMAP_LIST_HEADER.DataLength", data_length, 0x0, 0x10, true, 0x4fe87b88dc86c489)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_UNMAP_LIST_HEADER.BlockDescrDataLength", block_descr_data_length, 0x10, 0x10, true, 0x91eab06d3b06f251)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::unmap_block_descriptor_t>), "_UNMAP_LIST_HEADER.Descriptors", descriptors, 0x40, 0x0, true, 0xd66ed229bea70e7f)
#else
#define _m00
#define _m01
#define _m02
#endif