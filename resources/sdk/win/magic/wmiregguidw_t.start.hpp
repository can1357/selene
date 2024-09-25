#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WMIREGGUIDW.Guid", guid, 0x0, 0x80, true, 0xc0d94005a030423)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGGUIDW.Flags", flags, 0x80, 0x20, true, 0xcb6bb7893e78c0ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGGUIDW.InstanceCount", instance_count, 0xa0, 0x20, true, 0x1fd3694558fb5297)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGGUIDW.InstanceNameList", instance_name_list, 0xc0, 0x20, true, 0x696418dca81b59ee)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGGUIDW.BaseNameOffset", base_name_offset, 0xc0, 0x20, true, 0xe132e9dff2314266)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WMIREGGUIDW.Pdo", pdo, 0xc0, 0x40, true, 0x14823df3e532ec4d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WMIREGGUIDW.InstanceInfo", instance_info, 0xc0, 0x40, true, 0x3cb74f4585dcb723)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif