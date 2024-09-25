#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "FxWdmDeviceExtension.IoRemoveLock", io_remove_lock, 0x0, 0x0, true, 0x18e8a12cc522321f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWdmDeviceExtension.RemoveLockOptionFlags", remove_lock_option_flags, 0x100, 0x20, true, 0xbb0ee25c747965e5)
#else
#define _m00
#define _m01
#endif