#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_tls_t&), "UnmarshalForQueryInterface._tls", tls, 0x0, 0x40, true, 0xda16cd66eadfec97)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::unmarshal_for_query_interface_t*), "UnmarshalForQueryInterface._pNext", p_next, 0x40, 0x40, true, 0x69c2615edf985e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_marshal_t*), "UnmarshalForQueryInterface._pStandardMarshaler", p_standard_marshaler, 0x80, 0x40, true, 0xe3e99612353275a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "UnmarshalForQueryInterface._iid", iid, 0xc0, 0x80, true, 0xe317b09a238ec6ff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif