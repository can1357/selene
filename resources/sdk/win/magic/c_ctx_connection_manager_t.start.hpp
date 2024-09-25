#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<class win::cp_unk_list_t*, class win::cp_unk_list_t>), "CCtxConnectionManager._pUnkList", p_unk_list, 0x0, 0x40, true, 0xa6092aa4a6770585)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_obj_server_t*), "CCtxConnectionManager._pobjServer", pobj_server, 0x140, 0x40, true, 0xfee66c939ffb5834)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "CCtxConnectionManager._cObjRefs", c_obj_refs, 0x180, 0x20, true, 0xef001a0b242e7bd7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CCtxConnectionManager._disconnecting", disconnecting, 0x1a0, 0x8, true, 0xef7214b6a631e28d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CCtxConnectionManager._hdisconnectEvent", hdisconnect_event, 0x1c0, 0x40, true, 0x950920ebb896cf76)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_mutex_sem2_t), "CCtxConnectionManager._mutex", mutex, 0x200, 0x80, true, 0x4cbd708513db1900)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxConnectionManager._cRefs", c_refs, 0x380, 0x20, true, 0xfd29d41a2d41c799)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 9>), "CCtxConnectionManager._incrementCounts", increment_counts, 0x3a0, 0x20, true, 0x4372c127ed460f3d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 9>), "CCtxConnectionManager._decrementCounts", decrement_counts, 0x4c0, 0x20, true, 0xe7fc005a10083bf)
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