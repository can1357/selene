#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_I2C_INTERFACE.Size", size, 0x0, 0x10, true, 0xad4a9bb49f420db5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_I2C_INTERFACE.Version", version, 0x10, 0x10, true, 0xa064212daee30f40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_I2C_INTERFACE.Context", context, 0x40, 0x40, true, 0x976db13e1bca56c3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_I2C_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xcdec9914b97fbdda)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_I2C_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xbe6b0bc13bd988fe)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_i2c_transmit_data_to_display_t ), "_DXGK_I2C_INTERFACE.DxgkDdiI2CTransmitDataToDisplay", dxgk_ddi_i2c_transmit_data_to_display, 0x100, 0x40, true, 0xab06a617884185ba)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_i2c_receive_data_from_display_t ), "_DXGK_I2C_INTERFACE.DxgkDdiI2CReceiveDataFromDisplay", dxgk_ddi_i2c_receive_data_from_display, 0x140, 0x40, true, 0x4a2d279d3efe687a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif