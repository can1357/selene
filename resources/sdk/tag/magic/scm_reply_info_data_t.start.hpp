#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::custom_priv_resolver_info_t*), "tagScmReplyInfoData.pResolverInfo", p_resolver_info, 0x0, 0x40, true, 0x35e260da5188a196)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::custom_remote_reply_scm_info_t*), "tagScmReplyInfoData.remoteReply", remote_reply, 0x40, 0x40, true, 0x8e028ffacb2ae6d4)
#else
#define _m00
#define _m01
#endif