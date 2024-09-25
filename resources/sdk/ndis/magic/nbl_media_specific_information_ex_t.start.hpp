#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX.Header", header, 0x0, 0x20, true, 0xae7bfabd07174bf3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_media_specific_information_ex_t*), "_NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX.NextEntry", next_entry, 0x40, 0x40, true, 0xb5775b82863368b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX.Tag", tag, 0x80, 0x20, true, 0xe9100b1b6bc96591)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX.Data", data, 0xc0, 0x40, true, 0xba223a81ff07b96a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif