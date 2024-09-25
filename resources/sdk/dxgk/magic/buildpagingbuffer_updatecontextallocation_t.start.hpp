#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION.ContextAllocation", context_allocation, 0x0, 0x40, true, 0x2fd129f3cbbc3ee1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION.ContextAllocationSize", context_allocation_size, 0x40, 0x40, true, 0xcefa2622862fe0a6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION.pDriverPrivateData", p_driver_private_data, 0x80, 0x40, true, 0x1eb526dba61fa555)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION.DriverPrivateDataSize", driver_private_data_size, 0xc0, 0x20, true, 0x46583be35251bc16)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif