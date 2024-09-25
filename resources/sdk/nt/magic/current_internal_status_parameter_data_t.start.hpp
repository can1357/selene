#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.IEEECompanyId", ieee_company_id, 0x20, 0x20, true, 0x544afe43c021c55f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.CurrentInternalStatusDataSetOneLength", current_internal_status_data_set_one_length, 0x40, 0x10, true, 0x4078ea56adf3597)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.CurrentInternalStatusDataSetTwoLength", current_internal_status_data_set_two_length, 0x50, 0x10, true, 0x2acc6c73e7eb5e89)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.CurrentInternalStatusDataSetThreeLength", current_internal_status_data_set_three_length, 0x60, 0x10, true, 0xb253273bcf633c59)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.CurrentInternalStatusDataSetFourLength", current_internal_status_data_set_four_length, 0x70, 0x20, true, 0xccde808e01ecd954)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.NewSavedDataAvailable", new_saved_data_available, 0xbf0, 0x8, true, 0x9001a0a7ed324ac0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.SavedDataGenerationNumber", saved_data_generation_number, 0xbf8, 0x8, true, 0x2406f5aac9718eb7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.CurrentReasonIdentifier", current_reason_identifier, 0xc00, 0x0, true, 0xf240269ba5cfd56b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_CURRENT_INTERNAL_STATUS_PARAMETER_DATA.CurrentInternalStatusData", current_internal_status_data, 0x1000, 0x8, true, 0xd4100b7f09adb31e)
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