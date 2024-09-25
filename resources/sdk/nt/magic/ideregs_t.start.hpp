#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDEREGS.bFeaturesReg", b_features_reg, 0x0, 0x8, true, 0xcebc180311305f3d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDEREGS.bSectorCountReg", b_sector_count_reg, 0x8, 0x8, true, 0xd7da8141ff023020)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDEREGS.bSectorNumberReg", b_sector_number_reg, 0x10, 0x8, true, 0xbabd86dd4d510285)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDEREGS.bCylLowReg", b_cyl_low_reg, 0x18, 0x8, true, 0x3970d909a2c7c758)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDEREGS.bCylHighReg", b_cyl_high_reg, 0x20, 0x8, true, 0xc15348abd37cb521)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDEREGS.bDriveHeadReg", b_drive_head_reg, 0x28, 0x8, true, 0xad101f82c5ed2cb2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDEREGS.bCommandReg", b_command_reg, 0x30, 0x8, true, 0xdb62bf74df777a8d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDEREGS.bReserved", b_reserved, 0x38, 0x8, true, 0x9492e06635fb5eea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif