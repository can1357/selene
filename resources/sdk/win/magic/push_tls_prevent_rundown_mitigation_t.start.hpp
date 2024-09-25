#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::oletls_prevent_rundown_mitigation_t), "PushTlsPreventRundownMitigation._currentMitigation", current_mitigation, 0x0, 0x20, true, 0x4f2c2397668f58ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::oletls_prevent_rundown_mitigation_t), "PushTlsPreventRundownMitigation._savedMitigation", saved_mitigation, 0x20, 0x20, true, 0x3f26a6f710b94707)
#else
#define _m00
#define _m01
#endif