#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::child_status_type_t), "_DXGK_CHILD_STATUS.Type", type, 0x0, 0x20, true, 0x25688221b0325c54)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CHILD_STATUS.ChildUid", child_uid, 0x20, 0x20, true, 0x3a8b55a288eb7895)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_CHILD_STATUS.HotPlug.Connected", connected, 0x0, 0x8, true, 0x30d8c851bd4ac693)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_hot_plug_t), "_DXGK_CHILD_STATUS.HotPlug", hot_plug, 0x40, 0x8, true, 0xed63e811de10dfae)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_CHILD_STATUS.Rotation.Angle", angle, 0x0, 0x8, true, 0x2335373db28f1652)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_rotation_t), "_DXGK_CHILD_STATUS.Rotation", rotation, 0x40, 0x8, true, 0xc3afa00303f29d50)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_CHILD_STATUS.Miracast.Connected", connected, 0x0, 0x8, true, 0xca4cd2478a3ddb33)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_output_technology_t), "_DXGK_CHILD_STATUS.Miracast.MiracastMonitorType", miracast_monitor_type, 0x20, 0x20, true, 0x6ac76f319ad9dd3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_miracast_t), "_DXGK_CHILD_STATUS.Miracast", miracast, 0x40, 0x40, true, 0x921c0f5783bafab6)
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