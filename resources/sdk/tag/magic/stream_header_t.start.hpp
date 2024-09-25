#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTREAM_HEADER.ulStreamVersion", ul_stream_version, 0x0, 0x20, true, 0x344a8094364298d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTREAM_HEADER.ulPickledSize", ul_pickled_size, 0x20, 0x20, true, 0x364cb4d3e53f2de7)
#else
#define _m00
#define _m01
#endif