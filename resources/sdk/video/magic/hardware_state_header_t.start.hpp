#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.Length", length, 0x0, 0x20, true, 0x9bbc162a2ddf388e)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 48>), "_VIDEO_HARDWARE_STATE_HEADER.PortValue", port_value, 0x20, 0x80, true, 0xef26f11965cb9a7d)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.AttribIndexDataState", attrib_index_data_state, 0x1a0, 0x20, true, 0x6e71de37b46e91ce)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.BasicSequencerOffset", basic_sequencer_offset, 0x1c0, 0x20, true, 0x3d17d54ae890135a)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.BasicCrtContOffset", basic_crt_cont_offset, 0x1e0, 0x20, true, 0xcd2c69b52ab83b10)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.BasicGraphContOffset", basic_graph_cont_offset, 0x200, 0x20, true, 0x41ab967d71e9a63)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.BasicAttribContOffset", basic_attrib_cont_offset, 0x220, 0x20, true, 0x24382ddd4d84d2c8)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.BasicDacOffset", basic_dac_offset, 0x240, 0x20, true, 0x53ffd66aebf8f703)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.BasicLatchesOffset", basic_latches_offset, 0x260, 0x20, true, 0xa53b179c1d1fd63c)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.ExtendedSequencerOffset", extended_sequencer_offset, 0x280, 0x20, true, 0x8ad003fc57debabd)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.ExtendedCrtContOffset", extended_crt_cont_offset, 0x2a0, 0x20, true, 0xd39f85c9ddc8a147)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.ExtendedGraphContOffset", extended_graph_cont_offset, 0x2c0, 0x20, true, 0x75604afb8cdb27da)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.ExtendedAttribContOffset", extended_attrib_cont_offset, 0x2e0, 0x20, true, 0xdbe6c77a57c824cd)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.ExtendedDacOffset", extended_dac_offset, 0x300, 0x20, true, 0x1580ff1d4ae41959)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.ExtendedValidatorStateOffset", extended_validator_state_offset, 0x320, 0x20, true, 0x7bc1c1dccce98bef)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.ExtendedMiscDataOffset", extended_misc_data_offset, 0x340, 0x20, true, 0x17fff47310466476)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.PlaneLength", plane_length, 0x360, 0x20, true, 0xafd12cfb02187f6)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.Plane1Offset", plane1_offset, 0x380, 0x20, true, 0xdec81c18da60c227)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.Plane2Offset", plane2_offset, 0x3a0, 0x20, true, 0x62a9a43225c11896)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.Plane3Offset", plane3_offset, 0x3c0, 0x20, true, 0xc3c926f3a6e3b9aa)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.Plane4Offset", plane4_offset, 0x3e0, 0x20, true, 0x8752d0f85d78624f)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.VGAStateFlags", vga_state_flags, 0x400, 0x20, true, 0x3a246f89b4cf1409)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.DIBOffset", dib_offset, 0x420, 0x20, true, 0x3abf0a2f2a90fe7a)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.DIBBitsPerPixel", dib_bits_per_pixel, 0x440, 0x20, true, 0x4ae211142f09e2be)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.DIBXResolution", dibx_resolution, 0x460, 0x20, true, 0x2deec3e1fbcc285f)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.DIBYResolution", diby_resolution, 0x480, 0x20, true, 0x33245e2f330be7e)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.DIBXlatOffset", dib_xlat_offset, 0x4a0, 0x20, true, 0x529e7c8cc61810ff)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.DIBXlatLength", dib_xlat_length, 0x4c0, 0x20, true, 0xcf22bb928ac2a108)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE_HEADER.VesaInfoOffset", vesa_info_offset, 0x4e0, 0x20, true, 0xa8b956f3a938a336)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_HARDWARE_STATE_HEADER.FrameBufferData", frame_buffer_data, 0x500, 0x40, true, 0x37ba0612476bba6d)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#endif