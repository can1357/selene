#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::custom_priv_scm_info_t*), "tagScmRequestInfoData.pScmInfo", p_scm_info, 0x0, 0x40, true, 0xb3a81b91e6821319)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::custom_remote_request_scm_info_t*), "tagScmRequestInfoData.remoteRequest", remote_request, 0x40, 0x40, true, 0x18718be7f2046cab)
#else
#define _m00
#define _m01
#endif