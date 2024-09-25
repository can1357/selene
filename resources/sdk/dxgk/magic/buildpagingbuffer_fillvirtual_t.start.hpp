#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL.hAllocation", h_allocation, 0x0, 0x40, true, 0x7654ab2d2dfcaaa2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL.AllocationOffsetInBytes", allocation_offset_in_bytes, 0x40, 0x40, true, 0x11175e5310974e92)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL.FillSizeInBytes", fill_size_in_bytes, 0x80, 0x40, true, 0xe19aec5647f5c1ba)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL.FillPattern", fill_pattern, 0xc0, 0x20, true, 0x95ef4963b0e98ad4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL.DestinationVirtualAddress", destination_virtual_address, 0x100, 0x40, true, 0x31b734f50cc05270)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif