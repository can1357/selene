#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::restart_attributes_t*), "_NDIS_RESTART_ATTRIBUTES.Next", next, 0x0, 0x40, true, 0x319ae65823e7751b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_ATTRIBUTES.Oid", oid, 0x40, 0x20, true, 0xea8dce08f268c851)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RESTART_ATTRIBUTES.DataLength", data_length, 0x60, 0x20, true, 0xea5baa3e0d1ad55a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_RESTART_ATTRIBUTES.Data", data, 0x80, 0x8, true, 0xfb8d77b02674b44e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif