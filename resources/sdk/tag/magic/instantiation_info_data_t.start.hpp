#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagInstantiationInfoData.classId", class_id, 0x0, 0x80, true, 0x22f1533400dc7f47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInstantiationInfoData.classCtx", class_ctx, 0x80, 0x20, true, 0x4e7ee5480ce4d166)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInstantiationInfoData.actvflags", actvflags, 0xa0, 0x20, true, 0xdc3ce6280da39295)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagInstantiationInfoData.fIsSurrogate", f_is_surrogate, 0xc0, 0x20, true, 0x6ad84c289e831621)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInstantiationInfoData.cIID", c_iid, 0xe0, 0x20, true, 0x63f2c957706d7b1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInstantiationInfoData.instFlag", inst_flag, 0x100, 0x20, true, 0x22d68dfa4bc37c66)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "tagInstantiationInfoData.pIID", p_iid, 0x140, 0x40, true, 0x1ad2043cb7131147)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInstantiationInfoData.thisSize", this_size, 0x180, 0x20, true, 0xc7a822432d62b462)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "tagInstantiationInfoData.clientCOMVersion", client_com_version, 0x1a0, 0x20, true, 0xb0e39923aea6b2be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif