#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum kuser::dpi_hosting_behavior_t), "tagDPIHOSTINGBEHAVIORINFO.dpiHostingBehavior", dpi_hosting_behavior, 0x0, 0x20, true, 0x7565b61164e3b6d2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDPIHOSTINGBEHAVIORINFO.fDirty", f_dirty, 0x20, 0x20, true, 0x8a87870b691c78a9)
#else
#define _m00
#define _m01
#endif