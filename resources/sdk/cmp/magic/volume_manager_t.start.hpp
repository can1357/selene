#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmsi_rw_lock_t), "_CMP_VOLUME_MANAGER.VolumeContextListLock", volume_context_list_lock, 0x0, 0x40, true, 0x5f348e869af2e370)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMP_VOLUME_MANAGER.VolumeContextListHead", volume_context_list_head, 0x40, 0x80, true, 0xaa2de7ed97c9b219)
#else
#define _m00
#define _m01
#endif