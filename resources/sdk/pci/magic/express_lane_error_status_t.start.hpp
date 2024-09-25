#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_LANE_ERROR_STATUS.LaneBitmap", lane_bitmap, 0x0, 0x20, true, 0x7413a5ea3e50c1f2)
#else
#define _m00
#endif