#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDeviceText.m_Entry", m_entry, 0x0, 0x40, true, 0x6f9a2d75318a24fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "FxDeviceText.m_Description", m_description, 0x40, 0x40, true, 0xd1fea137c090fa24)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "FxDeviceText.m_LocationInformation", m_location_information, 0x80, 0x40, true, 0x5ff3e448760c8ea9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDeviceText.m_LocaleId", m_locale_id, 0xc0, 0x20, true, 0x424fd5c0e1d09c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif