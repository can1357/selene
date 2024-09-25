#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_REQUEST_XLATION_CONTEXT.OldOid", old_oid, 0x0, 0x20, true, 0x79cfe9e7e58b1ec6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_REQUEST_XLATION_CONTEXT.InfoBuf", info_buf, 0x40, 0x40, true, 0x45b63a5fd51b2dbb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_REQUEST_XLATION_CONTEXT.InfoBufLength", info_buf_length, 0x80, 0x20, true, 0x739162a5f3e02e2e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_REQUEST_XLATION_CONTEXT.RcvErrorValue", rcv_error_value, 0xc0, 0x40, true, 0x4cecd3fcc94b45dd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_REQUEST_XLATION_CONTEXT.RcvNoBufferValue", rcv_no_buffer_value, 0x100, 0x40, true, 0x8d20c471cb5538e9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_REQUEST_XLATION_CONTEXT.RcvDiscardsValue", rcv_discards_value, 0x140, 0x40, true, 0xe1858e8892d7403d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_REQUEST_XLATION_CONTEXT.XmitErrorValue", xmit_error_value, 0x180, 0x40, true, 0xf556ddec83d6981a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_REQUEST_XLATION_CONTEXT.Status", status, 0x1c0, 0x20, true, 0x725a50944957c83f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif