#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.IEEECompanyId", ieee_company_id, 0x20, 0x20, true, 0xda0032959cc4baee)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.SavedInternalStatusDataSetOneLength", saved_internal_status_data_set_one_length, 0x40, 0x10, true, 0x1213323584e53456)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.SavedInternalStatusDataSetTwoLength", saved_internal_status_data_set_two_length, 0x50, 0x10, true, 0x995ae7d9a90801e0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.SavedInternalStatusDataSetThreeLength", saved_internal_status_data_set_three_length, 0x60, 0x10, true, 0x971a36fa258c8b9a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.SavedInternalStatusDataSetFourLength", saved_internal_status_data_set_four_length, 0x70, 0x20, true, 0x2ee2ca561864e0b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.NewSavedDataAvailable", new_saved_data_available, 0xbf0, 0x8, true, 0x3392c4b620e89c45)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.SavedDataGenerationNumber", saved_data_generation_number, 0xbf8, 0x8, true, 0x2b0e0a22226e5162)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.SavedReasonIdentifier", saved_reason_identifier, 0xc00, 0x0, true, 0xb109ce33ad900e33)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SAVED_INTERNAL_STATUS_PARAMETER_DATA.SavedInternalStatusData", saved_internal_status_data, 0x1000, 0x8, true, 0x7e2874248353881b)
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