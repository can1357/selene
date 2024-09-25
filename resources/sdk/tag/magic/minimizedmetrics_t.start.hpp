#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMINIMIZEDMETRICS.cbSize", cb_size, 0x0, 0x20, true, 0x33c0a2cd647858a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMINIMIZEDMETRICS.iWidth", i_width, 0x20, 0x20, true, 0x2093ebb63962fd7d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMINIMIZEDMETRICS.iHorzGap", i_horz_gap, 0x40, 0x20, true, 0xbda128f899471aa2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMINIMIZEDMETRICS.iVertGap", i_vert_gap, 0x60, 0x20, true, 0xfec952c9d4f00729)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMINIMIZEDMETRICS.iArrange", i_arrange, 0x80, 0x20, true, 0x55dfe2c0858ae46d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif