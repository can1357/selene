#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMP_VOLUME_CONTEXT.VolumeContextListEntry", volume_context_list_entry, 0x0, 0x80, true, 0x9ee1869ac59bffc4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cmp::volume_manager_t*), "_CMP_VOLUME_CONTEXT.VolumeManager", volume_manager, 0x80, 0x40, true, 0x17bdaf480fe5c82)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CMP_VOLUME_CONTEXT.RefCount", ref_count, 0xc0, 0x40, true, 0x8f11625ba2ca47c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CMP_VOLUME_CONTEXT.VolumeGuid", volume_guid, 0x100, 0x80, true, 0xe68295e217ae514a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMP_VOLUME_CONTEXT.VolumeFileObject", volume_file_object, 0x180, 0x40, true, 0x9f2daa6fd1989b93)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmsi_rw_lock_t), "_CMP_VOLUME_CONTEXT.VolumeContextLock", volume_context_lock, 0x1c0, 0x40, true, 0x2400a73c257105aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CMP_VOLUME_CONTEXT.DeviceUsageNotificationSent", device_usage_notification_sent, 0x200, 0x8, true, 0x8d9e3535b6fb5e4b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif