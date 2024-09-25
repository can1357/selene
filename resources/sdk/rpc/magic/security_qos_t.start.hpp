#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS.Version", version, 0x0, 0x20, true, 0xa38bf0b71aa10c73)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS.Capabilities", capabilities, 0x20, 0x20, true, 0x4321577e3ac67627)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0x8214a423a1aa7dc5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0x8f98275344e9360b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif