#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NETWORK_APP_INSTANCE_ECP_CONTEXT.Size", size, 0x0, 0x10, true, 0xf8379b004e850d7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NETWORK_APP_INSTANCE_ECP_CONTEXT.AppInstanceID", app_instance_id, 0x20, 0x80, true, 0x2a3a0a86b25dbbe2)
#else
#define _m00
#define _m01
#endif