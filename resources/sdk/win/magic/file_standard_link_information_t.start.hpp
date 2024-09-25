#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STANDARD_LINK_INFORMATION.NumberOfAccessibleLinks", number_of_accessible_links, 0x0, 0x20, true, 0x3e14ecaae8c9efb2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STANDARD_LINK_INFORMATION.TotalNumberOfLinks", total_number_of_links, 0x20, 0x20, true, 0x29c5d67478d4cc25)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_LINK_INFORMATION.DeletePending", delete_pending, 0x40, 0x8, true, 0x97fcd7748299b601)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_STANDARD_LINK_INFORMATION.Directory", directory, 0x48, 0x8, true, 0xc44b8a3c9580ad81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif