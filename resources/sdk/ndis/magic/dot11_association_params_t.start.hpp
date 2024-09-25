#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_ASSOCIATION_PARAMS.Header", header, 0x0, 0x20, true, 0xbb609e523ae52f2e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "DOT11_ASSOCIATION_PARAMS.BSSID", bssid, 0x20, 0x30, true, 0xf0960e733bffc591)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_ASSOCIATION_PARAMS.uAssocRequestIEsOffset", u_assoc_request_i_es_offset, 0x60, 0x20, true, 0x4f119114260ca9b3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_ASSOCIATION_PARAMS.uAssocRequestIEsLength", u_assoc_request_i_es_length, 0x80, 0x20, true, 0xbffac900ef05c899)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif