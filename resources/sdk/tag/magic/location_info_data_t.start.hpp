#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagLocationInfoData.machineName", machine_name, 0x0, 0x40, true, 0x550d88fe381999ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLocationInfoData.processId", process_id, 0x40, 0x20, true, 0x85efc817bf903253)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLocationInfoData.apartmentId", apartment_id, 0x60, 0x20, true, 0x4120e23146fde082)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLocationInfoData.contextId", context_id, 0x80, 0x20, true, 0x505b99381644cabe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif