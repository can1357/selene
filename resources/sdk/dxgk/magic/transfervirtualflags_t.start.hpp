#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRANSFERVIRTUALFLAGS.Src64KBPages", src64kb_pages, 0x0, 0x1, true, 0x735d8871bfba3144, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_TRANSFERVIRTUALFLAGS.Dst64KBPages", dst64kb_pages, 0x1, 0x1, true, 0xce93faa30dfceda5, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_TRANSFERVIRTUALFLAGS.Flags", flags, 0x0, 0x20, true, 0x3ac1a15250270864)
#else
#define _m00
#define _m01
#define _m02
#endif