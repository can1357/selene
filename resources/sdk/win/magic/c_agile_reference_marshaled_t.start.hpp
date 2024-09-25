#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::objref_t const*), "CAgileReferenceMarshaled._pObjrefTable", p_objref_table, 0x180, 0x40, true, 0x6f7745674b409350)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::objref_t volatile*), "CAgileReferenceMarshaled._pObjrefNormal", p_objref_normal, 0x1c0, 0x40, true, 0x2a274d5f0e65798a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CAgileReferenceMarshaled._channelProcessInitializedCount", channel_process_initialized_count, 0x280, 0x20, true, 0x8bb3930676fabc20)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "CAgileReferenceMarshaled._originalVtable", original_vtable, 0x0, 0x0, false, 0x2d7e6cb555c94959)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif