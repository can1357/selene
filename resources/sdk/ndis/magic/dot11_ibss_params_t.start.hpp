#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_IBSS_PARAMS.Header", header, 0x0, 0x20, true, 0x78b28101e225b17e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_IBSS_PARAMS.bJoinOnly", b_join_only, 0x20, 0x8, true, 0x97dba3de4dec58d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_IBSS_PARAMS.uIEsOffset", u_i_es_offset, 0x40, 0x20, true, 0x3aaa148ad2a2e75f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_IBSS_PARAMS.uIEsLength", u_i_es_length, 0x60, 0x20, true, 0x62280370ea21e3d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif