#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPropsOutInfo.cIfs", c_ifs, 0x0, 0x20, true, 0x4c610e918128adb6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "tagPropsOutInfo.piid", piid, 0x40, 0x40, true, 0xf0c8dcd8baebae00)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult*), "tagPropsOutInfo.phresults", phresults, 0x80, 0x40, true, 0xdba537303832bde)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t**), "tagPropsOutInfo.ppIntfData", pp_intf_data, 0xc0, 0x40, true, 0x5b77d13a9861303a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif