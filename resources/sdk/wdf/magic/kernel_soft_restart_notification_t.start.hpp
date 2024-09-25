#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KERNEL_SOFT_RESTART_NOTIFICATION.Version", version, 0x0, 0x10, true, 0xe4c2a7e89e23f768)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KERNEL_SOFT_RESTART_NOTIFICATION.Size", size, 0x10, 0x10, true, 0xfe4b668460624797)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KERNEL_SOFT_RESTART_NOTIFICATION.Event", event, 0x20, 0x80, true, 0x81a2f464423a52a7)
#else
#define _m00
#define _m01
#define _m02
#endif