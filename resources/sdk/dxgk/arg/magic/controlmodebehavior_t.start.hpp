#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::mode_behavior_flags_t), "_DXGKARG_CONTROLMODEBEHAVIOR.Request", request, 0x0, 0x20, true, 0xd2db9940bc72969c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::mode_behavior_flags_t), "_DXGKARG_CONTROLMODEBEHAVIOR.Satisfied", satisfied, 0x20, 0x20, true, 0x1da2d06045c54771)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::mode_behavior_flags_t), "_DXGKARG_CONTROLMODEBEHAVIOR.NotSatisfied", not_satisfied, 0x40, 0x20, true, 0xa0dae1e6c8d71272)
#else
#define _m00
#define _m01
#define _m02
#endif