#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_PRIMARY_DESC.Flags", flags, 0x0, 0x20, true, 0x71807e17c993334a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_PRIMARY_DESC.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x2e701abe1f23d059)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_mode_desc_t), "DXGI_DDI_PRIMARY_DESC.ModeDesc", mode_desc, 0x40, 0x0, true, 0x48212f684211920a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_PRIMARY_DESC.DriverFlags", driver_flags, 0x140, 0x20, true, 0x8dcbc27aecce337)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif