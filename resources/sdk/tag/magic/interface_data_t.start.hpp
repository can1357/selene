#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInterfaceData.ulCntData", ul_cnt_data, 0x0, 0x20, true, 0x1d0571adba506c5c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1024>), "tagInterfaceData.abData", ab_data, 0x20, 0x0, true, 0xd53135c8f32cfbd0)
#else
#define _m00
#define _m01
#endif