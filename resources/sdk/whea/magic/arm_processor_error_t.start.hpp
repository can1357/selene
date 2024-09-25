#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::arm_cache_error_t), "_WHEA_ARM_PROCESSOR_ERROR.CacheError", cache_error, 0x0, 0x60, true, 0xa8a50d23b148899f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::arm_tlb_error_t), "_WHEA_ARM_PROCESSOR_ERROR.TlbError", tlb_error, 0x0, 0x60, true, 0x3185928a23acd314)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::arm_bus_error_t), "_WHEA_ARM_PROCESSOR_ERROR.BusError", bus_error, 0x0, 0x60, true, 0xedab2dae2928ad57)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_PROCESSOR_ERROR.AsULONGLONG", as_ulonglong, 0x0, 0x40, true, 0x88c07bf0c54f73d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif