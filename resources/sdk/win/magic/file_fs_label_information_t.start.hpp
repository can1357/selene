#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_LABEL_INFORMATION.VolumeLabelLength", volume_label_length, 0x0, 0x20, true, 0x7552f6be1ce58a26)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_FS_LABEL_INFORMATION.VolumeLabel", volume_label, 0x20, 0x10, true, 0x8a6e1a68bcf3eaa8)
#else
#define _m00
#define _m01
#endif