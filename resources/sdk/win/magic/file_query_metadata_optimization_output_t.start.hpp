#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::file_metadata_optimization_state_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.State", state, 0x0, 0x20, true, 0xa74e22f51555476d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.AttributeListSize", attribute_list_size, 0x20, 0x20, true, 0xb50a96ac93ea1f17)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.MetadataSpaceUsed", metadata_space_used, 0x40, 0x20, true, 0x8235467abb577deb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.MetadataSpaceAllocated", metadata_space_allocated, 0x60, 0x20, true, 0x71d5642b3cb2f956)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.NumberOfFileRecords", number_of_file_records, 0x80, 0x20, true, 0x3380909adca9782f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.NumberOfResidentAttributes", number_of_resident_attributes, 0xa0, 0x20, true, 0x8a5750480ecb9d10)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.NumberOfNonresidentAttributes", number_of_nonresident_attributes, 0xc0, 0x20, true, 0x30ce6c2e946c0208)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.TotalInProgress", total_in_progress, 0xe0, 0x20, true, 0x2684021c1e6a81b6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT.TotalPending", total_pending, 0x100, 0x20, true, 0xd81c90d26b6495c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif