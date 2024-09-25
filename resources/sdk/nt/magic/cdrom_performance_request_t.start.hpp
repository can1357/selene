#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::cdrom_performance_request_type_t), "_CDROM_PERFORMANCE_REQUEST.RequestType", request_type, 0x0, 0x20, true, 0x324ac9142d55e0a3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::cdrom_performance_type_t), "_CDROM_PERFORMANCE_REQUEST.PerformanceType", performance_type, 0x20, 0x20, true, 0xede194709ef0cb27)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::cdrom_performance_exception_type_t), "_CDROM_PERFORMANCE_REQUEST.Exceptions", exceptions, 0x40, 0x20, true, 0x3659810536e5edc2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::cdrom_performance_tolerance_type_t), "_CDROM_PERFORMANCE_REQUEST.Tolerance", tolerance, 0x60, 0x20, true, 0xeab72fe541d7d7a3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CDROM_PERFORMANCE_REQUEST.StaringLba", staring_lba, 0x80, 0x20, true, 0x864c692c5948563c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif