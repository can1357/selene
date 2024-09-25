#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_CONFIGURATION.Flags", flags, 0x0, 0x20, true, 0xee8c4dd8c982f025)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(whea_error_source_correct_t ), "_WHEA_ERROR_SOURCE_CONFIGURATION.Correct", correct, 0x40, 0x40, true, 0xe99540b292ff91b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(whea_error_source_initialize_t ), "_WHEA_ERROR_SOURCE_CONFIGURATION.Initialize", initialize, 0x80, 0x40, true, 0xb4737df459265200)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(whea_error_source_create_record_t ), "_WHEA_ERROR_SOURCE_CONFIGURATION.CreateRecord", create_record, 0xc0, 0x40, true, 0x4253ae2a9a6b6388)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(whea_error_source_recover_t ), "_WHEA_ERROR_SOURCE_CONFIGURATION.Recover", recover, 0x100, 0x40, true, 0xf6ad22c6a29f175f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION.Uninitialize", uninitialize, 0x140, 0x40, true, 0x4b9dcefbb5927841)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(whea_error_source_ready_t ), "_WHEA_ERROR_SOURCE_CONFIGURATION.Ready", ready, 0x180, 0x40, true, 0xc5c0b7692daaac2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif