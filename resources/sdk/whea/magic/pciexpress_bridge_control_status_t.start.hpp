#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS.BridgeSecondaryStatus", bridge_secondary_status, 0x0, 0x10, true, 0xf11219acbb8e483a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS.BridgeControl", bridge_control, 0x10, 0x10, true, 0x23333632a253b4ad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS.AsULONG", as_ulong, 0x0, 0x20, true, 0x18f52f0e022825a6)
#else
#define _m00
#define _m01
#define _m02
#endif