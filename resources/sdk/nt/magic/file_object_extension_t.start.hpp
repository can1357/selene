#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_FILE_OBJECT_EXTENSION.FileObject", file_object, 0x0, 0x40, true, 0x931432465dc47843)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FILE_OBJECT_EXTENSION.DeviceObject", device_object, 0x40, 0x40, true, 0xacc00da63c5d185b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_OBJECT_EXTENSION.LockCount", lock_count, 0x80, 0x20, true, 0x51e0942b19c09f1b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_OBJECT_EXTENSION.McnDisableCount", mcn_disable_count, 0xa0, 0x20, true, 0xfd7d7917f683c7f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif