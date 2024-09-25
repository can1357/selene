#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_VGA_CHAR.Char", _char, 0x0, 0x8, true, 0x9c5834518d365bed)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_VGA_CHAR.Attributes", attributes, 0x8, 0x8, true, 0x98bae196b92c2516)
#else
#define _m00
#define _m01
#endif