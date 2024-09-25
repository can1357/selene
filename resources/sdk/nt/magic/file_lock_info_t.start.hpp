#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LOCK_INFO.StartingByte", starting_byte, 0x0, 0x40, true, 0x8c099e48ed0456cc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LOCK_INFO.Length", length, 0x40, 0x40, true, 0xe8db8552babd4395)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_LOCK_INFO.ExclusiveLock", exclusive_lock, 0x80, 0x8, true, 0x63f8123c1f4ed685)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LOCK_INFO.Key", key, 0xa0, 0x20, true, 0xaa390553fd2ab4f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_FILE_LOCK_INFO.FileObject", file_object, 0xc0, 0x40, true, 0xd5b3704af07c24)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_LOCK_INFO.ProcessId", process_id, 0x100, 0x40, true, 0x8406ede1bfdeec92)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LOCK_INFO.EndingByte", ending_byte, 0x140, 0x40, true, 0x14ab931c1488ad1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif