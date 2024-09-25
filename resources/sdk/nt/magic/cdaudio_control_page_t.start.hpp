#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_CDAUDIO_CONTROL_PAGE.PageCode", page_code, 0x0, 0x6, true, 0x239a007c6b640c21, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDAUDIO_CONTROL_PAGE.PSBit", ps_bit, 0x7, 0x1, true, 0x3faa1e5311b23ebc, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDAUDIO_CONTROL_PAGE.PageLength", page_length, 0x8, 0x8, true, 0xea2d08cdca0b08f0)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDAUDIO_CONTROL_PAGE.StopOnTrackCrossing", stop_on_track_crossing, 0x11, 0x1, true, 0xab83480b72cd4467, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDAUDIO_CONTROL_PAGE.Immediate", immediate, 0x12, 0x1, true, 0x6270d75982e10607, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDAUDIO_CONTROL_PAGE.Obsolete", obsolete, 0x30, 0x10, true, 0x23e749727c79c36c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cdda_output_port_t, 4>), "_CDAUDIO_CONTROL_PAGE.CDDAOutputPorts", cdda_output_ports, 0x40, 0x40, true, 0xc28189c1c810db2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif