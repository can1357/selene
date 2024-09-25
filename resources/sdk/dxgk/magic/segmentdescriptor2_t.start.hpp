#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentflags2_t), "_DXGK_SEGMENTDESCRIPTOR2.Flags", flags, 0x0, 0x20, true, 0x26b18e3fbf2ea1fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR2.Size", size, 0x40, 0x40, true, 0xe14e15758b3e2455)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGK_SEGMENTDESCRIPTOR2.pMdl", p_mdl, 0x80, 0x40, true, 0xed5e0beea0a6a982)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_SEGMENTDESCRIPTOR2.BaseAddress", base_address, 0xc0, 0x40, true, 0x45b5dfaf94db7816)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_SEGMENTDESCRIPTOR2.CpuTranslatedAddress", cpu_translated_address, 0x100, 0x40, true, 0x5dac1256aab2bdf9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif