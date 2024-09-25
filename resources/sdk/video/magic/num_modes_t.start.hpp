#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_NUM_MODES.NumModes", num_modes, 0x0, 0x20, true, 0xfabbf18e8a416014)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_NUM_MODES.ModeInformationLength", mode_information_length, 0x20, 0x20, true, 0xbf6b6d082892a975)
#else
#define _m00
#define _m01
#endif