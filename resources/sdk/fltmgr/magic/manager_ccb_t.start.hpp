#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_frame_t*), "_MANAGER_CCB.Frame", frame, 0x0, 0x40, true, 0x8439ac6875f880aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGER_CCB.Iterator", iterator, 0x40, 0x20, true, 0xd5da039071f91da)
#else
#define _m00
#define _m01
#endif