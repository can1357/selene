#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUAD.UseThisFieldToCopy", use_this_field_to_copy, 0x0, 0x40, true, 0xe285c19f63b07dae)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(double), "_QUAD.DoNotUseThisField", do_not_use_this_field, 0x0, 0x40, true, 0x555beea412274157)
#else
#define _m00
#define _m01
#endif