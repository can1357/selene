#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_HWPROFILE_CHANGE_NOTIFICATION.Version", version, 0x0, 0x10, true, 0x64ae3734869dc37f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_HWPROFILE_CHANGE_NOTIFICATION.Size", size, 0x10, 0x10, true, 0xe3677df01c673881)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_HWPROFILE_CHANGE_NOTIFICATION.Event", event, 0x20, 0x80, true, 0x1718725393038ff6)
#else
#define _m00
#define _m01
#define _m02
#endif