#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PCIE_OVERRIDE_INFO.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x3181fa72751e3140)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_OVERRIDE_INFO.Segment", segment, 0x0, 0x0, false, 0x82270edcf56dbca3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_OVERRIDE_INFO.Bus", bus, 0x0, 0x0, false, 0x114266587e9e3560)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_OVERRIDE_INFO.Device", device, 0x0, 0x0, false, 0x95e13479809bc02a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_OVERRIDE_INFO.Function", function, 0x0, 0x0, false, 0x841e0dfe81acd26a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PCIE_OVERRIDE_INFO.ValidBits", valid_bits, 0x0, 0x0, false, 0x147c0565b7f06e6b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_OVERRIDE_INFO.UncorrectableErrorMask", uncorrectable_error_mask, 0x0, 0x0, false, 0xbeae27c6c8f5edf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_OVERRIDE_INFO.UncorrectableErrorSeverity", uncorrectable_error_severity, 0x0, 0x0, false, 0xbd299934eb96e00b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_OVERRIDE_INFO.CorrectableErrorMask", correctable_error_mask, 0x0, 0x0, false, 0xcc9a4ed1162553ca)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_OVERRIDE_INFO.CapAndControl", cap_and_control, 0x0, 0x0, false, 0x33ef8da21af307e6)
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
#endif