#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "ScmRequestInfo._parent", parent, 0x80, 0x40, true, 0x34792d06b469a3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ScmRequestInfo._unSerialized", un_serialized, 0xc0, 0x20, true, 0x8c702f85c5dbae02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ScmRequestInfo._added", added, 0xe0, 0x20, true, 0x8f3ed7602a11cb46)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::scm_request_info_data_t), "ScmRequestInfo._scmRequestInfoData", scm_request_info_data, 0x100, 0x80, true, 0x6eda3b28f04fe66b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif