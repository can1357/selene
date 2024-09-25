#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_EXTENT_READ_CACHE_INFO_BUFFER.AllocatedCache", allocated_cache, 0x0, 0x40, true, 0xa87ea44e67355a0f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_EXTENT_READ_CACHE_INFO_BUFFER.PopulatedCache", populated_cache, 0x40, 0x40, true, 0xfdbebafe3afc7d4e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_EXTENT_READ_CACHE_INFO_BUFFER.InErrorCache", in_error_cache, 0x80, 0x40, true, 0xe892bdf1e3d0e4ef)
#else
#define _m00
#define _m01
#define _m02
#endif