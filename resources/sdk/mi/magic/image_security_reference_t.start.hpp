#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_IMAGE_SECURITY_REFERENCE.DynamicRelocations", dynamic_relocations, 0x100, 0x40, true, 0x66228c489c28e8c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::security_context_t), "_MI_IMAGE_SECURITY_REFERENCE.SecurityContext", security_context, 0x140, 0x40, true, 0x52602712811574bb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_IMAGE_SECURITY_REFERENCE.StrongImageReference", strong_image_reference, 0x1c0, 0x40, true, 0x4f87aa65a8f494fe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::prototype_ptes_node_t), "_MI_IMAGE_SECURITY_REFERENCE.ProtosNode", protos_node, 0x0, 0x0, true, 0x498517229b2d268f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_IMAGE_SECURITY_REFERENCE.ImageFileExtents", image_file_extents, 0x180, 0x40, true, 0xd48f51472fb75f65)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_IMAGE_SECURITY_REFERENCE.ImageFileExtentsUlongPtr", image_file_extents_ulong_ptr, 0x180, 0x40, true, 0x62b87678e5384b4c)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_IMAGE_SECURITY_REFERENCE.FilesystemWantsRva", filesystem_wants_rva, 0x180, 0x1, true, 0x585ce19d18840d75, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif