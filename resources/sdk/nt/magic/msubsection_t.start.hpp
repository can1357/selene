#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::subsection_t), "_MSUBSECTION.Core", core, 0x0, 0xc0, true, 0xbd017d6c9718db98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MSUBSECTION.SubsectionNode", subsection_node, 0x1c0, 0xc0, true, 0x42f42885344c9d6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MSUBSECTION.DereferenceList", dereference_list, 0x280, 0x80, true, 0xfedef7c1dd519768)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MSUBSECTION.NumberOfMappedViews", number_of_mapped_views, 0x300, 0x40, true, 0x3f98e0b709590307)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSUBSECTION.NumberOfPfnReferences", number_of_pfn_references, 0x340, 0x20, true, 0x263117d615f6de8c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSUBSECTION.LargeViews", large_views, 0x360, 0x20, true, 0x8db58555688497e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::prototype_ptes_node_t), "_MSUBSECTION.ProtosNode", protos_node, 0x380, 0x0, true, 0x739c7980829cde2b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MSUBSECTION.SubsectionExtentList", subsection_extent_list, 0x0, 0x0, false, 0xe480af0069a3c624)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif