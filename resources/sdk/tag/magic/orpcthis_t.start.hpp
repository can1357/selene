#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "tagORPCTHIS.version", version, 0x0, 0x20, true, 0xb29714a927925c86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagORPCTHIS.flags", flags, 0x20, 0x20, true, 0xaafbdab59064fe8e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagORPCTHIS.cid", cid, 0x60, 0x80, true, 0xd16315d1ca36a881)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::orpc_extent_array_t*), "tagORPCTHIS.extensions", extensions, 0x100, 0x40, true, 0x3024a2b6006acf08)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif