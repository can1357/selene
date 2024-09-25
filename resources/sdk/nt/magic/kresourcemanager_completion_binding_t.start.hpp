#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KRESOURCEMANAGER_COMPLETION_BINDING.NotificationListHead", notification_list_head, 0x0, 0x80, true, 0xaffbb24b3ed38c91)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KRESOURCEMANAGER_COMPLETION_BINDING.Port", port, 0x80, 0x40, true, 0xec85071e2eff538e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KRESOURCEMANAGER_COMPLETION_BINDING.Key", key, 0xc0, 0x40, true, 0xe12ee50ee7ec0f42)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_KRESOURCEMANAGER_COMPLETION_BINDING.BindingProcess", binding_process, 0x100, 0x40, true, 0x18387f6fff6f0321)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif