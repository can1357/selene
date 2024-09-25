#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGINFOW.BufferSize", buffer_size, 0x0, 0x20, true, 0x5039f7dfac46b08c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGINFOW.NextWmiRegInfo", next_wmi_reg_info, 0x20, 0x20, true, 0x16a15e6c2f47558a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGINFOW.RegistryPath", registry_path, 0x40, 0x20, true, 0x56cdf1dd73dc176b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGINFOW.MofResourceName", mof_resource_name, 0x60, 0x20, true, 0xfa48358ef1a9007d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WMIREGINFOW.GuidCount", guid_count, 0x80, 0x20, true, 0x45028acf794a7ae7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::wmiregguidw_t>), "WMIREGINFOW.WmiRegGuid", wmi_reg_guid, 0xc0, 0x0, true, 0x91d71a6dcb4577bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif