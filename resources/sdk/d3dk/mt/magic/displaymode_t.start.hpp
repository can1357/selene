#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DISPLAYMODE.Width", width, 0x0, 0x20, true, 0x57f4f89ea93b6e65)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DISPLAYMODE.Height", height, 0x20, 0x20, true, 0x792db4341120cd9d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DKMT_DISPLAYMODE.Format", format, 0x40, 0x20, true, 0x1f3ff6678c2d09b1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DISPLAYMODE.IntegerRefreshRate", integer_refresh_rate, 0x60, 0x20, true, 0x594ae101030720f9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMT_DISPLAYMODE.RefreshRate", refresh_rate, 0x80, 0x40, true, 0xed5975aa5ab3fdc3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::video_signal_scanline_ordering_t), "_D3DKMT_DISPLAYMODE.ScanLineOrdering", scan_line_ordering, 0xc0, 0x20, true, 0x2c087ed2ecc91a5c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_D3DKMT_DISPLAYMODE.DisplayOrientation", display_orientation, 0xe0, 0x20, true, 0x11905299ac9bb22e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DISPLAYMODE.DisplayFixedOutput", display_fixed_output, 0x100, 0x20, true, 0xc62cae9799a1f73e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::displaymode_flags_t), "_D3DKMT_DISPLAYMODE.Flags", flags, 0x120, 0x40, true, 0xc988d0d9b70f349)
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
#endif