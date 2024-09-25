#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETDISPLAYMODE.hDevice", h_device, 0x0, 0x20, true, 0xf50df744d12b7697)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETDISPLAYMODE.hPrimaryAllocation", h_primary_allocation, 0x20, 0x20, true, 0x6ec641bb596760a7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::video_signal_scanline_ordering_t), "_D3DKMT_SETDISPLAYMODE.ScanLineOrdering", scan_line_ordering, 0x40, 0x20, true, 0x6bab0c2979b09b2d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_D3DKMT_SETDISPLAYMODE.DisplayOrientation", display_orientation, 0x60, 0x20, true, 0x8cc2456932cbf8c2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETDISPLAYMODE.PrivateDriverFormatAttribute", private_driver_format_attribute, 0x80, 0x20, true, 0x5458182a753eb51f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::setdisplaymode_flags_t), "_D3DKMT_SETDISPLAYMODE.Flags", flags, 0xa0, 0x40, true, 0x23da621b158280eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif