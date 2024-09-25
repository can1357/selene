#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA.DescriptorCount", descriptor_count, 0x0, 0x20, true, 0xaa8ad2643889595e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA.ReturnedDescriptorCount", returned_descriptor_count, 0x20, 0x20, true, 0x47aaa6c656ff846b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA.ElementIdentifierBeingDepoped", element_identifier_being_depoped, 0x40, 0x20, true, 0x924d1ff4f654f42)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::physical_element_status_data_descriptor_t, 1>), "_PHYSICAL_ELEMENT_STATUS_PARAMETER_DATA.Descriptors", descriptors, 0x100, 0x0, true, 0xd681cbb1eb902964)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif