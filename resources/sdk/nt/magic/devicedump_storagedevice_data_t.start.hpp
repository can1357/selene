#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::devicedump_structure_version_t), "_DEVICEDUMP_STORAGEDEVICE_DATA.Descriptor", descriptor, 0x0, 0x60, true, 0x652cfc2673e57f87)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::devicedump_section_header_t), "_DEVICEDUMP_STORAGEDEVICE_DATA.SectionHeader", section_header, 0x60, 0xa0, true, 0x67c02e34532e2829)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGEDEVICE_DATA.dwBufferSize", dw_buffer_size, 0x800, 0x20, true, 0x2046f774b98c7f81)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGEDEVICE_DATA.dwReasonForCollection", dw_reason_for_collection, 0x820, 0x20, true, 0x891020b02a5e604f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::devicedump_subsection_pointer_t), "_DEVICEDUMP_STORAGEDEVICE_DATA.PublicData", public_data, 0x840, 0x60, true, 0x1f2974a623b8ecab)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::devicedump_subsection_pointer_t), "_DEVICEDUMP_STORAGEDEVICE_DATA.RestrictedData", restricted_data, 0x8a0, 0x60, true, 0x7f4cc40fec6ebf92)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::devicedump_subsection_pointer_t), "_DEVICEDUMP_STORAGEDEVICE_DATA.PrivateData", private_data, 0x900, 0x60, true, 0xbb453307eeb34615)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif