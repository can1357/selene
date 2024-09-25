#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.SourceValidation", source_validation, 0x0, 0x1, true, 0xf8b04a99e9433cb5, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.TranslationBlocking", translation_blocking, 0x1, 0x1, true, 0x8f61e50ed52a5fe7, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.RequestRedirect", request_redirect, 0x2, 0x1, true, 0xb10c8a5340059477, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.CompletionRedirect", completion_redirect, 0x3, 0x1, true, 0x701a63fabe2be009, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.UpstreamForwarding", upstream_forwarding, 0x4, 0x1, true, 0x3ccc65d85cca90c1, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.EgressControl", egress_control, 0x5, 0x1, true, 0x7e29b19d9708de87, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.DirectTranslation", direct_translation, 0x6, 0x1, true, 0xc7db690e2bb672e8, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.EgressControlVectorSize", egress_control_vector_size, 0x8, 0x8, true, 0xbcf86cce8e4bf6dc, 8, uint16_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xdfc7a2995f2b0934)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CAPABILITY_REGISTER.EnhancedCapability", enhanced_capability, 0x7, 0x1, true, 0x40bc277f3f6be9b0, 1, uint16_t)
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