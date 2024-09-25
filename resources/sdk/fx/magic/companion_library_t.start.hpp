#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "FxCompanionLibrary.m_CompanionLibrarySyncEvent", m_companion_library_sync_event, 0x0, 0xc0, true, 0xf351a331fdc3d1f3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxCompanionLibrary.m_InitCount", m_init_count, 0xc0, 0x20, true, 0x4aab9b1959d3b50c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::i_companion_library_t*), "FxCompanionLibrary.m_RdCompanionLibrary", m_rd_companion_library, 0x100, 0x40, true, 0x992df2d29856e978)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxCompanionLibrary.m_RdNonPnPDevice", m_rd_non_pn_p_device, 0x140, 0x40, true, 0x7c54098a80618b24)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "FxCompanionLibrary.m_RdNonPnPFile", m_rd_non_pn_p_file, 0x180, 0x40, true, 0x3a36939ca16ae4ad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif