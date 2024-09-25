#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.Length", length, 0x0, 0x20, true, 0x8d1b7ddabdd8b66b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.ModeIndex", mode_index, 0x20, 0x20, true, 0x6c147d52d4f3fb72)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.VisScreenWidth", vis_screen_width, 0x40, 0x20, true, 0x2e2af5ba5bedba5d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.VisScreenHeight", vis_screen_height, 0x60, 0x20, true, 0xdfb02ae849599b6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.ScreenStride", screen_stride, 0x80, 0x20, true, 0x67afab8bbe8007a4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.NumberOfPlanes", number_of_planes, 0xa0, 0x20, true, 0x2135ccf2081affe)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.BitsPerPlane", bits_per_plane, 0xc0, 0x20, true, 0x8a3d956e9c11309a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.Frequency", frequency, 0xe0, 0x20, true, 0x369115a9360f3b24)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.XMillimeter", x_millimeter, 0x100, 0x20, true, 0x6a37751b71fc28d4)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.YMillimeter", y_millimeter, 0x120, 0x20, true, 0x52a97709e06833aa)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.NumberRedBits", number_red_bits, 0x140, 0x20, true, 0xbe68f1a419ba998)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.NumberGreenBits", number_green_bits, 0x160, 0x20, true, 0x4840a6bf1c2972da)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.NumberBlueBits", number_blue_bits, 0x180, 0x20, true, 0xd46df40ac1fd1f0f)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.RedMask", red_mask, 0x1a0, 0x20, true, 0x687322763519ac35)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.GreenMask", green_mask, 0x1c0, 0x20, true, 0xf8bf2da81bc3d87)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.BlueMask", blue_mask, 0x1e0, 0x20, true, 0xaa70c4886c0ea802)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.AttributeFlags", attribute_flags, 0x200, 0x20, true, 0xa34edf5b6f29b437)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.VideoMemoryBitmapWidth", video_memory_bitmap_width, 0x220, 0x20, true, 0x79f9cadae1cf7099)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.VideoMemoryBitmapHeight", video_memory_bitmap_height, 0x240, 0x20, true, 0x1b159b233258d76c)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MODE_INFORMATION.DriverSpecificAttributeFlags", driver_specific_attribute_flags, 0x260, 0x20, true, 0xa603d501d8fa2513)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif