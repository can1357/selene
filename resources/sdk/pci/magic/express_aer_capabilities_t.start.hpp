#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_AER_CAPABILITIES.FirstErrorPointer", first_error_pointer, 0x0, 0x5, true, 0x35abed98d4adc474, 5, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_AER_CAPABILITIES.ECRCGenerationCapable", ecrc_generation_capable, 0x5, 0x1, true, 0x7f96e820dbf52a2c, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_AER_CAPABILITIES.ECRCGenerationEnable", ecrc_generation_enable, 0x6, 0x1, true, 0x8300fadaae16f135, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_AER_CAPABILITIES.ECRCCheckCapable", ecrc_check_capable, 0x7, 0x1, true, 0x18b7f4775201be78, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_AER_CAPABILITIES.ECRCCheckEnable", ecrc_check_enable, 0x8, 0x1, true, 0xdcf5ba16b3e938f1, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_AER_CAPABILITIES.MultipleHeaderRecordingCapable", multiple_header_recording_capable, 0x9, 0x1, true, 0xfb48b539c80c2387, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_AER_CAPABILITIES.MultipleHeaderRecordingEnable", multiple_header_recording_enable, 0xa, 0x1, true, 0x8ff6c93dcdb8d4c9, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_AER_CAPABILITIES.TlpPrefixLogPresent", tlp_prefix_log_present, 0xb, 0x1, true, 0xe8498c2c2e7fa498, 1, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_AER_CAPABILITIES.AsULONG", as_ulong, 0x0, 0x20, true, 0x929c1ea475813f27)
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