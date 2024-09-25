#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AsPreVeto.PreVetoSignature", pre_veto_signature, 0x0, 0x0, false, 0xd9327c2e6a45169f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AsPreVeto.PlatformIdleState", platform_idle_state, 0x0, 0x0, false, 0x1e8ddefd32c77b66)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AsPreVeto.VetoCode", veto_code, 0x0, 0x0, false, 0x9edc8d4aeacb5887)
#else
#define _m00
#define _m01
#define _m02
#endif