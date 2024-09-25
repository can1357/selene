#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Eax", eax, 0x0, 0x20, true, 0xbc47511abb1ef46f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Ebx", ebx, 0x20, 0x20, true, 0x6693be5007eecd5e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Ecx", ecx, 0x40, 0x20, true, 0xa17f71ea39530183)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Edx", edx, 0x60, 0x20, true, 0x84666708cac86da2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Esi", esi, 0x80, 0x20, true, 0x6ed3c5e6007717b7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Edi", edi, 0xa0, 0x20, true, 0x8bd31dd0ee9a985e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Ebp", ebp, 0xc0, 0x20, true, 0xa382827c59a0a269)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Esp", esp, 0xe0, 0x20, true, 0x1c81aa59221c2895)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_X86_REGISTER_STATE.Cs", cs, 0x100, 0x10, true, 0x698a5be4fea3e7a2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_X86_REGISTER_STATE.Ds", ds, 0x110, 0x10, true, 0xf77fe63809b1f43a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_X86_REGISTER_STATE.Ss", ss, 0x120, 0x10, true, 0xc6bba2deab908ab1)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_X86_REGISTER_STATE.Es", es, 0x130, 0x10, true, 0xdd250e351193793b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_X86_REGISTER_STATE.Fs", fs, 0x140, 0x10, true, 0x9943bd97bc5ed499)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_X86_REGISTER_STATE.Gs", gs, 0x150, 0x10, true, 0x1bb58a210205caa8)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Eflags", eflags, 0x160, 0x20, true, 0x7fefe69fe3b982e)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Eip", eip, 0x180, 0x20, true, 0x38d0dec7e05d412e)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Cr0", cr0, 0x1a0, 0x20, true, 0xe4283580662cdd9d)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Cr1", cr1, 0x1c0, 0x20, true, 0x5ff0f81074ce282)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Cr2", cr2, 0x1e0, 0x20, true, 0xbcac9bb13627ecc0)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Cr3", cr3, 0x200, 0x20, true, 0x709b10a2984f9fc7)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_X86_REGISTER_STATE.Cr4", cr4, 0x220, 0x20, true, 0x8933d81ea877f512)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_X86_REGISTER_STATE.Gdtr", gdtr, 0x240, 0x40, true, 0xb785bc68c9465f7c)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_X86_REGISTER_STATE.Idtr", idtr, 0x280, 0x40, true, 0xa6148c4757a9935b)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_X86_REGISTER_STATE.Ldtr", ldtr, 0x2c0, 0x10, true, 0x94e203fa09f68346)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_X86_REGISTER_STATE.Tr", tr, 0x2d0, 0x10, true, 0x16a6f8a5a9f874d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif