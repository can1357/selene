#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_profile_control_area_t*), "_SYSTEM_PROCESSOR_PROFILE_CONTROL_AREA.ProcessorProfileControlArea", processor_profile_control_area, 0x0, 0x40, true, 0x5a9ebbafca80027b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_PROFILE_CONTROL_AREA.Allocate", allocate, 0x40, 0x8, true, 0x87ad8688b9856027)
#else
#define _m00
#define _m01
#endif