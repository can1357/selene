#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "WdfObjectLock.m_ConstructorStatus", m_constructor_status, 0x0, 0x20, true, 0xf19f70710aa9111)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_lock_t), "WdfObjectLock.m_Lock", m_lock, 0x80, 0x40, true, 0x35a57ef085606390)
#else
#define _m00
#define _m01
#endif