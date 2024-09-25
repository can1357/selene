#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_PERSISTENT_VOLUME_INFORMATION.VolumeFlags", volume_flags, 0x0, 0x20, true, 0xad34288ec937a8c7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_PERSISTENT_VOLUME_INFORMATION.FlagMask", flag_mask, 0x20, 0x20, true, 0x1ca86624c7d2e3e7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_PERSISTENT_VOLUME_INFORMATION.Version", version, 0x40, 0x20, true, 0x379dd41bb9d68bf0)
#else
#define _m00
#define _m01
#define _m02
#endif