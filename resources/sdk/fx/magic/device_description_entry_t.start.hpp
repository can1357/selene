#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDeviceDescriptionEntry.m_DescriptionLink", m_description_link, 0x0, 0x80, true, 0x5be3f0b34df14340)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::child_list_description_state_t), "FxDeviceDescriptionEntry.m_DescriptionState", m_description_state, 0x80, 0x20, true, 0x677f709c910aade0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_t ), "FxDeviceDescriptionEntry.m_IdentificationDescription", m_identification_description, 0xc0, 0x40, true, 0xb77a344cab98e360)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::child_address_description_header_t*), "FxDeviceDescriptionEntry.m_AddressDescription", m_address_description, 0x100, 0x40, true, 0x54088d7ce1b71d31)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDeviceDescriptionEntry.m_ModificationLink", m_modification_link, 0x140, 0x80, true, 0x10a367f6b6cf985e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::child_list_modification_state_t), "FxDeviceDescriptionEntry.m_ModificationState", m_modification_state, 0x1c0, 0x20, true, 0x383a88b1ae6598e6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDeviceDescriptionEntry.m_Pdo", m_pdo, 0x200, 0x40, true, 0x91c1b3b208805393)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::child_list_t*), "FxDeviceDescriptionEntry.m_DeviceList", m_device_list, 0x240, 0x40, true, 0xde9986991a4e71a4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDeviceDescriptionEntry.m_FoundInLastScan", m_found_in_last_scan, 0x280, 0x8, true, 0xb588a1232e19155)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDeviceDescriptionEntry.m_ProcessingSurpriseRemove", m_processing_surprise_remove, 0x288, 0x8, true, 0xbee8c4b4ce5ce857)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDeviceDescriptionEntry.m_PendingDeleteOnScanEnd", m_pending_delete_on_scan_end, 0x290, 0x8, true, 0xb8f516a705a8dc6a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::child_list_reported_missing_callback_state_t), "FxDeviceDescriptionEntry.m_ReportedMissingCallbackState", m_reported_missing_callback_state, 0x298, 0x8, true, 0xa76fae3b02efb25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif