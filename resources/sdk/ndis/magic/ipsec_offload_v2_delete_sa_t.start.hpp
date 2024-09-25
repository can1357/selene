#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_IPSEC_OFFLOAD_V2_DELETE_SA.Header", header, 0x0, 0x20, true, 0x636b5ca4200f9229)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ipsec_offload_v2_delete_sa_t*), "_IPSEC_OFFLOAD_V2_DELETE_SA.Next", next, 0x40, 0x40, true, 0x9e050ddc7448b30)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IPSEC_OFFLOAD_V2_DELETE_SA.OffloadHandle", offload_handle, 0x80, 0x40, true, 0xf1c82c7f109d1e3c)
#else
#define _m00
#define _m01
#define _m02
#endif