#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIPI_DSI_TRANSMISSION.TotalBufferSize", total_buffer_size, 0x0, 0x20, true, 0xa7d048cbcc886719)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_TRANSMISSION.PacketCount", packet_count, 0x20, 0x8, true, 0x3c09314e3501885)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_TRANSMISSION.FailedPacket", failed_packet, 0x28, 0x8, true, 0xe853f1ab8335d7ae)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MIPI_DSI_TRANSMISSION.TransmissionMode", transmission_mode, 0x30, 0x2, true, 0xc2b7733ace899ee0, 2, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MIPI_DSI_TRANSMISSION.ReportMipiErrors", report_mipi_errors, 0x32, 0x1, true, 0x159bacf3d53dc198, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MIPI_DSI_TRANSMISSION.ClearMipiErrors", clear_mipi_errors, 0x33, 0x1, true, 0x25c1a846ee403da5, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MIPI_DSI_TRANSMISSION.SecondaryPort", secondary_port, 0x34, 0x1, true, 0x230d2f50e2a02999, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MIPI_DSI_TRANSMISSION.ManufacturingMode", manufacturing_mode, 0x35, 0x1, true, 0x24919ae04fb31ce8, 1, uint16_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIPI_DSI_TRANSMISSION.ReadWordCount", read_word_count, 0x40, 0x10, true, 0xa93f861437e6cb5e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIPI_DSI_TRANSMISSION.FinalCommandExtraPayload", final_command_extra_payload, 0x50, 0x10, true, 0xde0d3deb415594c5)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIPI_DSI_TRANSMISSION.MipiErrors", mipi_errors, 0x60, 0x10, true, 0x57c0e6999f3d5254)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIPI_DSI_TRANSMISSION.HostErrors", host_errors, 0x70, 0x10, true, 0x1607fa6b7f2c43fa)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mipi_dsi_packet_t, 1>), "_MIPI_DSI_TRANSMISSION.Packets", packets, 0x80, 0x70, true, 0x9650d20f5abf0910)
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
#endif