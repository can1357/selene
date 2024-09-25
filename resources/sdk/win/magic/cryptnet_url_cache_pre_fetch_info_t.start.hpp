#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_PRE_FETCH_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xb7032708e0485836)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_PRE_FETCH_INFO.dwObjectType", dw_object_type, 0x20, 0x20, true, 0x467003c143035bdb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_PRE_FETCH_INFO.dwError", dw_error, 0x40, 0x20, true, 0x1fabc4b5f9a554d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_PRE_FETCH_INFO.dwReserved", dw_reserved, 0x60, 0x20, true, 0xf036674d82865254)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRYPTNET_URL_CACHE_PRE_FETCH_INFO.ThisUpdateTime", this_update_time, 0x80, 0x40, true, 0xcb37db69c5cebc83)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRYPTNET_URL_CACHE_PRE_FETCH_INFO.NextUpdateTime", next_update_time, 0xc0, 0x40, true, 0x5f28cae20b0631e9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRYPTNET_URL_CACHE_PRE_FETCH_INFO.PublishTime", publish_time, 0x100, 0x40, true, 0xbb61230e666fd777)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif