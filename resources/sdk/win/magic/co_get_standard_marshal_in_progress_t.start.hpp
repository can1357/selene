#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_tls_t&), "CoGetStandardMarshalInProgress._tls", tls, 0x0, 0x40, true, 0x982b8f06d349b066)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::co_get_standard_marshal_in_progress_t*), "CoGetStandardMarshalInProgress._pNext", p_next, 0x40, 0x40, true, 0xe7644b47681e6915)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CoGetStandardMarshalInProgress._punkObjectIdentity", punk_object_identity, 0x80, 0x40, true, 0xf915af4e0d856a74)
#else
#define _m00
#define _m01
#define _m02
#endif