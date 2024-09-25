#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::driverescapetype_t), "_D3DDDI_DRIVERESCAPE_TRANSLATEALLOCATIONEHANDLE.EscapeType", escape_type, 0x0, 0x20, true, 0xfcb2a2e2de26a456)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_DRIVERESCAPE_TRANSLATEALLOCATIONEHANDLE.hAllocation", h_allocation, 0x20, 0x20, true, 0x6086504063305692)
#else
#define _m00
#define _m01
#endif