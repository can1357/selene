#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_VOLUME_INFORMATION.VolumeCreationTime", volume_creation_time, 0x0, 0x40, true, 0xbb3f65f2ac7ceb47)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_VOLUME_INFORMATION.VolumeSerialNumber", volume_serial_number, 0x40, 0x20, true, 0xdfb252fc9e90e4b3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_VOLUME_INFORMATION.VolumeLabelLength", volume_label_length, 0x60, 0x20, true, 0xf1edff1392be099b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_FS_VOLUME_INFORMATION.SupportsObjects", supports_objects, 0x80, 0x8, true, 0xe07e77b7b055a962)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_FS_VOLUME_INFORMATION.VolumeLabel", volume_label, 0x90, 0x10, true, 0x72ba89014690946b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif