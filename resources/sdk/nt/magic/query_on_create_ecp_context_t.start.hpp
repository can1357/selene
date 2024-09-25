#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_ECP_CONTEXT.RequestedClasses", requested_classes, 0x0, 0x20, true, 0xf1112386c91e3698)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_ECP_CONTEXT.ClassesProcessed", classes_processed, 0x20, 0x20, true, 0xea9c75fa5094ef2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_ECP_CONTEXT.ClassesWithErrors", classes_with_errors, 0x40, 0x20, true, 0x8153eb08fffa238f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_ECP_CONTEXT.ClassesWithNoData", classes_with_no_data, 0x60, 0x20, true, 0x504e4f28f9e2a7a8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::query_on_create_file_stat_information_t), "_QUERY_ON_CREATE_ECP_CONTEXT.StatInformation", stat_information, 0x80, 0x40, true, 0xe9f31db278e9e54)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::query_on_create_file_lx_information_t), "_QUERY_ON_CREATE_ECP_CONTEXT.LxInformation", lx_information, 0x2c0, 0xe0, true, 0xfbc9a6e1e8407b35)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::query_on_create_ea_information_t), "_QUERY_ON_CREATE_ECP_CONTEXT.EaInformation", ea_information, 0x3c0, 0x80, true, 0x8281c585861fcbca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif