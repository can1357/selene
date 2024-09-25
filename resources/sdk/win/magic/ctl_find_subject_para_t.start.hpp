#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_FIND_SUBJECT_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x8563c8cc7e1d3fa3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_find_usage_para_t*), "_CTL_FIND_SUBJECT_PARA.pUsagePara", p_usage_para, 0x40, 0x40, true, 0xd42cf225d3b67ac3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_FIND_SUBJECT_PARA.dwSubjectType", dw_subject_type, 0x80, 0x20, true, 0xeab8d70fa8144877)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CTL_FIND_SUBJECT_PARA.pvSubject", pv_subject, 0xc0, 0x40, true, 0x2b3692216ea2db67)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif