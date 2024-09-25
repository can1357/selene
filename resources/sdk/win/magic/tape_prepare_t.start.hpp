#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_PREPARE.Operation", operation, 0x0, 0x20, true, 0x4bd17b60c02554bd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_PREPARE.Immediate", immediate, 0x20, 0x8, true, 0x79594466e71443f8)
#else
#define _m00
#define _m01
#endif