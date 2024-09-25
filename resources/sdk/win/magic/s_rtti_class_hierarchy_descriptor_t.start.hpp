#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_s__RTTIClassHierarchyDescriptor.signature", signature, 0x0, 0x20, true, 0xce29bae64a40b8e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_s__RTTIClassHierarchyDescriptor.attributes", attributes, 0x20, 0x20, true, 0xf31573fc8006b2f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_s__RTTIClassHierarchyDescriptor.numBaseClasses", num_base_classes, 0x40, 0x20, true, 0x717525061f34f90b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::s_rtti_base_class_array_t*), "_s__RTTIClassHierarchyDescriptor.pBaseClassArray", p_base_class_array, 0x60, 0x40, true, 0x9023f807e098dc06)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif