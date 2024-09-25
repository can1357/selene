#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kpcr_t*), "_KIST_BASE_FRAME.KernelGsBase", kernel_gs_base, 0x0, 0x40, true, 0x1c95741ac8e0893f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kist_link_frame_t*), "_KIST_BASE_FRAME.IstStack", ist_stack, 0x40, 0x40, true, 0x416b5b414e839fd6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KIST_BASE_FRAME.PreviousGsBase", previous_gs_base, 0x80, 0x40, true, 0x23ad8269f0482c4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KIST_BASE_FRAME.PreviousCr3", previous_cr3, 0xc0, 0x40, true, 0x3046e8ca87798b3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KIST_BASE_FRAME.IstPad", ist_pad, 0x100, 0x40, true, 0x9a7dc25b6b5e4e86)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif