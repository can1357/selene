#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ATTRIBUTE_MGMT.Version", version, 0x0, 0x20, true, 0x5b5599ec28151cf8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ATTRIBUTE_MGMT.Size", size, 0x20, 0x20, true, 0x3f3c596cdd0f506b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_attribute_mgmt_action_t), "_STORAGE_ATTRIBUTE_MGMT.Action", action, 0x40, 0x20, true, 0xab9a22ebe9a86e99)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ATTRIBUTE_MGMT.Attribute", attribute, 0x60, 0x20, true, 0x4b1f4fd8efb6cd6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif