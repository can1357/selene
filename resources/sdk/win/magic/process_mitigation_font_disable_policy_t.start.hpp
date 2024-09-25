#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_FONT_DISABLE_POLICY.Flags", flags, 0x0, 0x20, true, 0xef6a400135066029)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_FONT_DISABLE_POLICY.DisableNonSystemFonts", disable_non_system_fonts, 0x0, 0x1, true, 0x5f460a0e312d5784, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_FONT_DISABLE_POLICY.AuditNonSystemFontLoading", audit_non_system_font_loading, 0x1, 0x1, true, 0xb9d4da5c36b23918, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif