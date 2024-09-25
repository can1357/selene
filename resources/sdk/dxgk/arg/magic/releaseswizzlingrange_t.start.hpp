#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_RELEASESWIZZLINGRANGE.hAllocation", h_allocation, 0x0, 0x40, true, 0x1e14024095352678)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RELEASESWIZZLINGRANGE.PrivateDriverData", private_driver_data, 0x40, 0x20, true, 0x51d880948555952e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RELEASESWIZZLINGRANGE.RangeId", range_id, 0x60, 0x20, true, 0x80d200a7b32b29f8)
#else
#define _m00
#define _m01
#define _m02
#endif