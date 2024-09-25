#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_AUDIO_OUTPUT.CodePage", code_page, 0x0, 0x8, true, 0x28769fc19f246f47)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_AUDIO_OUTPUT.ParameterLength", parameter_length, 0x8, 0x8, true, 0xcb7f43ab0f2808ce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_AUDIO_OUTPUT.Immediate", immediate, 0x10, 0x8, true, 0x1945f06df0a637a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_AUDIO_OUTPUT.LbaFormat", lba_format, 0x28, 0x8, true, 0xe68ba56a992c528f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_AUDIO_OUTPUT.LogicalBlocksPerSecond", logical_blocks_per_second, 0x30, 0x10, true, 0xee267d04e2c31f14)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::port_output_t, 4>), "_AUDIO_OUTPUT.PortOutput", port_output, 0x40, 0x40, true, 0xff46dec5873de686)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif