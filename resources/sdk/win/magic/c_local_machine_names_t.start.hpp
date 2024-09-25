#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CLocalMachineNames._lRefs", l_refs, 0x40, 0x20, true, 0xcd0b0350a6a1809e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CLocalMachineNames._dwCursor", dw_cursor, 0x60, 0x20, true, 0x9ea4fbbd9d1477e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_machine_names_helper_t*), "CLocalMachineNames._pMNHelper", p_mn_helper, 0x80, 0x40, true, 0x813946fb98bc3c9c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CLocalMachineNames._fNeedNewData", f_need_new_data, 0xc0, 0x20, true, 0x8d12457afbbb5034)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif