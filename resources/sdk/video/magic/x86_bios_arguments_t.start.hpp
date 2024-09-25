#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_X86_BIOS_ARGUMENTS.Eax", eax, 0x0, 0x20, true, 0xebae7a9a5aa3e7cc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_X86_BIOS_ARGUMENTS.Ebx", ebx, 0x20, 0x20, true, 0x59b921405e2912ca)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_X86_BIOS_ARGUMENTS.Ecx", ecx, 0x40, 0x20, true, 0x353385ddacb101e8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_X86_BIOS_ARGUMENTS.Edx", edx, 0x60, 0x20, true, 0xa880c0aa11c45e8f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_X86_BIOS_ARGUMENTS.Esi", esi, 0x80, 0x20, true, 0x4f78a68f32e132d6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_X86_BIOS_ARGUMENTS.Edi", edi, 0xa0, 0x20, true, 0xe180c8fd1f074117)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_X86_BIOS_ARGUMENTS.Ebp", ebp, 0xc0, 0x20, true, 0x8c64cc5619d24b46)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif