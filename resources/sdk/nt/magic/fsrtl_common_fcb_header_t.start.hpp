#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_FSRTL_COMMON_FCB_HEADER.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xa70f80ea7d111c5c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_FSRTL_COMMON_FCB_HEADER.NodeByteSize", node_byte_size, 0x10, 0x10, true, 0xbe4f38b757d71345)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSRTL_COMMON_FCB_HEADER.Flags", flags, 0x20, 0x8, true, 0x3004738ea1dc6911)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSRTL_COMMON_FCB_HEADER.IsFastIoPossible", is_fast_io_possible, 0x28, 0x8, true, 0xa18876b4fe87ed7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSRTL_COMMON_FCB_HEADER.Flags2", flags2, 0x30, 0x8, true, 0xfd4872ee405bb593)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_FSRTL_COMMON_FCB_HEADER.Version", version, 0x3c, 0x4, true, 0x4aa0734eb3776a1a, 4, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_FSRTL_COMMON_FCB_HEADER.Resource", resource, 0x40, 0x40, true, 0x10aa3ea39a90c84f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_FSRTL_COMMON_FCB_HEADER.PagingIoResource", paging_io_resource, 0x80, 0x40, true, 0x76652cf8551dde0f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSRTL_COMMON_FCB_HEADER.AllocationSize", allocation_size, 0xc0, 0x40, true, 0x8670047c062c6885)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSRTL_COMMON_FCB_HEADER.FileSize", file_size, 0x100, 0x40, true, 0xc009da5101a5da60)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSRTL_COMMON_FCB_HEADER.ValidDataLength", valid_data_length, 0x140, 0x40, true, 0x4f51bf35c5622710)
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