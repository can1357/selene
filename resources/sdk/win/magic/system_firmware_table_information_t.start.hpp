#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FIRMWARE_TABLE_INFORMATION.ProviderSignature", provider_signature, 0x0, 0x20, true, 0x3441488c774e937c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::system_firmware_table_action_t), "_SYSTEM_FIRMWARE_TABLE_INFORMATION.Action", action, 0x20, 0x20, true, 0x7070ae4dd49ea3a7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FIRMWARE_TABLE_INFORMATION.TableID", table_id, 0x40, 0x20, true, 0x2affca5ce080c81)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FIRMWARE_TABLE_INFORMATION.TableBufferLength", table_buffer_length, 0x60, 0x20, true, 0x641c212a4311699)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SYSTEM_FIRMWARE_TABLE_INFORMATION.TableBuffer", table_buffer, 0x80, 0x8, true, 0x622402cf160daf4b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif