#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROFILE_PARAMETER_BLOCK.Status", status, 0x0, 0x10, true, 0x21d3c138219b5b96)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROFILE_PARAMETER_BLOCK.DockingState", docking_state, 0x20, 0x10, true, 0x2df8733ad76ba843)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROFILE_PARAMETER_BLOCK.Capabilities", capabilities, 0x30, 0x10, true, 0x92e1a6a0526c6aa3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROFILE_PARAMETER_BLOCK.DockID", dock_id, 0x40, 0x20, true, 0x642bda8c11998912)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROFILE_PARAMETER_BLOCK.SerialNumber", serial_number, 0x60, 0x20, true, 0xf85e7c7ad66fbd6c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif