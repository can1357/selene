#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_protocol_message_type_t), "_MSV1_0_ENUMUSERS_RESPONSE.MessageType", message_type, 0x0, 0x20, true, 0x66495d8df84f1936)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_ENUMUSERS_RESPONSE.NumberOfLoggedOnUsers", number_of_logged_on_users, 0x20, 0x20, true, 0x905842f046fad20a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t*), "_MSV1_0_ENUMUSERS_RESPONSE.LogonIds", logon_ids, 0x40, 0x40, true, 0x7898b530ef98335e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MSV1_0_ENUMUSERS_RESPONSE.EnumHandles", enum_handles, 0x80, 0x40, true, 0xd4b8f3b9a3bb2898)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif