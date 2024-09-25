#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_MASK_INFORMATION.CounterMask", counter_mask, 0x0, 0x40, true, 0xf5ba0ede109ae9ce)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_PCW_MASK_INFORMATION.InstanceMask", instance_mask, 0x40, 0x40, true, 0xf75e05023164918b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_MASK_INFORMATION.InstanceId", instance_id, 0x80, 0x20, true, 0x748cf6165fd54185)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCW_MASK_INFORMATION.CollectMultiple", collect_multiple, 0xa0, 0x8, true, 0x9a634be47a42584c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::pcw_buffer_t*), "_PCW_MASK_INFORMATION.Buffer", buffer, 0xc0, 0x40, true, 0xaf54b93e1b3dd9c2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_PCW_MASK_INFORMATION.CancelEvent", cancel_event, 0x100, 0x40, true, 0x91093fdd8eb02d60)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif