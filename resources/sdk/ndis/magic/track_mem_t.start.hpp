#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_TRACK_MEM.List", list, 0x0, 0x80, true, 0x9601d6761d33e038)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TRACK_MEM.Tag", tag, 0x80, 0x20, true, 0x37ea79c4e6527aba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TRACK_MEM.Length", length, 0xa0, 0x20, true, 0x33efe37a5a44f19f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_TRACK_MEM.Caller", caller, 0xc0, 0x40, true, 0xe0916ca3447de7d1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_TRACK_MEM.CallersCaller", callers_caller, 0x100, 0x40, true, 0xc6b5174fb317f403)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif