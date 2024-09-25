#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_customREMOTE_REQUEST_SCM_INFO.ClientImpLevel", client_imp_level, 0x0, 0x20, true, 0xfe34db4e042a9455)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_customREMOTE_REQUEST_SCM_INFO.cRequestedProtseqs", c_requested_protseqs, 0x20, 0x10, true, 0x5cffe2e68e9d48cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_customREMOTE_REQUEST_SCM_INFO.pRequestedProtseqs", p_requested_protseqs, 0x40, 0x40, true, 0xf2b8cade05905298)
#else
#define _m00
#define _m01
#define _m02
#endif