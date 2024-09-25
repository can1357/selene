#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComNoClassInfo.m_cRef", m_c_ref, 0xc0, 0x20, true, 0x1861c6c9d324e4ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CComNoClassInfo.m_clsid", m_clsid, 0xe0, 0x80, true, 0x14c2f860f02394cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComNoClassInfo.m_wszProgID", m_wsz_prog_id, 0x180, 0x40, true, 0x543db0d8b105298f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComNoClassInfo.m_ValueFlags", m_value_flags, 0x1c0, 0x20, true, 0x5872b8ca352e160c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CComNoClassInfo.m_changeDetectionSequence", m_change_detection_sequence, 0x240, 0x40, true, 0x6f156dd4d59e03ad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif