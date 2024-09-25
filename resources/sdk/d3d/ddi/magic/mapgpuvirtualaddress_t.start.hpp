#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_MAPGPUVIRTUALADDRESS.hPagingQueue", h_paging_queue, 0x0, 0x20, true, 0x837c9f56bc39e765)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAPGPUVIRTUALADDRESS.BaseAddress", base_address, 0x40, 0x40, true, 0x3b2367010f1a5ebb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAPGPUVIRTUALADDRESS.MinimumAddress", minimum_address, 0x80, 0x40, true, 0x39d2b1f7b4b3966e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAPGPUVIRTUALADDRESS.MaximumAddress", maximum_address, 0xc0, 0x40, true, 0x754779c62c45dcd2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_MAPGPUVIRTUALADDRESS.hAllocation", h_allocation, 0x100, 0x20, true, 0x82931b8d0d3ae99e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAPGPUVIRTUALADDRESS.OffsetInPages", offset_in_pages, 0x140, 0x40, true, 0x3fa29cafcec8df5a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAPGPUVIRTUALADDRESS.SizeInPages", size_in_pages, 0x180, 0x40, true, 0x82f5c964a2a3c916)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddigpuvirtualaddress_protection_type_t), "D3DDDI_MAPGPUVIRTUALADDRESS.Protection", protection, 0x1c0, 0x40, true, 0x1a17a9da25df6c12)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAPGPUVIRTUALADDRESS.DriverProtection", driver_protection, 0x200, 0x40, true, 0xa7af3024a214e54f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAPGPUVIRTUALADDRESS.VirtualAddress", virtual_address, 0x2c0, 0x40, true, 0x6bf4fff94e19011)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_MAPGPUVIRTUALADDRESS.PagingFenceValue", paging_fence_value, 0x300, 0x40, true, 0xd62f83e5e495b8)
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