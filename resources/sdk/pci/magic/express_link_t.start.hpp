#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_link_t*), "_EXPRESS_LINK.TargetLink", target_link, 0x0, 0x40, true, 0xea2d3a99edcb5614)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<union pci::express_link_control_register_t, volatile union pci::express_link_control_register_t>), "_EXPRESS_LINK.LinkControl", link_control, 0x40, 0x10, true, 0x6cb81aaf1f389298)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_link_capabilities_register_t), "_EXPRESS_LINK.LinkCapabilities", link_capabilities, 0x60, 0x20, true, 0x7216087be934403e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_link_status_register_t), "_EXPRESS_LINK.LinkStatus", link_status, 0x80, 0x10, true, 0x6b4ae9a620a8c02b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_LINK.L0sSupported", l0s_supported, 0x90, 0x8, true, 0xc80cf2586c9df8db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_LINK.L1Supported", l1_supported, 0x98, 0x8, true, 0x3ec89f61d8eb33f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_LINK.L0sEnabled", l0s_enabled, 0xa0, 0x8, true, 0x967ab0afee75cc91)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_LINK.L1Enabled", l1_enabled, 0xa8, 0x8, true, 0xe12c4caad4fc5d02)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_LINK.L0sExitLatencyLow", l0s_exit_latency_low, 0xc0, 0x20, true, 0x5441e241960412cf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_LINK.L0sExitLatencyHigh", l0s_exit_latency_high, 0xe0, 0x20, true, 0x7691b459c796af4b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_LINK.L1ExitLatencyLow", l1_exit_latency_low, 0x100, 0x20, true, 0xef1befcb70f2630)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_LINK.L1ExitLatencyHigh", l1_exit_latency_high, 0x120, 0x20, true, 0x81037372346b2a82)
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
#define _m09
#define _m10
#define _m11
#endif