#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_EVICT.hDevice", h_device, 0x0, 0x20, true, 0x632714167c446156)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_EVICT.NumAllocations", num_allocations, 0x20, 0x20, true, 0xbacacfdc2811bde0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_EVICT.AllocationList", allocation_list, 0x40, 0x40, true, 0xbfcc4faeccee84d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::evict_flags_t), "_D3DKMT_EVICT.Flags", flags, 0x80, 0x20, true, 0x9c7a52171c229543)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_EVICT.NumBytesToTrim", num_bytes_to_trim, 0xc0, 0x40, true, 0xdade0e5954f9e958)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif