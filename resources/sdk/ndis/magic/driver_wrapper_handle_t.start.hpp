#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_DRIVER_WRAPPER_HANDLE.Header", header, 0x0, 0x20, true, 0x3152e8675846557d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_DRIVER_WRAPPER_HANDLE.NdisWrapperHandle", ndis_wrapper_handle, 0x40, 0x40, true, 0x204e3630fe901426)
#else
#define _m00
#define _m01
#endif