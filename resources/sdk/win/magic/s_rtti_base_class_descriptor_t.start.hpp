#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::type_descriptor_t*), "_s__RTTIBaseClassDescriptor.pTypeDescriptor", p_type_descriptor, 0x0, 0x40, true, 0xa0a03910b85237ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_s__RTTIBaseClassDescriptor.numContainedBases", num_contained_bases, 0x40, 0x20, true, 0x2f545ed65871cca4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::pmd_t), "_s__RTTIBaseClassDescriptor.where", where, 0x60, 0x60, true, 0xbd437f49accfe9a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_s__RTTIBaseClassDescriptor.attributes", attributes, 0xc0, 0x20, true, 0x6aeaa9fe6b66a0ab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::s_rtti_class_hierarchy_descriptor_t*), "_s__RTTIBaseClassDescriptor.pClassDescriptor", p_class_descriptor, 0xe0, 0x40, true, 0xec54acde172524e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif