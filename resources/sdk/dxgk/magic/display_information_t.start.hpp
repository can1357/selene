#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAY_INFORMATION.Width", width, 0x0, 0x20, true, 0xb24385bae2740045)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAY_INFORMATION.Height", height, 0x20, 0x20, true, 0xa3fd4bc321ee1c82)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAY_INFORMATION.Pitch", pitch, 0x40, 0x20, true, 0x6dff9efccb5530d0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_DXGK_DISPLAY_INFORMATION.ColorFormat", color_format, 0x60, 0x20, true, 0x44a7ed72cf703e00)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_DISPLAY_INFORMATION.PhysicAddress", physic_address, 0x80, 0x40, true, 0xe08c6504a087c095)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAY_INFORMATION.TargetId", target_id, 0xc0, 0x20, true, 0x6713dd94e249ec55)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAY_INFORMATION.AcpiId", acpi_id, 0xe0, 0x20, true, 0xb9af9a370734d02f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif