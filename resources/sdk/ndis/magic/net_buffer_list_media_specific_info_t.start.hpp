#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_LIST_MEDIA_SPECIFIC_INFO.MediaSpecificInfo", media_specific_info, 0x0, 0x40, true, 0x9625b7a4d88cd25f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_LIST_MEDIA_SPECIFIC_INFO.NativeWifiSpecificInfo", native_wifi_specific_info, 0x0, 0x40, true, 0xe8b5c8d7b1c945d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_LIST_MEDIA_SPECIFIC_INFO.Value", value, 0x0, 0x40, true, 0x9cb11c403ebfab0)
#else
#define _m00
#define _m01
#define _m02
#endif