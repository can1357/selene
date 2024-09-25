#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VA_RANGE_DESC.VadAddress", vad_address, 0x0, 0x40, true, 0x68728f57729ebd06)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VA_RANGE_DESC.VaRangeIndex", va_range_index, 0x40, 0x20, true, 0xcb0f26a6acf8cb6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VA_RANGE_DESC.PhysicalAdapterIndex", physical_adapter_index, 0x60, 0x20, true, 0x5bbdab25d06c4542)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VA_RANGE_DESC.StartAddress", start_address, 0x80, 0x40, true, 0x2aca116969fadf8f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VA_RANGE_DESC.EndAddress", end_address, 0xc0, 0x40, true, 0x7c3dc941ba8d6212)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VA_RANGE_DESC.DriverProtection", driver_protection, 0x100, 0x40, true, 0xd8773d9dde547950)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VA_RANGE_DESC.OwnerType", owner_type, 0x140, 0x20, true, 0x260170f449a5efd7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VA_RANGE_DESC.pOwner", p_owner, 0x180, 0x40, true, 0xfbec00c2896b7045)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_VA_RANGE_DESC.OwnerOffset", owner_offset, 0x1c0, 0x40, true, 0xff6535c827a2cd78)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VA_RANGE_DESC.Protection", protection, 0x200, 0x20, true, 0x806013618a3c4038)
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
#endif