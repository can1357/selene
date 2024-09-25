#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DSI_TRANSMISSION.TotalBufferSize", total_buffer_size, 0x0, 0x20, true, 0x27b5c29bf77e1db)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_TRANSMISSION.PacketCount", packet_count, 0x20, 0x8, true, 0xe2f7a76a2cfb9a62)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_TRANSMISSION.FailedPacket", failed_packet, 0x28, 0x8, true, 0x4f7f742af916f7e2)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXGK_DSI_TRANSMISSION.TransmissionMode", transmission_mode, 0x30, 0x2, true, 0x696efc633d0cf827, 2, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DSI_TRANSMISSION.ReportMipiErrors", report_mipi_errors, 0x32, 0x1, true, 0x3558646c494d0e50, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DSI_TRANSMISSION.ClearMipiErrors", clear_mipi_errors, 0x33, 0x1, true, 0xf60181c709b35bbd, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DSI_TRANSMISSION.SecondaryPort", secondary_port, 0x34, 0x1, true, 0x6a532cec2c603d74, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DSI_TRANSMISSION.ManufacturingMode", manufacturing_mode, 0x35, 0x1, true, 0x74aaf3ce75e365ca, 1, uint16_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DSI_TRANSMISSION.ReadWordCount", read_word_count, 0x40, 0x10, true, 0xdc8b62957cd331cd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DSI_TRANSMISSION.FinalCommandExtraPayload", final_command_extra_payload, 0x50, 0x10, true, 0x67386499be8b6401)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DSI_TRANSMISSION.MipiErrors", mipi_errors, 0x60, 0x10, true, 0x5225c0fda73d6607)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DSI_TRANSMISSION.HostErrors", host_errors, 0x70, 0x10, true, 0x836e0a4ba022d42)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::dsi_packet_t, 1>), "_DXGK_DSI_TRANSMISSION.Packets", packets, 0x80, 0x70, true, 0x8b94d11674a9a593)
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