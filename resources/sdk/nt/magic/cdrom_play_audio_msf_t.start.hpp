#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_PLAY_AUDIO_MSF.StartingM", starting_m, 0x0, 0x8, true, 0xe62a80c1312e8e64)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_PLAY_AUDIO_MSF.StartingS", starting_s, 0x8, 0x8, true, 0xd5474a9fc8e3dc4e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_PLAY_AUDIO_MSF.StartingF", starting_f, 0x10, 0x8, true, 0xb83acfc0b93da749)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_PLAY_AUDIO_MSF.EndingM", ending_m, 0x18, 0x8, true, 0xdd75237b29df7903)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_PLAY_AUDIO_MSF.EndingS", ending_s, 0x20, 0x8, true, 0xc589694b3ec0c31e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_PLAY_AUDIO_MSF.EndingF", ending_f, 0x28, 0x8, true, 0x383c6d1abf54ff7e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif