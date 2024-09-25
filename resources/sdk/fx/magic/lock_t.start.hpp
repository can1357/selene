#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxLock.m_lock", m_lock, 0x0, 0x80, true, 0x10b11ca4b9f9b9cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::verifier_lock_t*), "FxLock.m_Verifier", m_verifier, 0x80, 0x40, true, 0x2117d46f5702b8fc)
#else
#define _m00
#define _m01
#endif