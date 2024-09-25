#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wpp_registration_block_t), "WPP_PROJECT_CONTROL_BLOCK.Registration", registration, 0x0, 0x0, true, 0xe6e602e9f7588d8d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::wpp_trace_control_block_t), "WPP_PROJECT_CONTROL_BLOCK.Control", control, 0x0, 0x80, true, 0xec05098f9fe7f90b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 56>), "WPP_PROJECT_CONTROL_BLOCK.ReserveSpace", reserve_space, 0x0, 0xc0, true, 0x704ee3c5c36e6da8)
#else
#define _m00
#define _m01
#define _m02
#endif