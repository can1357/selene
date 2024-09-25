#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_WRITE_MARKS.Type", type, 0x0, 0x20, true, 0x91b70be984b03d1a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_WRITE_MARKS.Count", count, 0x20, 0x20, true, 0xffa49c3e9e65a723)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_WRITE_MARKS.Immediate", immediate, 0x40, 0x8, true, 0xd3872f1ec8afccab)
#else
#define _m00
#define _m01
#define _m02
#endif