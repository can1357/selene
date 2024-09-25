#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTURECONFIG.dwID", dw_id, 0x0, 0x20, true, 0xea2eb911bde9cd3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTURECONFIG.dwWant", dw_want, 0x20, 0x20, true, 0xda3e61590f9e8ee8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGESTURECONFIG.dwBlock", dw_block, 0x40, 0x20, true, 0x6b66a6f8f4dd5a42)
#else
#define _m00
#define _m01
#define _m02
#endif