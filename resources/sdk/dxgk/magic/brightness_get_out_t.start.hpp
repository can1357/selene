#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_GET_OUT.CurrentBrightnessMillinits", current_brightness_millinits, 0x0, 0x20, true, 0xd8d7b6b5e948dd08)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_GET_OUT.TargetBrightnessMillinits", target_brightness_millinits, 0x20, 0x20, true, 0x88197bcea322123c)
#else
#define _m00
#define _m01
#endif