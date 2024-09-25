#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WNF_DELIVERY_DESCRIPTOR.SubscriptionId", subscription_id, 0x0, 0x40, true, 0x2e327df54dc663d0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wnf::state_name_t), "_WNF_DELIVERY_DESCRIPTOR.StateName", state_name, 0x40, 0x40, true, 0x65dbad94bbb943b2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_DELIVERY_DESCRIPTOR.ChangeStamp", change_stamp, 0x80, 0x20, true, 0x2463d87ac17f04b4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_DELIVERY_DESCRIPTOR.StateDataSize", state_data_size, 0xa0, 0x20, true, 0x1c6de508ee307fdd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_DELIVERY_DESCRIPTOR.EventMask", event_mask, 0xc0, 0x20, true, 0xa496fcb04ae0ec3f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wnf::type_id_t), "_WNF_DELIVERY_DESCRIPTOR.TypeId", type_id, 0xe0, 0x80, true, 0x7f24e78b4c2588ed)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_DELIVERY_DESCRIPTOR.StateDataOffset", state_data_offset, 0x160, 0x20, true, 0xa3303c83fd676d77)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif