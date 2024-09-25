#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagPCB.pPicklingBuff", p_pickling_buff, 0x0, 0x40, true, 0x641ba355b389e732)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagPCB.pTruePicklingBuff", p_true_pickling_buff, 0x40, 0x40, true, 0xa107cadf94a400de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPCB.ulPicklingBuffSize", ul_pickling_buff_size, 0x80, 0x20, true, 0x4b973f59fe4cfe5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPCB.ulBytesUsed", ul_bytes_used, 0xa0, 0x20, true, 0x6762e4c06da21a16)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stream_acl_t), "tagPCB.StreamACL", stream_acl, 0xc0, 0x80, true, 0x9d75c2d4a03c975c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagPCB.PickleHandle", pickle_handle, 0x140, 0x40, true, 0x8fb1685bf3aa5ef7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPCB.bDirtyHandle", b_dirty_handle, 0x180, 0x20, true, 0x751b41deca69c26e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPCB.bPickled", b_pickled, 0x1a0, 0x20, true, 0x81ec6a0f2d94c238)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPCB.ulMaxNumOfStreamACEs", ul_max_num_of_stream_ac_es, 0x1c0, 0x20, true, 0xbfdec87eee0a3c13)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPCB.ulNumOfStreamACEs", ul_num_of_stream_ac_es, 0x1e0, 0x20, true, 0x3ba8551a606a8fcc)
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
#define _m09
#endif