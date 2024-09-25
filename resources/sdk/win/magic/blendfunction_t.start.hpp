#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BLENDFUNCTION.BlendOp", blend_op, 0x0, 0x8, true, 0xb29d5a0df8e64f26)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BLENDFUNCTION.BlendFlags", blend_flags, 0x8, 0x8, true, 0x6cdde6dde5cd5dc9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BLENDFUNCTION.SourceConstantAlpha", source_constant_alpha, 0x10, 0x8, true, 0xcbff8153824be6e9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BLENDFUNCTION.AlphaFormat", alpha_format, 0x18, 0x8, true, 0xd14d909cdcac671b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif