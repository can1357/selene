#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PO_DEVICE_NOTIFY_ORDER.Locked", locked, 0x0, 0x8, true, 0x533a36c6834a0350)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t**), "_PO_DEVICE_NOTIFY_ORDER.WarmEjectPdoPointer", warm_eject_pdo_pointer, 0x40, 0x40, true, 0x7c9e0281903623bb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct po::notify_order_level_t, 5>), "_PO_DEVICE_NOTIFY_ORDER.OrderLevel", order_level, 0x80, 0x40, true, 0xe35c0d5964f2bd56)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_DEVICE_NOTIFY_ORDER.Flags", flags, 0xbc0, 0x20, true, 0xc5cf28edec732ac8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif