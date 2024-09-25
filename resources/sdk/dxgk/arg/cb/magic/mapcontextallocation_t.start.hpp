#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_MAPCONTEXTALLOCATION.BaseAddress", base_address, 0x0, 0x40, true, 0x67cca8dceb7b3cd0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_MAPCONTEXTALLOCATION.MinimumAddress", minimum_address, 0x40, 0x40, true, 0xbd4652b4e58b443d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_MAPCONTEXTALLOCATION.MaximumAddress", maximum_address, 0x80, 0x40, true, 0xa0bfe894738da3e2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_MAPCONTEXTALLOCATION.hAllocation", h_allocation, 0xc0, 0x40, true, 0x26f636c13df55a17)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_MAPCONTEXTALLOCATION.OffsetInPages", offset_in_pages, 0x100, 0x40, true, 0x9b798bcd5175fbbd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_MAPCONTEXTALLOCATION.SizeInPages", size_in_pages, 0x140, 0x40, true, 0xd7be0dbaea76454b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddigpuvirtualaddress_protection_type_t), "_DXGKARGCB_MAPCONTEXTALLOCATION.Protection", protection, 0x180, 0x40, true, 0xfa85eabda20d28b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_MAPCONTEXTALLOCATION.DriverProtection", driver_protection, 0x1c0, 0x40, true, 0x47c81e68848a4fd9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif