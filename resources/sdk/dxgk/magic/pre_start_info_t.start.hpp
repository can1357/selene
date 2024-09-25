#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PRE_START_INFO.ReservedIn", reserved_in, 0x0, 0x20, true, 0x5c1ea176800e568c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PRE_START_INFO.Input", input, 0x0, 0x20, true, 0x4d177af424034ab3)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRE_START_INFO.SupportPreserveBootDisplay", support_preserve_boot_display, 0x20, 0x1, true, 0xe3ca70098521695, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRE_START_INFO.IsUEFIFrameBufferCpuAccessibleDuringStartup", is_uefi_frame_buffer_cpu_accessible_during_startup, 0x21, 0x1, true, 0xb63dc7ff3e5ef655, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_DXGK_PRE_START_INFO.ReservedOut", reserved_out, 0x22, 0x1e, true, 0x21a8905caaea04f9, 30, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PRE_START_INFO.Output", output, 0x20, 0x20, true, 0x4ae79f8c22974506)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif