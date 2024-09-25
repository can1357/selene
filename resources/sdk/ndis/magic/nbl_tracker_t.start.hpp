#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_NBL_TRACKER.Linkage", linkage, 0x0, 0x80, true, 0x9412da046d7fc426)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "_NDIS_NBL_TRACKER.Source", source, 0x80, 0x10, true, 0x846a8936dc888c7b, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_NDIS_NBL_TRACKER.Flags", flags, 0x90, 0x10, true, 0xf7c8cf9350caeb63, 16, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NBL_TRACKER.Context", context, 0xc0, 0x40, true, 0x6eae4c35c24c76d5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_NDIS_NBL_TRACKER.Name", name, 0x100, 0x40, true, 0x9d8a234dda581a2d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::nbl_tracker_bucket_t, 2>), "_NDIS_NBL_TRACKER.Buckets", buckets, 0x140, 0x0, true, 0x98920ffdb155c2dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif