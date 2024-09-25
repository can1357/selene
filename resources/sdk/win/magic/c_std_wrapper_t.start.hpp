#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdWrapper._cRefs", c_refs, 0x60, 0x20, true, 0x172e770850f1221f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdWrapper._cCalls", c_calls, 0x80, 0x20, true, 0x845dc9a9fcbfa449)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStdWrapper._cIFaces", c_i_faces, 0xa0, 0x20, true, 0x765c41c2c7d58420)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_face_entry_t*), "CStdWrapper._pIFaceHead", p_i_face_head, 0xc0, 0x40, true, 0x1f3e40f40729644c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "CStdWrapper._pCtxEntryHead", p_ctx_entry_head, 0x100, 0x40, true, 0xc70cdea95dc742a5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "CStdWrapper._pCtxFreeList", p_ctx_free_list, 0x140, 0x40, true, 0x14ce8829f3aa64d0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CStdWrapper._pServer", p_server, 0x180, 0x40, true, 0x60ff7e7a2a6f1af3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::cid_object_t*), "CStdWrapper._pID", p_id, 0x1c0, 0x40, true, 0x706836885e230647)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CStdWrapper._pVtableAddress", p_vtable_address, 0x200, 0x40, true, 0x28e8b073b2859a1e)
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