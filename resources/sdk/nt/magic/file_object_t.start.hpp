#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_FILE_OBJECT.Type", type, 0x0, 0x10, true, 0xc818b4b6a4ac3598)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_FILE_OBJECT.Size", size, 0x10, 0x10, true, 0x5d497b5a9d7fd817)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FILE_OBJECT.DeviceObject", device_object, 0x40, 0x40, true, 0xcb1b7740d89cdf1)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::vpb_t*), "_FILE_OBJECT.Vpb", vpb, 0x80, 0x40, true, 0x525b4f5f18561032)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_OBJECT.FsContext", fs_context, 0xc0, 0x40, true, 0xc139a3203f4bf7e0)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_OBJECT.FsContext2", fs_context2, 0x100, 0x40, true, 0x57f117a4f31ba140)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::section_object_pointers_t*), "_FILE_OBJECT.SectionObjectPointer", section_object_pointer, 0x140, 0x40, true, 0xe1e9b2a0b2b31dd7)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_OBJECT.PrivateCacheMap", private_cache_map, 0x180, 0x40, true, 0xfc44cbe966dfec27)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_FILE_OBJECT.FinalStatus", final_status, 0x1c0, 0x20, true, 0x66c6c4429f51ed87)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_FILE_OBJECT.RelatedFileObject", related_file_object, 0x200, 0x40, true, 0xa695c543e0e5528)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_OBJECT.LockOperation", lock_operation, 0x240, 0x8, true, 0xba580da04bc9d73)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_OBJECT.DeletePending", delete_pending, 0x248, 0x8, true, 0xeb4a00ca42d7dfe7)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_OBJECT.ReadAccess", read_access, 0x250, 0x8, true, 0xcd947980da689612)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_OBJECT.WriteAccess", write_access, 0x258, 0x8, true, 0xf27e62bd1b2faa01)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_OBJECT.DeleteAccess", delete_access, 0x260, 0x8, true, 0x6d8df01c8e99b9e6)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_OBJECT.SharedRead", shared_read, 0x268, 0x8, true, 0x75db384cf2b7ebe0)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_OBJECT.SharedWrite", shared_write, 0x270, 0x8, true, 0xa67982d1a071cc8f)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_OBJECT.SharedDelete", shared_delete, 0x278, 0x8, true, 0xcf3f861d3c5925f5)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_OBJECT.Flags", flags, 0x280, 0x20, true, 0x33ca51d228b7ae8a)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FILE_OBJECT.FileName", file_name, 0x2c0, 0x80, true, 0xab3fae44d6048607)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_OBJECT.CurrentByteOffset", current_byte_offset, 0x340, 0x40, true, 0x879f6b8d97e10c43)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_OBJECT.Waiters", waiters, 0x380, 0x20, true, 0xa47ece3a713799a9)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_OBJECT.Busy", busy, 0x3a0, 0x20, true, 0x86a356ec77f99006)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_OBJECT.LastLock", last_lock, 0x3c0, 0x40, true, 0x43bd2ec68ba54ce5)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FILE_OBJECT.Lock", lock, 0x400, 0xc0, true, 0x6547bd10c21ddda)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FILE_OBJECT.Event", event, 0x4c0, 0xc0, true, 0xa98c70774c09962b)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::completion_context_t*), "_FILE_OBJECT.CompletionContext", completion_context, 0x580, 0x40, true, 0xf7281751abf84375)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_OBJECT.IrpListLock", irp_list_lock, 0x5c0, 0x40, true, 0xfdfd569c08b1dc2f)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FILE_OBJECT.IrpList", irp_list, 0x600, 0x80, true, 0x88e61b781698d9c)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_OBJECT.FileObjectExtension", file_object_extension, 0x680, 0x40, true, 0x24d58eddce963b63)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#endif