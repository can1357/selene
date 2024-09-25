#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::kidtentry64_t, 256>), "_KPROCESSOR_DESCRIPTOR_AREA.Idt", idt, 0x0, 0x0, false, 0xab80abc6c67ea671)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktss64_t), "_KPROCESSOR_DESCRIPTOR_AREA.Tss", tss, 0x0, 0x0, false, 0xb8c5714fd98fe90e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPROCESSOR_DESCRIPTOR_AREA.TssSpare", tss_spare, 0x0, 0x0, false, 0x7e13aa8e30b14345)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kpcr_t*), "_KPROCESSOR_DESCRIPTOR_AREA.KernelGsBase", kernel_gs_base, 0x0, 0x0, false, 0x1c19bb71c8cb6a3e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPROCESSOR_DESCRIPTOR_AREA.IdleStack", idle_stack, 0x0, 0x0, false, 0x5592ed3aca5f7450)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3888>), "_KPROCESSOR_DESCRIPTOR_AREA.TssPad", tss_pad, 0x0, 0x0, false, 0xbf613e29bd2fb500)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4096>), "_KPROCESSOR_DESCRIPTOR_AREA.GdtPadTemp", gdt_pad_temp, 0x0, 0x0, false, 0xa4a4231ba4adf00f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::kgdtentry64_t, 5>), "_KPROCESSOR_DESCRIPTOR_AREA.Gdt", gdt, 0x0, 0x0, false, 0xb90ffe83190c89ff)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kldtentry_t), "_KPROCESSOR_DESCRIPTOR_AREA.GdtCmTebDescriptor", gdt_cm_teb_descriptor, 0x0, 0x0, false, 0xcf436a8818b3057f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4088>), "_KPROCESSOR_DESCRIPTOR_AREA.GdtEndPadding", gdt_end_padding, 0x0, 0x0, false, 0x6d1c845e4e5a9c2b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ktransition_stack_t, 8>), "_KPROCESSOR_DESCRIPTOR_AREA.TransitionStack", transition_stack, 0x0, 0x0, false, 0x89cf1b92e5ec59b9)
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
#endif