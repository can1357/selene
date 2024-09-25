#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::shared_virtual_disk_support_type_t), "_SHARED_VIRTUAL_DISK_SUPPORT.SharedVirtualDiskSupport", shared_virtual_disk_support, 0x0, 0x20, true, 0x874934bfd0205385)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::shared_virtual_disk_handle_state_t), "_SHARED_VIRTUAL_DISK_SUPPORT.HandleState", handle_state, 0x20, 0x20, true, 0x69099764bf6bb08c)
#else
#define _m00
#define _m01
#endif