#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_LUN_LIST.LunListLength", lun_list_length, 0x0, 0x20, true, 0x312d1435ff506192)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 8>>), "_LUN_LIST.Lun", lun, 0x40, 0x0, true, 0xa0eb5d6cdd8a844d)
#else
#define _m00
#define _m01
#endif