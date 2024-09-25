#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_SET_POSITION.Method", method, 0x0, 0x20, true, 0xec3589f3b9dbe965)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_SET_POSITION.Partition", partition, 0x20, 0x20, true, 0x22239657cfcbc460)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TAPE_SET_POSITION.Offset", offset, 0x40, 0x40, true, 0x55d55416f15ea2f1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_SET_POSITION.Immediate", immediate, 0x80, 0x8, true, 0xa81224c541bfa1b6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif