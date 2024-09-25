#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_URL_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x2ae49db335b13ff3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_URL_INFO.dwSyncDeltaTime", dw_sync_delta_time, 0x20, 0x20, true, 0x6210a8f13c3c848)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_URL_INFO.cGroup", c_group, 0x40, 0x20, true, 0x3bcca39c704770c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CRYPT_URL_INFO.rgcGroupEntry", rgc_group_entry, 0x80, 0x40, true, 0x27cde0861d4bfe03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif