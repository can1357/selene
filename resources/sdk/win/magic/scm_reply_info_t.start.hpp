#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "ScmReplyInfo._parent", parent, 0x80, 0x40, true, 0xe5b9ae2aa21478e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ScmReplyInfo._unSerialized", un_serialized, 0xc0, 0x20, true, 0x3f51884b6007cf7c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ScmReplyInfo._added", added, 0xe0, 0x20, true, 0xc808e3c757fbd0bc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::scm_reply_info_data_t), "ScmReplyInfo._scmReplyInfoData", scm_reply_info_data, 0x100, 0x80, true, 0x34a686c218f96c98)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif