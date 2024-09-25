#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_HOOK_PROCESS_INFO.DdiCallStatus", ddi_call_status, 0x0, 0x20, true, 0x9b2d538c63e387a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VF_HOOK_PROCESS_INFO.DonotCallKmdfLib", donot_call_kmdf_lib, 0x20, 0x8, true, 0xb6ad7287c18439ae)
#else
#define _m00
#define _m01
#endif