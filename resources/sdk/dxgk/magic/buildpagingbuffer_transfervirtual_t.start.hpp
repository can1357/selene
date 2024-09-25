#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.hAllocation", h_allocation, 0x0, 0x40, true, 0x75f519208740da2e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.AllocationOffsetInBytes", allocation_offset_in_bytes, 0x40, 0x40, true, 0xd99c1eac4732efbb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.TransferSizeInBytes", transfer_size_in_bytes, 0x80, 0x40, true, 0xf3644db83393510c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.SourceVirtualAddress", source_virtual_address, 0xc0, 0x40, true, 0xbaef9b921af5c8f7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.DestinationVirtualAddress", destination_virtual_address, 0x100, 0x40, true, 0xda9999423febdc6e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.SourcePageTable", source_page_table, 0x140, 0x40, true, 0xc3ee72c80ee20c14)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::memory_transfer_direction_t), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.TransferDirection", transfer_direction, 0x180, 0x20, true, 0x531b6aea0004680e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::transfervirtualflags_t), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.Flags", flags, 0x1a0, 0x20, true, 0x62ac5e5b5ff17ed4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.DestinationPageTable", destination_page_table, 0x1c0, 0x40, true, 0x25069d73fb98836d)
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