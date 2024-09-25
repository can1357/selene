#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::vpd_identification_page_t*), "_VPD_ENUMERATOR.pVPDIdPage", p_vpd_id_page, 0x0, 0x40, true, 0xbb2f01b9295dd94b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::vpd_identification_descriptor_t*), "_VPD_ENUMERATOR.pCurrentDescriptor", p_current_descriptor, 0x40, 0x40, true, 0x892ff2096a5848f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VPD_ENUMERATOR.RealPageLength", real_page_length, 0x80, 0x20, true, 0x4397b81ab13e8c3a)
#else
#define _m00
#define _m01
#define _m02
#endif