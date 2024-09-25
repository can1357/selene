#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DVTDINFO.cbConvertSize", cb_convert_size, 0x0, 0x0, false, 0x92b70c37cad110a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DVTDINFO.cchDrvName", cch_drv_name, 0x0, 0x0, false, 0x683af90008bb60fa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DVTDINFO.cchDevName", cch_dev_name, 0x0, 0x0, false, 0x123a26759866460c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DVTDINFO.cchPortName", cch_port_name, 0x0, 0x0, false, 0xe0e1460318025110)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif