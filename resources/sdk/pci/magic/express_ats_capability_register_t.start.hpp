#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_ATS_CAPABILITY_REGISTER.InvalidateQueueDepth", invalidate_queue_depth, 0x0, 0x5, true, 0x1288833b680afbfe, 5, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ATS_CAPABILITY_REGISTER.PageAlignedRequest", page_aligned_request, 0x5, 0x1, true, 0xa1fd5aa2e6329f5c, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ATS_CAPABILITY_REGISTER.GlobalInvalidateSupported", global_invalidate_supported, 0x6, 0x1, true, 0x4e9561f099985180, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ATS_CAPABILITY_REGISTER.RelaxedOrderingSupported", relaxed_ordering_supported, 0x7, 0x1, true, 0xcef60ef3adf63e38, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif