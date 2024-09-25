#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_ROM_BLOCK.Address", address, 0x0, 0x20, true, 0x9cffb7add5d806e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_ROM_BLOCK.Size", size, 0x20, 0x20, true, 0x8c2e73f85684bc65)
#else
#define _m00
#define _m01
#endif