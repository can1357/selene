#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::cx_callback_type_t), "FxPrePostCallback.m_CallbackType", m_callback_type, 0x40, 0x8, true, 0xc1030c91929b7800)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPrePostCallback.m_PkgPnp", m_pkg_pnp, 0x80, 0x40, true, 0xe3bd9bf59feebfbf)
#else
#define _m00
#define _m01
#endif