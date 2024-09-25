#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPStatusOutput.macKDI", mac_kdi, 0x0, 0x80, true, 0xacb271326a3b2f98)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusOutput.cbSizeData", cb_size_data, 0x80, 0x20, true, 0xa2beb2c6beb718e2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4076>), "_DXVA_COPPStatusOutput.COPPStatus", copp_status, 0xa0, 0x60, true, 0x37617930f7aab3a2)
#else
#define _m00
#define _m01
#define _m02
#endif