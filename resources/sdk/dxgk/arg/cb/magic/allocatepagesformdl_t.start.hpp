#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARGCB_ALLOCATEPAGESFORMDL.LowAddress", low_address, 0x0, 0x40, true, 0xce09120da234184e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARGCB_ALLOCATEPAGESFORMDL.HighAddress", high_address, 0x40, 0x40, true, 0x33b9455e7e65866d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARGCB_ALLOCATEPAGESFORMDL.SkipBytes", skip_bytes, 0x80, 0x40, true, 0x317652e4b1975ffc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_ALLOCATEPAGESFORMDL.TotalBytes", total_bytes, 0xc0, 0x40, true, 0x7f1914946ff26324)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::memory_caching_type_t), "_DXGKARGCB_ALLOCATEPAGESFORMDL.CacheType", cache_type, 0x100, 0x20, true, 0x49f5352899cae87b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_ALLOCATEPAGESFORMDL.Flags", flags, 0x120, 0x20, true, 0x97ae1fba8cffeba7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_ALLOCATEPAGESFORMDL.hMemoryHandle", h_memory_handle, 0x140, 0x40, true, 0x50efbc4fac97421)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARGCB_ALLOCATEPAGESFORMDL.pMdl", p_mdl, 0x180, 0x40, true, 0xac5f3c5fd22c5d6c)
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