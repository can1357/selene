#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PSFEATURE_CUSTPAPER.lOrientation", l_orientation, 0x0, 0x20, true, 0x6a985d0240257bfe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PSFEATURE_CUSTPAPER.lWidth", l_width, 0x20, 0x20, true, 0x536420ccd1534beb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PSFEATURE_CUSTPAPER.lHeight", l_height, 0x40, 0x20, true, 0x5de1bdbf9257af3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PSFEATURE_CUSTPAPER.lWidthOffset", l_width_offset, 0x60, 0x20, true, 0x3039e5248666e13)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PSFEATURE_CUSTPAPER.lHeightOffset", l_height_offset, 0x80, 0x20, true, 0x1c6fbe975e36995c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif