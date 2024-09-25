#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.ContextFlags", context_flags, 0x0, 0x20, true, 0xae8ae1d95888b695)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Dr0", dr0, 0x20, 0x20, true, 0x184e2feddcd0625d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Dr1", dr1, 0x40, 0x20, true, 0x2ac21537abfc320e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Dr2", dr2, 0x60, 0x20, true, 0x5da148fea6b81fb5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Dr3", dr3, 0x80, 0x20, true, 0x871e98ed44580f3e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Dr6", dr6, 0xa0, 0x20, true, 0x6bef5e02d517168a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Dr7", dr7, 0xc0, 0x20, true, 0xb2eaa34fb6ddc515)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::wow64_floating_save_area_t), "_WOW64_CONTEXT.FloatSave", float_save, 0xe0, 0x80, true, 0xad0bf30e5e172dae)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.SegGs", seg_gs, 0x460, 0x20, true, 0xbc2f339f65841d4b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.SegFs", seg_fs, 0x480, 0x20, true, 0x758eb6cd7625b7de)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.SegEs", seg_es, 0x4a0, 0x20, true, 0x2dc697951a8e5232)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.SegDs", seg_ds, 0x4c0, 0x20, true, 0x4ddfc6a7b525b661)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Edi", edi, 0x4e0, 0x20, true, 0x813231c29bbd081e)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Esi", esi, 0x500, 0x20, true, 0x32c553185c026956)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Ebx", ebx, 0x520, 0x20, true, 0x6c5071ee0ebc5fe4)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Edx", edx, 0x540, 0x20, true, 0x6e4b66609b0d917e)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Ecx", ecx, 0x560, 0x20, true, 0xe208e694c3eaeda5)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Eax", eax, 0x580, 0x20, true, 0x1a87815b6c6ebc35)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Ebp", ebp, 0x5a0, 0x20, true, 0xa009e07c12f1bed9)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Eip", eip, 0x5c0, 0x20, true, 0xf6d8fde460dbf378)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.SegCs", seg_cs, 0x5e0, 0x20, true, 0xa0b80bc63fb87748)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.EFlags", e_flags, 0x600, 0x20, true, 0x8bf0a00a095a09cc)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.Esp", esp, 0x620, 0x20, true, 0xbc28f86669edfce9)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WOW64_CONTEXT.SegSs", seg_ss, 0x640, 0x20, true, 0xdb25512434911667)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 512>), "_WOW64_CONTEXT.ExtendedRegisters", extended_registers, 0x660, 0x0, true, 0x4ec708c2275a2460)
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