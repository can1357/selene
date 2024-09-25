#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CLASS_VPD_B1_DATA.CommandStatus", command_status, 0x0, 0x20, true, 0x1da8b6b4cd9621bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLASS_VPD_B1_DATA.MediumRotationRate", medium_rotation_rate, 0x20, 0x10, true, 0x840d68bdef15299c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_VPD_B1_DATA.NominalFormFactor", nominal_form_factor, 0x30, 0x8, true, 0x1e8f6253c2355bda)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_VPD_B1_DATA.Zoned", zoned, 0x38, 0x8, true, 0xe0e75c2093f8bef9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B1_DATA.MediumProductType", medium_product_type, 0x40, 0x20, true, 0x7694479924d9514f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B1_DATA.DepopulationTime", depopulation_time, 0x60, 0x20, true, 0x8306e1fb6968db96)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif