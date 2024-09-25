#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_STREAM_INFO.cbContent", cb_content, 0x0, 0x20, true, 0x49d2afd0efe5ddc0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_cmsg_stream_output_t ), "_CMSG_STREAM_INFO.pfnStreamOutput", pfn_stream_output, 0x40, 0x40, true, 0xb072ae4638fc1ac1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_STREAM_INFO.pvArg", pv_arg, 0x80, 0x40, true, 0xf644cff8419cdd38)
#else
#define _m00
#define _m01
#define _m02
#endif