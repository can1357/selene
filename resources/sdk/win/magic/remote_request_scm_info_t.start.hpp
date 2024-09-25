#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMOTE_REQUEST_SCM_INFO.ClientImpLevel", client_imp_level, 0x0, 0x20, true, 0x59395773e7f641a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REMOTE_REQUEST_SCM_INFO.cRequestedProtseqs", c_requested_protseqs, 0x20, 0x10, true, 0xac1c8e8f453c38a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_REMOTE_REQUEST_SCM_INFO.pRequestedProtseqs", p_requested_protseqs, 0x40, 0x40, true, 0xc51286d7e8f8bcf9)
#else
#define _m00
#define _m01
#define _m02
#endif