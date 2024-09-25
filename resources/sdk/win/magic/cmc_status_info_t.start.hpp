#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_STATUS_INFO.dwStatus", dw_status, 0x0, 0x20, true, 0x7fe6ab093bc085ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_STATUS_INFO.cBodyList", c_body_list, 0x20, 0x20, true, 0x437c393a75025415)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CMC_STATUS_INFO.rgdwBodyList", rgdw_body_list, 0x40, 0x40, true, 0xdfbc68771ce925c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CMC_STATUS_INFO.pwszStatusString", pwsz_status_string, 0x80, 0x40, true, 0x4f09b15befc259dc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_STATUS_INFO.dwOtherInfoChoice", dw_other_info_choice, 0xc0, 0x20, true, 0x3a49d833baea2e58)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_STATUS_INFO.dwFailInfo", dw_fail_info, 0x100, 0x20, true, 0x6206c1d4df1579d0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_pend_info_t*), "_CMC_STATUS_INFO.pPendInfo", p_pend_info, 0x100, 0x40, true, 0x31855c370d32bf8d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif