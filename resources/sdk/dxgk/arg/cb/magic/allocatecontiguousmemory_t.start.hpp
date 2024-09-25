#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_ALLOCATECONTIGUOUSMEMORY.NumberOfBytes", number_of_bytes, 0x0, 0x40, true, 0x3581bf520cdc4256)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARGCB_ALLOCATECONTIGUOUSMEMORY.LowestAcceptableAddress", lowest_acceptable_address, 0x40, 0x40, true, 0x9655731a6c2034a9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARGCB_ALLOCATECONTIGUOUSMEMORY.HighestAcceptableAddress", highest_acceptable_address, 0x80, 0x40, true, 0x970ae331caf6b093)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARGCB_ALLOCATECONTIGUOUSMEMORY.BoundaryAddressMultiple", boundary_address_multiple, 0xc0, 0x40, true, 0xc311fcf390847705)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::memory_caching_type_t), "_DXGKARGCB_ALLOCATECONTIGUOUSMEMORY.CacheType", cache_type, 0x100, 0x20, true, 0x225dfca1d8c9b3bf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_ALLOCATECONTIGUOUSMEMORY.hMemoryHandle", h_memory_handle, 0x140, 0x40, true, 0xadcaf328b6a8269e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_ALLOCATECONTIGUOUSMEMORY.pMemory", p_memory, 0x180, 0x40, true, 0xe2e6b58470776dfc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif