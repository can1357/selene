#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUB_Q_HEADER.AudioStatus", audio_status, 0x8, 0x8, true, 0x8e157025411ef661)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SUB_Q_HEADER.DataLength", data_length, 0x10, 0x10, true, 0x6cb3198e64bb237a)
#else
#define _m00
#define _m01
#endif