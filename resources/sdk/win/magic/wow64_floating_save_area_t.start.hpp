#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_FLOATING_SAVE_AREA.ControlWord", control_word, 0x0, 0x20, true, 0xad66b81bc37ea080)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_FLOATING_SAVE_AREA.StatusWord", status_word, 0x20, 0x20, true, 0xe2a06208a4fb1573)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_FLOATING_SAVE_AREA.TagWord", tag_word, 0x40, 0x20, true, 0x7738270cffb370cb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_FLOATING_SAVE_AREA.ErrorOffset", error_offset, 0x60, 0x20, true, 0x38af06731496895d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_FLOATING_SAVE_AREA.ErrorSelector", error_selector, 0x80, 0x20, true, 0x8ec1d0bcb81f82af)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_FLOATING_SAVE_AREA.DataOffset", data_offset, 0xa0, 0x20, true, 0x16300021ee01561e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_FLOATING_SAVE_AREA.DataSelector", data_selector, 0xc0, 0x20, true, 0xc99de9c90866a25f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 80>), "_WOW64_FLOATING_SAVE_AREA.RegisterArea", register_area, 0xe0, 0x80, true, 0x7fb2da12eeecea15)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_FLOATING_SAVE_AREA.Cr0NpxState", cr0_npx_state, 0x360, 0x20, true, 0x532c7b9ad9696595)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif