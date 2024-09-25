#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPCommand.macKDI", mac_kdi, 0x0, 0x80, true, 0x7bf7422921b3defd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPCommand.guidCommandID", guid_command_id, 0x80, 0x80, true, 0x23426e60a6a32a50)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPCommand.dwSequence", dw_sequence, 0x100, 0x20, true, 0x2d3be7a920a0751d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPCommand.cbSizeData", cb_size_data, 0x120, 0x20, true, 0xc33e77ec24652366)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4056>), "_DXVA_COPPCommand.CommandData", command_data, 0x140, 0xc0, true, 0x36032e36108843c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif