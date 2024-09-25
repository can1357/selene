#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.SourceValidation", source_validation, 0x0, 0x1, true, 0x6049742366269a50, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.TranslationBlocking", translation_blocking, 0x1, 0x1, true, 0xc7c7163710e24fc1, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.RequestRedirect", request_redirect, 0x2, 0x1, true, 0x6dff0f577399e89e, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.CompletionRedirect", completion_redirect, 0x3, 0x1, true, 0x1cc92c18a7c9468e, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.UpstreamForwarding", upstream_forwarding, 0x4, 0x1, true, 0x472b501fc8995977, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.EgressControl", egress_control, 0x5, 0x1, true, 0xaea9bb253ae6e225, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.DirectTranslation", direct_translation, 0x6, 0x1, true, 0x7a90a6c656367733, 1, uint16_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ACS_CONTROL.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x7284f44272a16035)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.IoBlocking", io_blocking, 0x7, 0x1, true, 0x27bde75f58a1ca45, 1, uint16_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_ACS_CONTROL.DspMemoryControl", dsp_memory_control, 0x8, 0x2, true, 0x9e2e95244e950999, 2, uint16_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_ACS_CONTROL.UspMemoryControl", usp_memory_control, 0xa, 0x2, true, 0x253b457406609101, 2, uint16_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ACS_CONTROL.UnclaimedRedirect", unclaimed_redirect, 0xc, 0x1, true, 0xb1c6eac89236bee2, 1, uint16_t)
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