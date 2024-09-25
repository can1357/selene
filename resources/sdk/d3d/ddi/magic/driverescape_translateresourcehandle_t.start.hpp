#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::driverescapetype_t), "_D3DDDI_DRIVERESCAPE_TRANSLATERESOURCEHANDLE.EscapeType", escape_type, 0x0, 0x20, true, 0xe6af07053368cc4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_DRIVERESCAPE_TRANSLATERESOURCEHANDLE.hResource", h_resource, 0x20, 0x20, true, 0xed1e494b7d69a40d)
#else
#define _m00
#define _m01
#endif