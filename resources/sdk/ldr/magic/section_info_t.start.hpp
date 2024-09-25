#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_SECTION_INFO.SectionHandle", section_handle, 0x0, 0x40, true, 0x613898d85e994072)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_SECTION_INFO.DesiredAccess", desired_access, 0x40, 0x20, true, 0xd8575868d8ac884f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::object_attributes_t*), "_LDR_SECTION_INFO.ObjA", obj_a, 0x80, 0x40, true, 0x5471015eaa3a66a1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_SECTION_INFO.SectionPageProtection", section_page_protection, 0xc0, 0x20, true, 0x77c4656b724ac5df)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_SECTION_INFO.AllocationAttributes", allocation_attributes, 0xe0, 0x20, true, 0xb3662cff0934dadd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif