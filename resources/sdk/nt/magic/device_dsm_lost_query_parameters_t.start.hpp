#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_LOST_QUERY_PARAMETERS.Version", version, 0x0, 0x20, true, 0x117af44d19c919fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DSM_LOST_QUERY_PARAMETERS.Granularity", granularity, 0x40, 0x40, true, 0x1782ea896534f9dd)
#else
#define _m00
#define _m01
#endif