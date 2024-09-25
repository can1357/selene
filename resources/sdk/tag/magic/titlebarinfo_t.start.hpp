#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTITLEBARINFO.cbSize", cb_size, 0x0, 0x20, true, 0x988bea7b700cd106)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagTITLEBARINFO.rcTitleBar", rc_title_bar, 0x20, 0x80, true, 0x31c388294d96aafa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "tagTITLEBARINFO.rgstate", rgstate, 0xa0, 0xc0, true, 0xa445f10839305a55)
#else
#define _m00
#define _m01
#define _m02
#endif