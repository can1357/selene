#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_D3DKMT_ADAPTERREGISTRYINFO.AdapterString", adapter_string, 0x0, 0x40, true, 0x1cd452d3d3e3474e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_D3DKMT_ADAPTERREGISTRYINFO.BiosString", bios_string, 0x1040, 0x40, true, 0xb9442024d7831ad9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_D3DKMT_ADAPTERREGISTRYINFO.DacType", dac_type, 0x2080, 0x40, true, 0x103ab8071fc54cd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_D3DKMT_ADAPTERREGISTRYINFO.ChipType", chip_type, 0x30c0, 0x40, true, 0x76dcc159722c81a0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif