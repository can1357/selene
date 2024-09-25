#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT.Flags", flags, 0x0, 0x20, true, 0xb6b3c30bc9d66c69)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT.AlignmentShift", alignment_shift, 0x20, 0x20, true, 0x5561353626de75fb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT.FileOffsetToAlign", file_offset_to_align, 0x40, 0x40, true, 0x830858531bf8de32)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT.FallbackAlignmentShift", fallback_alignment_shift, 0x80, 0x20, true, 0xc2886dc351d661e0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif