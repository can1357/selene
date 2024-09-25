#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONLIST.hAllocation", h_allocation, 0x0, 0x20, true, 0xea5b1c607663ce38)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ALLOCATIONLIST.WriteOperation", write_operation, 0x20, 0x1, true, 0x8cf4fbd008297424, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ALLOCATIONLIST.DoNotRetireInstance", do_not_retire_instance, 0x21, 0x1, true, 0x6f64ebae8c6889a1, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_D3DDDI_ALLOCATIONLIST.OfferPriority", offer_priority, 0x22, 0x3, true, 0x40845b49847152ef, 3, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONLIST.Value", value, 0x20, 0x20, true, 0xd9492f96998abafd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif