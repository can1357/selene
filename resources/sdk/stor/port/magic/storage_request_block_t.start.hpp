#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_REQUEST_BLOCK.Length", length, 0x0, 0x10, true, 0xac5bbcab484c7556)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_REQUEST_BLOCK.Function", function, 0x10, 0x8, true, 0xab6eeee2c93d8fe8)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_REQUEST_BLOCK.SrbStatus", srb_status, 0x18, 0x8, true, 0xe668b144a5bfffe2)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.Signature", signature, 0x40, 0x20, true, 0x9d1b7901f4392c06)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.Version", version, 0x60, 0x20, true, 0xbe9ceffc9ff56754)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.SrbLength", srb_length, 0x80, 0x20, true, 0x205ce97ad3444251)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.SrbFunction", srb_function, 0xa0, 0x20, true, 0xc09c56d262bb6233)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.SrbFlags", srb_flags, 0xc0, 0x20, true, 0x634dad1c0cf8e874)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.RequestTag", request_tag, 0x100, 0x20, true, 0xb3328bf88d0e6fdd)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_REQUEST_BLOCK.RequestPriority", request_priority, 0x120, 0x10, true, 0x1282fa740ce72511)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_REQUEST_BLOCK.RequestAttribute", request_attribute, 0x130, 0x10, true, 0x75b16479a8102d13)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.TimeOutValue", time_out_value, 0x140, 0x20, true, 0x381c172c47fb9767)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.SystemStatus", system_status, 0x160, 0x20, true, 0xb09497612c57159d)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.ZeroGuard1", zero_guard1, 0x180, 0x20, true, 0xd93446c0a0c8239d)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.AddressOffset", address_offset, 0x1a0, 0x20, true, 0x231bf29047e1c1b8)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.NumSrbExData", num_srb_ex_data, 0x1c0, 0x20, true, 0x60b2bf301762afad)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.DataTransferLength", data_transfer_length, 0x1e0, 0x20, true, 0xde528ed666faf330)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_STORAGE_REQUEST_BLOCK.DataBuffer", data_buffer, 0x200, 0x40, true, 0xff146f747d53458c)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_STORAGE_REQUEST_BLOCK.ZeroGuard2", zero_guard2, 0x240, 0x40, true, 0x6589b44fbb96ad57)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_STORAGE_REQUEST_BLOCK.OriginalRequest", original_request, 0x280, 0x40, true, 0x68eed9e51f32c287)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_STORAGE_REQUEST_BLOCK.ClassContext", class_context, 0x2c0, 0x40, true, 0xcad6d9045f647e)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_STORAGE_REQUEST_BLOCK.PortContext", port_context, 0x300, 0x40, true, 0x9afaf5e5d03d9cb1)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_STORAGE_REQUEST_BLOCK.MiniportContext", miniport_context, 0x340, 0x40, true, 0x287b6bca44f9960f)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::storage_request_block_t*), "_STORAGE_REQUEST_BLOCK.NextSrb", next_srb, 0x380, 0x40, true, 0x42a1e09f868f8fde)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_STORAGE_REQUEST_BLOCK.SrbExDataOffset", srb_ex_data_offset, 0x3c0, 0x20, true, 0x7445f66021829e6e)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.ReservedUlong1", reserved_ulong1, 0x20, 0x20, true, 0x9c8701e5104fd8b6)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.ReservedUlong2", reserved_ulong2, 0xe0, 0x20, true, 0x8741fcf566a2ad0f)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_STORAGE_REQUEST_BLOCK.ReservedUchar", reserved_uchar, 0x20, 0x20, true, 0xb03df744dc176058)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_REQUEST_BLOCK.ReservedUlong", reserved_ulong, 0xe0, 0x20, true, 0x40d9f2a6e0bf5754)
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
#endif