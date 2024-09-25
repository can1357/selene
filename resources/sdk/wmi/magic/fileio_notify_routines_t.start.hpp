#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(void*, nt::unicode_view*, uint32_t, uint16_t)>*, sdk::function<void(struct nt::eprocess_t*, void*, nt::unicode_view*, struct nt::ejob_t*, uint32_t, uint16_t)>*>), "_WMI_FILEIO_NOTIFY_ROUTINES.FileNameRundownRoutine", file_name_rundown_routine, 0x0, 0x40, true, 0x5368f688e1af1e3a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(void*, nt::unicode_view*, uint32_t, uint16_t)>*, sdk::function<void(struct nt::eprocess_t*, void*, nt::unicode_view*, struct nt::ejob_t*, uint32_t, uint16_t)>*>), "_WMI_FILEIO_NOTIFY_ROUTINES.FileNameNotifyRoutine", file_name_notify_routine, 0x40, 0x40, true, 0x24530b52a1a241ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*, sdk::function<void(struct nt::ethread_t*, struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*>), "_WMI_FILEIO_NOTIFY_ROUTINES.InitiationNotifyRoutine", initiation_notify_routine, 0x80, 0x40, true, 0x5fef92fae63e6966)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*, sdk::function<void(struct nt::ethread_t*, struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*>), "_WMI_FILEIO_NOTIFY_ROUTINES.CompletionNotifyRoutine", completion_notify_routine, 0xc0, 0x40, true, 0x36f7a750450402b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif