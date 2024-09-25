#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXGK_CHILD_CONTAINER_ID.ContainerId", container_id, 0x0, 0x80, true, 0x1ef5d97efc1e0bd4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_CHILD_CONTAINER_ID.EldInfo.PortId", port_id, 0x0, 0x40, true, 0xc24db12d2c21a42a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_CHILD_CONTAINER_ID.EldInfo.ManufacturerName", manufacturer_name, 0x40, 0x10, true, 0x530544f8bd0365a4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_CHILD_CONTAINER_ID.EldInfo.ProductCode", product_code, 0x50, 0x10, true, 0x40ec29f7f2416d47)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_eld_info_t), "_DXGK_CHILD_CONTAINER_ID.EldInfo", eld_info, 0x80, 0x80, true, 0xf8eafd9e64947c98)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif